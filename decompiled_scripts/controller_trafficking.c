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
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	BOOL bLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	BOOL bLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	float fLocal_56 = 0f;
	BOOL bLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 5;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 5;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 5;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	BOOL bLocal_78 = 0;
	var uLocal_79 = 0;
#endregion

void main() // Position - 0x0
{
	int ms;
	int num;
	int num2;

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
	fLocal_29 = 10000000f;
	uLocal_30 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_33 = -1;
	uLocal_48 = { 2136.133f, 4780.5635f, 39.9702f };
	uLocal_53 = { 2149.737f, 4798.4717f, 40.1071f };
	fLocal_56 = 55.4847f;

	if (unk_0x96CFB880BAC634CE(82))
		func_199();

	func_198(17);
	func_197();
	ms = 0;
	num = 0;
	num2 = 0;

	while (true)
	{
		if (func_196() == 309)
			bLocal_35 = true;
		else
			bLocal_35 = false;
	
		if (func_183())
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				fLocal_29 = SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), uLocal_30);
		
			func_181(&num);
			func_31(&num2);
		
			if (iLocal_45 > 3)
			{
				if (fLocal_29 < 600f)
				{
					if (func_28(0) == false && unk_0x1DD05E817C89C737() - uLocal_79 > 2000)
					{
						uLocal_79 = unk_0x1DD05E817C89C737();
						func_3();
					}
				}
			}
		
			ms = 0;
		}
		else
		{
			if (!bLocal_44)
			{
				if (func_2(105))
				{
					func_1(105, false, false);
					Global_113810.f_19986.f_14 = 0;
				}
			}
			else
			{
				Global_113810.f_19986.f_14 = 0;
			}
		
			if (!bLocal_44)
			{
				if (func_2(106))
				{
					func_1(106, false, false);
					Global_113810.f_19986.f_13 = 0;
				}
			}
			else
			{
				Global_113810.f_19986.f_13 = 0;
			}
		
			ms = 1000;
		}
	
		SYSTEM::WAIT(ms);
	}

	return;
}

void func_1(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A4
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

BOOL func_2(int iParam0) // Position - 0x2A4
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return unk_0xC450B06E5AAA0985(Global_32663[num /*23*/].f_19);
}

void func_3() // Position - 0x2E0
{
	func_4(&(Global_104373.f_2890), &Global_104373, 0, 1, 1, 0);
	return;
}

void func_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2FB
{
	int num;

	if (iParam2 == 0)
		iParam2 = unk_0x4A8C381C258A124D();

	if (unk_0xFC8BFE4B41177C22(iParam2))
		uParam1->f_5 = func_27(iParam2);

	if (func_19(iParam2, &num, iParam3, iParam5))
		func_5(uParam0, uParam1, num, iParam4);
	else if (unk_0xFC8BFE4B41177C22(num))
		if (!unk_0x1C2F771CDC87A3A5(num, 0))
			if (unk_0x2E6A27037F1DC473(num, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), num, 0))
				func_5(uParam0, uParam1, num, iParam4);

	return;
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x383
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_7(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
	
		if (func_6(iParam2))
			uParam1->f_3 = 1;
		else
			uParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_6(int iParam0) // Position - 0x3C3
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_100833.f_22[i] == iParam0)
			return true;
	}

	return false;
}

void func_7(var uParam0, int iParam1, int iParam2) // Position - 0x3F1
{
	func_14(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_10(iParam1, 145, 0);
	uParam0->f_11 = func_9(iParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_8(iParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(iParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(iParam1) };
	
		if (unk_0x5105BE70DEF1F5FB(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_78384 == iParam1)
			uParam0->f_9 = 1;
	}

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_8(int iParam0) // Position - 0x4CD
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_77479.f_484[i]))
			if (iParam0 == Global_77479.f_484[i])
				return 1;
	}

	return 0;
}

int func_9(int iParam0) // Position - 0x50F
{
	int i;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 145;

	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98144[i]))
			if (Global_98144[i] == iParam0)
				return Global_98154[i];
	}

	return 145;
}

int func_10(int iParam0, int iParam1, int iParam2) // Position - 0x572
{
	int i;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 0;

	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98144[i]))
			if (Global_98144[i] == iParam0)
				if (iParam1 == 145 || iParam1 == Global_98154[i])
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_11(iParam1, iParam2))
						return 1;
	}

	return 0;
}

int func_11(int iParam0, int iParam1) // Position - 0x600
{
	int num;

	if (func_13(iParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_12(iParam0, &num, iParam1);
		return num;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_12(int iParam0, var uParam1, int iParam2) // Position - 0x642
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("tailgater");
		
			if (Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case 2:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113810.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case 1:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_113810.f_9088.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_13(int iParam0) // Position - 0x898
{
	return iParam0 < 3;
}

void func_14(int iParam0, var uParam1) // Position - 0x8A4
{
	int i;

	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_18(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (unk_0xF1B79038130E3C08(iParam0, 2))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
	
		if (unk_0xF1B79038130E3C08(iParam0, 3))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
	
		if (unk_0xF1B79038130E3C08(iParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
	
		if (unk_0xF1B79038130E3C08(iParam0, 1))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_17(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
	
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
				
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
	
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
	
		if (unk_0xFDA2576D37032738(iParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
	
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
	
		func_16(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, i + 1))
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_15(i + 1));
		}
	
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
	
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
	}

	return;
}

int func_15(int iParam0) // Position - 0xB4D
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_16(var uParam0, var uParam1, var uParam2) // Position - 0xBFD
{
	int i;
	int num;

	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
		return 0;

	if (unk_0x90E3EAFF8AAA1A42(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		num = i;
	
		if (num == 17 || num == 18 || num == 19 || num == 20 || num == 21)
		{
			uParam1->[i] = 0;
		
			if (unk_0x1D5A665629D417A7(*uParam0, num))
				uParam1->[i] = 1;
		}
		else if (num == 22)
		{
			if (unk_0x1D5A665629D417A7(*uParam0, num))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = unk_0x94C9CD3D66808551(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = unk_0xEFDD8C5443F6C9E4(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = unk_0xEFDD8C5443F6C9E4(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_17(int iParam0) // Position - 0xDF0
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_18(var uParam0) // Position - 0xE10
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_19(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0xEC0
{
	var unk;

	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
				*uParam1 = unk_0xDC8D5832207C2EAD();
			else
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
		
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
								return false;
					
						if (func_20(*uParam1, func_22(), true))
						{
							unk = unk_0x1AF90EB93E0012D6();
						
							if (!unk_0x1B79E937E91F40C3(unk, "save_anywhere"))
								return false;
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
								return false;
						}
					
						if (iParam3 == 1)
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_20(int iParam0, int iParam1, BOOL bParam2) // Position - 0xFEC
{
	int i;
	var unk;
	int num;

	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		return false;

	for (i = 0; func_21(iParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113810.f_7232[num], 0))
			if (unk_0xFE448E8C2209CA31(&unk, iParam0))
				return true;
	}

	return false;
}

BOOL func_21(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x105A
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

int func_22() // Position - 0x112B
{
	func_23();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_23() // Position - 0x1144
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_25(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_27(unk_0x4A8C381C258A124D());
		
			if (func_13(num) && !func_24(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_13(Global_113810.f_2366.f_539.f_4321))
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

BOOL func_24(int iParam0) // Position - 0x1241
{
	return Global_43377 == iParam0;
}

int func_25(int iParam0) // Position - 0x124F
{
	if (func_13(iParam0))
		return func_26(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_26(int iParam0) // Position - 0x1274
{
	return Global_2058[iParam0 /*29*/];
}

int func_27(int iParam0) // Position - 0x1283
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(iParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_25(i) == num)
				return i;
		}
	}

	return 145;
}

BOOL func_28(int iParam0) // Position - 0x12C0
{
	if (Global_43377 == 15)
		return false;

	if (func_29(iParam0))
		return false;

	return true;
}

BOOL func_29(int iParam0) // Position - 0x12E2
{
	return func_30(iParam0, Global_43377);
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x12F3
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

void func_31(var uParam0) // Position - 0x14D4
{
	BOOL flag;
	var unk;
	var unk2;
	int num;
	struct<97> args;
	int num2;

	flag = false;

	if (iLocal_51 != 9)
	{
		if (!Global_113810.f_19986.f_13)
		{
			if (Global_113810.f_19986.f_1 == 0 && Global_113810.f_19986.f_2 == 0)
			{
				if (!func_180(Global_113810.f_19986, 32))
				{
					func_177("MG_TRAF_AVAIL" /*Trevor can now do air and ground trafficking missions, available at ~BLIP_ARMS_DEALING_AIR~ and ~BLIP_ARMS_DEALING~*/, 0, 0, -1, 10000, 7, 0, 0, 0);
					func_175(&(Global_113810.f_19986), 32);
				}
			}
		
			func_1(106, true, false);
			Global_113810.f_19986.f_13 = 1;
			flag = true;
		}
		else
		{
			flag = true;
		}
	}
	else
	{
		func_1(106, false, false);
		Global_113810.f_19986.f_13 = 0;
	}

	if (iLocal_51 != 1 && iLocal_51 != 8)
	{
		if (func_174() && !*uParam0)
		{
			func_173(false);
			iLocal_51 = 1;
		}
	}

	switch (iLocal_51)
	{
		case 0:
			iLocal_51 = 1;
			break;
	
		case 1:
			if (!func_174())
				if (fLocal_29 < 50625f)
					iLocal_51 = 2;
				else if (bLocal_35)
					iLocal_51 = 2;
			break;
	
		case 2:
			unk_0xEC9DAA34BBB4658C(joaat("dune"));
			iLocal_51 = 3;
			break;
	
		case 3:
			if (unk_0x6252BC0DD8A320DB(joaat("dune")))
			{
				unk_0x60040CDD28AA1BC3(uLocal_53, 4f, 0, 0, 0, 0, 0, 0, 0);
			
				if (unk_0xFC8BFE4B41177C22(uLocal_52))
					unk_0x8C1F7D7A31B2A38E(&uLocal_52);
			
				uLocal_52 = unk_0x5779387E956077A6(func_172(), uLocal_53, fLocal_56, 1, 1, 0);
				unk_0x4DC72C4B884A6C59(uLocal_52, 0);
				unk_0x55098D9E9AD58806(func_172());
			
				if (unk_0xFC8BFE4B41177C22(uLocal_52))
				{
					if (unk_0x579FA5568DE0C2A0(uLocal_52, 1))
						unk_0xD772F6AA66750D2B(uLocal_52, 1, 1);
				
					if (unk_0x579FA5568DE0C2A0(uLocal_52, 2))
						unk_0xD772F6AA66750D2B(uLocal_52, 2, 0);
				
					if (unk_0x579FA5568DE0C2A0(uLocal_52, 3))
						unk_0xD772F6AA66750D2B(uLocal_52, 3, 0);
				
					unk_0xD133EF7430EDCD09(uLocal_52, 0, 0);
				}
			
				iLocal_51 = 4;
			}
			break;
	
		case 5:
			if (fLocal_29 >= 50625f && !*uParam0)
			{
				func_173(false);
				iLocal_51 = 1;
				return;
			}
			break;
	
		case 4:
			func_171();
		
			if (!bLocal_35)
			{
				if (fLocal_29 >= 50625f && !*uParam0)
				{
					func_173(false);
					iLocal_51 = 1;
					return;
				}
			}
		
			if (!flag && !*uParam0)
			{
				!flag;
				!*uParam0;
			
				if (!bLocal_57)
				{
					if (unk_0x7F420695E3F776FB(uLocal_26, 0))
					{
						unk = unk_0xCDA725BC2F170795(uLocal_26);
					
						if (unk == uLocal_52)
						{
							bLocal_57 = true;
							unk_0x68298CA6191CDFDB(&uLocal_52);
							iLocal_51 = 9;
						}
					}
				}
			
				return;
			}
		
			if (*uParam0)
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uLocal_52, 0))
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), uLocal_52, -1);
		
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uLocal_52, 0))
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), uLocal_52, 1))
					func_170();
		
			if (!unk_0x1C2F771CDC87A3A5(uLocal_52, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk2 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				
					if (unk2 == uLocal_52)
					{
						if (SYSTEM::VDIST2(uLocal_53, unk_0xD1A6A821F5AC81DB(uLocal_26, 1)) < 100f)
						{
							unk_0x97A5024CE91641F1("Traffick_Ground");
						
							if (unk_0xFC8BFE4B41177C22(iLocal_27) && !unk_0x1C2F771CDC87A3A5(iLocal_27, 0))
								if (unk_0x4B423FAA24E8ABF0(iLocal_27) != joaat("dune") && unk_0x4B423FAA24E8ABF0(iLocal_27) != joaat("cuban800"))
									func_142(iLocal_27, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, false);
								else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
									unk_0xE3A0299C9DEE59C8(iLocal_27);
						
							iLocal_51 = 6;
						}
					}
				}
			}
			break;
	
		case 6:
			if (unk_0xA6E4F7A73ABC4A76("Traffick_Ground"))
			{
				num = 0;
			
				if (*uParam0)
				{
					num = 1;
				}
				else
				{
					num = func_140(&iLocal_33, 6, 9, false, 0);
					bLocal_43 = true;
				}
			
				if (num == 1)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
				
					if (!*uParam0)
						func_84("Traffick_Ground", 0);
				
					args = -1;
					args.f_8 = 4;
					args.f_13 = 2;
					args.f_16 = 4;
					args.f_29 = 4;
					args.f_61 = 9;
					args.f_71 = 4;
					args.f_76 = 8;
					args.f_85 = 4;
					args.f_90 = 6;
					iLocal_28 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &args, 97, 57500);
					func_81(16);
					unk_0xFD49725F3FE7EE13("Traffick_Ground");
					unk_0xEE0BCDB1B5E36BCB(uLocal_52, 1, 0);
					unk_0x68298CA6191CDFDB(&uLocal_52);
				
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						if (Global_44569 == true)
							func_72(unk_0x4A8C381C258A124D());
				
					bLocal_57 = false;
					iLocal_51 = 7;
				}
				else if (num == 0)
				{
					bLocal_43 = false;
					func_173(false);
					iLocal_51 = 9;
				}
			}
			break;
	
		case 7:
			if (!unk_0xF40767E41852FB72(iLocal_28))
			{
				iLocal_51 = 9;
			
				if (func_180(Global_112460, 2))
				{
					iLocal_51 = 8;
				}
				else
				{
					func_71(&iLocal_33);
					func_54();
					iLocal_34 = 1;
					num2 = func_53();
					func_45(&num2, 0, 0, 3, 0, 0, 0);
					Global_113810.f_19986.f_12 = num2;
					func_1(106, false, false);
					Global_113810.f_19986.f_13 = 0;
				}
			
				*uParam0 = 0;
				func_43(&Global_112460, 2);
			}
			break;
	
		case 8:
			if (Global_100833 == 10)
			{
				if (Global_100867)
				{
					*uParam0 = 1;
					unk_0x97A5024CE91641F1("Traffick_Ground");
					iLocal_51 = 2;
				}
				else
				{
					*uParam0 = 0;
					iLocal_51 = 2;
				}
			}
			else if (Global_100833 == 13)
			{
				func_71(&iLocal_33);
				func_54();
				*uParam0 = 0;
				iLocal_51 = 2;
			}
			break;
	
		case 9:
			if (fLocal_29 >= 50625f && func_32(Global_113810.f_19986.f_12))
			{
				func_173(false);
				iLocal_51 = 1;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_32(int iParam0) // Position - 0x1A36
{
	return func_33(func_53(), iParam0);
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x1A48
{
	int num;
	int num2;

	if (!func_41(iParam1) || !func_41(iParam0))
		return 1;

	num = func_39(iParam0);
	num2 = func_39(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_38(iParam0);
	num2 = func_38(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_37(iParam0);
	num2 = func_37(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_36(iParam0);
	num2 = func_36(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_35(iParam0);
	num2 = func_35(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_34(iParam0);
	num2 = func_34(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_34(int iParam0) // Position - 0x1B54
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_35(int iParam0) // Position - 0x1B67
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_36(int iParam0) // Position - 0x1B7A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_37(int iParam0) // Position - 0x1B8D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_38(int iParam0) // Position - 0x1B9F
{
	return iParam0 & 15;
}

int func_39(int iParam0) // Position - 0x1BAC
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_40(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1BCE
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_41(int iParam0) // Position - 0x1BE5
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_34(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_35(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_36(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_39(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_38(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_37(iParam0);

	if (num6 < 1 || num6 > func_42(num5, num4))
		return false;

	return true;
}

int func_42(int iParam0, int iParam1) // Position - 0x1CC1
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

void func_43(int iParam0, int iParam1) // Position - 0x1D63
{
	func_44(iParam0, iParam1);
	return;
}

void func_44(int iParam0, int iParam1) // Position - 0x1D73
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1D88
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_39(*uParam0);
	i = func_38(*uParam0);
	num2 = func_37(*uParam0);
	j = func_36(*uParam0);
	k = func_35(*uParam0);
	l = func_34(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_42(i, num); num2 > m; m = func_42(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_46(uParam0, l, k, j, num2, i, num);
	return;
}

void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1F0A
{
	func_52(uParam0, iParam1);
	func_51(uParam0, iParam2);
	func_50(uParam0, iParam3);
	func_49(uParam0, iParam5);
	func_48(uParam0, iParam4);
	func_47(uParam0, iParam6);
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0x1F42
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_48(var uParam0, int iParam1) // Position - 0x1FC8
{
	int num;
	int num2;

	num = func_38(*uParam0);
	num2 = func_39(*uParam0);

	if (iParam1 < 1 || iParam1 > func_42(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_49(var uParam0, int iParam1) // Position - 0x2019
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_50(var uParam0, int iParam1) // Position - 0x204C
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_51(var uParam0, int iParam1) // Position - 0x2086
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_52(var uParam0, int iParam1) // Position - 0x20C1
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_53() // Position - 0x20FD
{
	var unk;

	func_52(&unk, unk_0x4BA5A16068183C5E());
	func_51(&unk, unk_0x18E502A71E28968C());
	func_50(&unk, unk_0x5295501D0862870D());
	func_48(&unk, unk_0xB12880C92EA6EE15());
	func_49(&unk, unk_0x8825A6E0A30BDCB8());
	func_47(&unk, unk_0x7598FE4545010A75());
	return unk;
}

void func_54() // Position - 0x2143
{
	func_70();
	func_63();
	func_59();
	func_58();
	func_57();
	func_56();
	Global_100870 = 0;
	Global_94988 = -1;
	unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 17);
	Global_100868 = 0;
	unk_0xD43B9D1692F5C06E(0);
	unk_0x72B1E2693AC30407(0);
	unk_0x40AC02FA167D4D0A(1);
	unk_0x332262819D51DF61(1);
	unk_0x31E8D1058586E006(1);
	func_55(0);
	return;
}

void func_55(int iParam0) // Position - 0x219C
{
	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_100833.f_20), 13);
	else
		unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 13);

	return;
}

void func_56() // Position - 0x21C5
{
	Global_78930 = { 0f, 0f, 0f };
	Global_78933 = 0f;
	Global_100833.f_21 = 145;
	return;
}

void func_57() // Position - 0x21E3
{
	TEXT_LABEL_ASSIGN_STRING(&Global_78922, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_78926, "", 16);
	return;
}

void func_58() // Position - 0x21FD
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		Global_100833.f_22[i] = 0;
	}

	return;
}

void func_59() // Position - 0x2222
{
	Global_100833 = 13;
	Global_100833.f_1 = -1;
	Global_100833.f_2 = 0;
	Global_100833.f_30 = 0f;
	unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 25);
	Global_100867 = false;
	func_62(0);
	func_61();
	func_60();
	Global_100833.f_18 = -1;
	Global_100833.f_19 = -1;
	return;
}

void func_60() // Position - 0x2271
{
	unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 22);
	unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 8);
	return;
}

void func_61() // Position - 0x2291
{
	if (Global_100833.f_16 != 0)
	{
		unk_0xD314260005F064BF(&(Global_100833.f_16));
		Global_100833.f_16 = 0;
	}

	if (Global_100833.f_17 != 0)
	{
		unk_0xD314260005F064BF(&(Global_100833.f_17));
		Global_100833.f_17 = 0;
	}

	return;
}

void func_62(int iParam0) // Position - 0x22CF
{
	if (iParam0 == 1)
		Global_43926 = 1;
	else
		Global_43926 = 0;

	return;
}

void func_63() // Position - 0x22E8
{
	func_64(&Global_107357);
	return;
}

void func_64(var uParam0) // Position - 0x22F8
{
	int i;
	int j;

	*uParam0 = 145;
	func_69(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;

	for (j = 0; j < 3; j = j + 1)
	{
		uParam0->f_9[j] = -1;
		uParam0->f_13[j] = 0;
		uParam0->f_17[j] = 0;
		uParam0->f_21[j] = 0;
		func_68(&uParam0->f_25[0 /*295*/][j /*98*/]);
		func_68(&uParam0->f_25[1 /*295*/][j /*98*/]);
	
		for (i = 0; i < 12; i = i + 1)
		{
			uParam0->f_616[j /*65*/][i] = -1;
			uParam0->f_616[j /*65*/].f_13[i] = -1;
			uParam0->f_616[j /*65*/].f_26[i] = -1;
		}
	
		uParam0->f_616[j /*65*/].f_59 = 0;
		uParam0->f_616[j /*65*/].f_60 = -99;
		uParam0->f_616[j /*65*/].f_61 = 2;
		uParam0->f_616[j /*65*/].f_62 = 0;
		uParam0->f_616[j /*65*/].f_63 = -99;
		uParam0->f_616[j /*65*/].f_64 = 1;
	
		for (i = 0; i < 9; i = i + 1)
		{
			uParam0->f_616[j /*65*/].f_39[i] = -1;
			uParam0->f_616[j /*65*/].f_49[i] = -1;
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j /*477*/][i /*5*/].f_1 = 0;
			uParam0->f_812[j /*477*/][i /*5*/].f_2 = 0;
			uParam0->f_812[j /*477*/][i /*5*/].f_3 = 0;
			uParam0->f_812[j /*477*/][i /*5*/].f_4 = 0;
			uParam0->f_812[j /*477*/][i /*5*/] = 0;
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j /*477*/].f_221[i /*5*/].f_1 = 0;
			uParam0->f_812[j /*477*/].f_221[i /*5*/].f_2 = 0;
			uParam0->f_812[j /*477*/].f_221[i /*5*/].f_3 = 0;
			uParam0->f_812[j /*477*/].f_221[i /*5*/].f_4 = 0;
			uParam0->f_812[j /*477*/].f_221[i /*5*/] = 0;
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			uParam0->f_2244[j /*32*/][i] = 0;
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			uParam0->f_2244[j /*32*/].f_5[i] = 0;
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			uParam0->f_2244[j /*32*/].f_16[i] = 0;
		}
	
		uParam0->f_2341[j] = 0;
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j /*15*/][i] = 0;
			uParam0->f_2838[j /*15*/].f_5[i] = 0;
			uParam0->f_2838[j /*15*/].f_10[i] = 0;
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j /*164*/][i] = 0;
			uParam0->f_2345[j /*164*/].f_4[i] = 0;
			uParam0->f_2345[j /*164*/].f_8[i] = 0;
			uParam0->f_2345[j /*164*/].f_12[i] = 0;
			uParam0->f_2345[j /*164*/].f_16[i] = 0;
			uParam0->f_2345[j /*164*/].f_20[i] = 0;
			uParam0->f_2345[j /*164*/].f_24[i] = 0;
			uParam0->f_2345[j /*164*/].f_28[i] = 0;
			uParam0->f_2345[j /*164*/].f_32[i] = 0;
			uParam0->f_2345[j /*164*/].f_36[i] = 0;
			uParam0->f_2345[j /*164*/].f_40[i] = 0;
			uParam0->f_2345[j /*164*/].f_44[i] = 0;
			uParam0->f_2345[j /*164*/].f_48[i] = 0;
			uParam0->f_2345[j /*164*/].f_52[i] = 0;
			uParam0->f_2345[j /*164*/].f_56[i] = 0;
			uParam0->f_2345[j /*164*/].f_60[i] = 0;
			uParam0->f_2345[j /*164*/].f_64[i] = 0;
			uParam0->f_2345[j /*164*/].f_68[i] = 0;
			uParam0->f_2345[j /*164*/].f_72[i] = 0;
			uParam0->f_2345[j /*164*/].f_76[i] = 0;
			uParam0->f_2345[j /*164*/].f_80[i] = 0;
			uParam0->f_2345[j /*164*/].f_84[i] = 0;
			uParam0->f_2345[j /*164*/].f_88[i] = 0;
			uParam0->f_2345[j /*164*/].f_92[i] = 0;
			uParam0->f_2345[j /*164*/].f_96[i] = 0;
			uParam0->f_2345[j /*164*/].f_100[i] = 0;
			uParam0->f_2345[j /*164*/].f_104[i] = 0;
			uParam0->f_2345[j /*164*/].f_108[i] = 0;
			uParam0->f_2345[j /*164*/].f_112[i] = 0;
			uParam0->f_2345[j /*164*/].f_116[i] = 0;
			uParam0->f_2345[j /*164*/].f_120[i] = 0;
			uParam0->f_2345[j /*164*/].f_124[i] = 0;
			uParam0->f_2345[j /*164*/].f_128[i] = 0;
			uParam0->f_2345[j /*164*/].f_132[i] = 0;
			uParam0->f_2345[j /*164*/].f_136[i] = 0;
			uParam0->f_2345[j /*164*/].f_140[i] = 0;
			uParam0->f_2345[j /*164*/].f_144[i] = 0;
			uParam0->f_2345[j /*164*/].f_148[i] = 0;
			uParam0->f_2345[j /*164*/].f_152[i] = 0;
			uParam0->f_2345[j /*164*/].f_156[i] = 0;
			uParam0->f_2345[j /*164*/].f_160[i] = 0;
		}
	}

	func_67(&(uParam0->f_2884));
	func_66(&(uParam0->f_2890));
	func_65(&(uParam0->f_2980));
	return;
}

void func_65(var uParam0) // Position - 0x2888
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

void func_66(var uParam0) // Position - 0x28A3
{
	func_18(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	return;
}

void func_67(var uParam0) // Position - 0x28D2
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	return;
}

void func_68(var uParam0) // Position - 0x28F0
{
	int i;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;

	for (i = 0; i <= 11; i = i + 1)
	{
		uParam0->f_11[i] = 0;
	}

	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_27), "", 16);

	for (i = 0; i <= 48; i = i + 1)
	{
		uParam0->f_31[i] = 0;
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		uParam0->f_81[i] = 0;
	}

	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
	return;
}

void func_69(var uParam0) // Position - 0x29D0
{
	*uParam0 = -15;
	return;
}

void func_70() // Position - 0x29DE
{
	TEXT_LABEL_ASSIGN_STRING(&Global_104365, "", 32);
	func_64(&Global_104373);
	return;
}

void func_71(var uParam0) // Position - 0x29F7
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_43339))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
	return;
}

void func_72(int iParam0) // Position - 0x2A34
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return;

	num = func_80(iParam0);

	if (!(num == -1))
	{
		num2 = Global_44355[num /*5*/];
		func_75(1, num2, 1);
		return;
	}

	num3 = func_74(iParam0);

	if (num3 == -1)
		return;

	func_73(num3);
	return;
}

void func_73(int iParam0) // Position - 0x2A8D
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_44329[iParam0 /*5*/].f_1 == 0))
		if (Global_44329[iParam0 /*5*/].f_1 == unk_0x4A8C381C258A124D())
			Global_44567 = 0;

	Global_44329[iParam0 /*5*/] = 13;
	Global_44329[iParam0 /*5*/].f_1 = 0;
	Global_44329[iParam0 /*5*/].f_2 = 0;
	Global_44329[iParam0 /*5*/].f_3 = 0;
	Global_44329[iParam0 /*5*/].f_4 = 0;
	Global_44327 = Global_44327 - 1;

	if (Global_44327 < 0)
		Global_44327 = 0;

	return;
}

int func_74(int iParam0) // Position - 0x2B10
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44329[i /*5*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_75(int iParam0, int iParam1, int iParam2) // Position - 0x2B41
{
	func_76(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2B56
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_78(iParam0, iParam1, iParam2))
		return;

	num = func_77();

	if (num == -1)
		return;

	Global_44436[num /*6*/] = iParam0;
	Global_44436[num /*6*/].f_1 = iParam1;
	Global_44436[num /*6*/].f_2 = iParam2;
	Global_44436[num /*6*/].f_3 = iParam3;
	Global_44436[num /*6*/].f_4 = iParam4;
	Global_44436[num /*6*/].f_5 = iParam5;
	return;
}

int func_77() // Position - 0x2BD8
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44436[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_78(int iParam0, int iParam1, int iParam2) // Position - 0x2C09
{
	if (func_79(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_79(int iParam0, int iParam1, int iParam2) // Position - 0x2C24
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44436[i /*6*/].f_2)
			if (iParam0 == Global_44436[i /*6*/])
				if (iParam1 == Global_44436[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_80(int iParam0) // Position - 0x2C70
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_44355[i /*5*/] == -1))
			if (iParam0 == Global_44355[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_81(int iParam0) // Position - 0x2CB9
{
	int num;
	var unk;

	if (unk_0x1226C55CA7D2269A() || func_83())
	{
		num = iParam0;
		unk_0x012C74D626CB4559(8, &num, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_82())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "SPMG_", 24);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&unk, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &unk);
	}

	return;
}

BOOL func_82() // Position - 0x2D10
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

BOOL func_83() // Position - 0x2D26
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

void func_84(char* sParam0, int iParam1) // Position - 0x2D3C
{
	unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 17);
	func_85(sParam0, iParam1, 0);
	return;
}

void func_85(char* sParam0, int iParam1, int iParam2) // Position - 0x2D59
{
	if (Global_100833 != 10 && Global_100833 != 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_104365, sParam0, 32);
		func_87(&Global_104373, sParam0, 0, "Start", iParam1, iParam2);
		func_86();
		Global_94991 = 0;
	}

	return;
}

void func_86() // Position - 0x2D9D
{
	int i;
	int j;

	Global_107357 = Global_104373;
	Global_107357.f_1 = Global_104373.f_1;
	Global_107357.f_6 = Global_104373.f_6;
	Global_107357.f_7 = Global_104373.f_7;
	Global_107357.f_8 = Global_104373.f_8;
	Global_107357.f_2 = Global_104373.f_2;
	Global_107357.f_3 = Global_104373.f_3;
	Global_107357.f_4 = Global_104373.f_4;
	Global_107357.f_5 = Global_104373.f_5;

	for (j = 0; j < 3; j = j + 1)
	{
		Global_107357.f_9[j] = Global_104373.f_9[j];
		Global_107357.f_13[j] = Global_104373.f_13[j];
		Global_107357.f_17[j] = Global_104373.f_17[j];
		Global_107357.f_21[j] = Global_104373.f_21[j];
		Global_107357.f_25[0 /*295*/][j /*98*/] = { Global_104373.f_25[0 /*295*/][j /*98*/] };
		Global_107357.f_25[1 /*295*/][j /*98*/] = { Global_104373.f_25[1 /*295*/][j /*98*/] };
	
		for (i = 0; i < 12; i = i + 1)
		{
			Global_107357.f_616[j /*65*/][i] = Global_104373.f_616[j /*65*/][i];
			Global_107357.f_616[j /*65*/].f_13[i] = Global_104373.f_616[j /*65*/].f_13[i];
			Global_107357.f_616[j /*65*/].f_26[i] = Global_104373.f_616[j /*65*/].f_26[i];
		}
	
		Global_107357.f_616[j /*65*/].f_59 = Global_104373.f_616[j /*65*/].f_59;
		Global_107357.f_616[j /*65*/].f_60 = Global_104373.f_616[j /*65*/].f_60;
		Global_107357.f_616[j /*65*/].f_61 = Global_104373.f_616[j /*65*/].f_61;
		Global_107357.f_616[j /*65*/].f_62 = Global_104373.f_616[j /*65*/].f_62;
		Global_107357.f_616[j /*65*/].f_63 = Global_104373.f_616[j /*65*/].f_63;
		Global_107357.f_616[j /*65*/].f_64 = Global_104373.f_616[j /*65*/].f_64;
	
		for (i = 0; i < 9; i = i + 1)
		{
			Global_107357.f_616[j /*65*/].f_39[i] = Global_104373.f_616[j /*65*/].f_39[i];
			Global_107357.f_616[j /*65*/].f_49[i] = Global_104373.f_616[j /*65*/].f_49[i];
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			Global_107357.f_812[j /*477*/][i /*5*/] = { Global_104373.f_812[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			Global_107357.f_812[j /*477*/].f_221[i /*5*/] = { Global_104373.f_812[j /*477*/].f_221[i /*5*/] };
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			Global_107357.f_2244[j /*32*/][i] = Global_104373.f_2244[j /*32*/][i];
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_107357.f_2244[j /*32*/].f_5[i] = Global_104373.f_2244[j /*32*/].f_5[i];
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			Global_107357.f_2244[j /*32*/].f_16[i] = Global_104373.f_2244[j /*32*/].f_16[i];
		}
	
		Global_107357.f_2341[j] = Global_104373.f_2341[j];
	
		for (i = 0; i <= 3; i = i + 1)
		{
			Global_107357.f_2838[j /*15*/][i] = Global_104373.f_2838[j /*15*/][i];
			Global_107357.f_2838[j /*15*/].f_5[i] = Global_104373.f_2838[j /*15*/].f_5[i];
			Global_107357.f_2838[j /*15*/].f_10[i] = Global_104373.f_2838[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			Global_107357.f_2345[j /*164*/][i] = Global_104373.f_2345[j /*164*/][i];
			Global_107357.f_2345[j /*164*/].f_4[i] = Global_104373.f_2345[j /*164*/].f_4[i];
			Global_107357.f_2345[j /*164*/].f_8[i] = Global_104373.f_2345[j /*164*/].f_8[i];
			Global_107357.f_2345[j /*164*/].f_12[i] = Global_104373.f_2345[j /*164*/].f_12[i];
			Global_107357.f_2345[j /*164*/].f_16[i] = Global_104373.f_2345[j /*164*/].f_16[i];
			Global_107357.f_2345[j /*164*/].f_20[i] = Global_104373.f_2345[j /*164*/].f_20[i];
			Global_107357.f_2345[j /*164*/].f_24[i] = Global_104373.f_2345[j /*164*/].f_24[i];
			Global_107357.f_2345[j /*164*/].f_28[i] = Global_104373.f_2345[j /*164*/].f_28[i];
			Global_107357.f_2345[j /*164*/].f_32[i] = Global_104373.f_2345[j /*164*/].f_32[i];
			Global_107357.f_2345[j /*164*/].f_36[i] = Global_104373.f_2345[j /*164*/].f_36[i];
			Global_107357.f_2345[j /*164*/].f_40[i] = Global_104373.f_2345[j /*164*/].f_40[i];
			Global_107357.f_2345[j /*164*/].f_44[i] = Global_104373.f_2345[j /*164*/].f_44[i];
			Global_107357.f_2345[j /*164*/].f_48[i] = Global_104373.f_2345[j /*164*/].f_48[i];
			Global_107357.f_2345[j /*164*/].f_52[i] = Global_104373.f_2345[j /*164*/].f_52[i];
			Global_107357.f_2345[j /*164*/].f_56[i] = Global_104373.f_2345[j /*164*/].f_56[i];
			Global_107357.f_2345[j /*164*/].f_60[i] = Global_104373.f_2345[j /*164*/].f_60[i];
			Global_107357.f_2345[j /*164*/].f_64[i] = Global_104373.f_2345[j /*164*/].f_64[i];
			Global_107357.f_2345[j /*164*/].f_68[i] = Global_104373.f_2345[j /*164*/].f_68[i];
			Global_107357.f_2345[j /*164*/].f_72[i] = Global_104373.f_2345[j /*164*/].f_72[i];
			Global_107357.f_2345[j /*164*/].f_76[i] = Global_104373.f_2345[j /*164*/].f_76[i];
			Global_107357.f_2345[j /*164*/].f_80[i] = Global_104373.f_2345[j /*164*/].f_80[i];
			Global_107357.f_2345[j /*164*/].f_84[i] = Global_104373.f_2345[j /*164*/].f_84[i];
			Global_107357.f_2345[j /*164*/].f_88[i] = Global_104373.f_2345[j /*164*/].f_88[i];
			Global_107357.f_2345[j /*164*/].f_92[i] = Global_104373.f_2345[j /*164*/].f_92[i];
			Global_107357.f_2345[j /*164*/].f_96[i] = Global_104373.f_2345[j /*164*/].f_96[i];
			Global_107357.f_2345[j /*164*/].f_100[i] = Global_104373.f_2345[j /*164*/].f_100[i];
			Global_107357.f_2345[j /*164*/].f_104[i] = Global_104373.f_2345[j /*164*/].f_104[i];
			Global_107357.f_2345[j /*164*/].f_108[i] = Global_104373.f_2345[j /*164*/].f_108[i];
			Global_107357.f_2345[j /*164*/].f_112[i] = Global_104373.f_2345[j /*164*/].f_112[i];
			Global_107357.f_2345[j /*164*/].f_116[i] = Global_104373.f_2345[j /*164*/].f_116[i];
			Global_107357.f_2345[j /*164*/].f_120[i] = Global_104373.f_2345[j /*164*/].f_120[i];
			Global_107357.f_2345[j /*164*/].f_124[i] = Global_104373.f_2345[j /*164*/].f_124[i];
			Global_107357.f_2345[j /*164*/].f_128[i] = Global_104373.f_2345[j /*164*/].f_128[i];
			Global_107357.f_2345[j /*164*/].f_132[i] = Global_104373.f_2345[j /*164*/].f_132[i];
			Global_107357.f_2345[j /*164*/].f_136[i] = Global_104373.f_2345[j /*164*/].f_136[i];
			Global_107357.f_2345[j /*164*/].f_140[i] = Global_104373.f_2345[j /*164*/].f_140[i];
			Global_107357.f_2345[j /*164*/].f_144[i] = Global_104373.f_2345[j /*164*/].f_144[i];
			Global_107357.f_2345[j /*164*/].f_148[i] = Global_104373.f_2345[j /*164*/].f_148[i];
			Global_107357.f_2345[j /*164*/].f_152[i] = Global_104373.f_2345[j /*164*/].f_152[i];
			Global_107357.f_2345[j /*164*/].f_156[i] = Global_104373.f_2345[j /*164*/].f_156[i];
			Global_107357.f_2345[j /*164*/].f_160[i] = Global_104373.f_2345[j /*164*/].f_160[i];
		}
	}

	Global_107357.f_2884 = { Global_104373.f_2884 };
	Global_107357.f_2884.f_3 = Global_104373.f_2884.f_3;
	Global_107357.f_2890 = { Global_104373.f_2890 };
	Global_107357.f_2890.f_3 = { Global_104373.f_2890.f_3 };
	Global_107357.f_2890.f_6 = Global_104373.f_2890.f_6;
	Global_107357.f_2890.f_8 = Global_107357.f_2890.f_8;
	Global_107357.f_2890.f_7 = Global_104373.f_2890.f_7;
	Global_107357.f_2890.f_9 = Global_104373.f_2890.f_9;
	Global_107357.f_2890.f_11 = Global_104373.f_2890.f_11;
	Global_107357.f_2890.f_10 = Global_104373.f_2890.f_10;
	Global_107357.f_2890.f_12 = Global_104373.f_2890.f_12;
	Global_107357.f_2890.f_12.f_1 = { Global_104373.f_2890.f_12.f_1 };
	Global_107357.f_2890.f_12.f_5 = Global_104373.f_2890.f_12.f_5;
	Global_107357.f_2890.f_12.f_6 = Global_104373.f_2890.f_12.f_6;
	Global_107357.f_2890.f_12.f_7 = Global_104373.f_2890.f_12.f_7;
	Global_107357.f_2890.f_12.f_8 = Global_104373.f_2890.f_12.f_8;
	Global_107357.f_2890.f_12.f_9 = { Global_104373.f_2890.f_12.f_9 };
	Global_107357.f_2890.f_12.f_59 = { Global_104373.f_2890.f_12.f_59 };
	Global_107357.f_2890.f_12.f_62 = Global_104373.f_2890.f_12.f_62;
	Global_107357.f_2890.f_12.f_63 = Global_104373.f_2890.f_12.f_63;
	Global_107357.f_2890.f_12.f_64 = Global_104373.f_2890.f_12.f_64;
	Global_107357.f_2890.f_12.f_65 = Global_104373.f_2890.f_12.f_65;
	Global_107357.f_2890.f_12.f_77 = Global_104373.f_2890.f_12.f_77;
	Global_107357.f_2890.f_12.f_66 = Global_104373.f_2890.f_12.f_66;
	Global_107357.f_2890.f_12.f_67 = Global_104373.f_2890.f_12.f_67;
	Global_107357.f_2890.f_12.f_68 = Global_104373.f_2890.f_12.f_68;
	Global_107357.f_2890.f_12.f_69 = Global_104373.f_2890.f_12.f_69;
	Global_107357.f_2890.f_12.f_71 = Global_104373.f_2890.f_12.f_71;
	Global_107357.f_2890.f_12.f_72 = Global_104373.f_2890.f_12.f_72;
	Global_107357.f_2890.f_12.f_73 = Global_104373.f_2890.f_12.f_73;
	Global_107357.f_2890.f_12.f_74 = Global_104373.f_2890.f_12.f_74;
	Global_107357.f_2890.f_12.f_75 = Global_104373.f_2890.f_12.f_75;
	Global_107357.f_2890.f_12.f_76 = Global_104373.f_2890.f_12.f_76;
	Global_107357.f_2980 = Global_104373.f_2980;
	Global_107357.f_2980.f_1 = Global_104373.f_2980.f_1;
	Global_107357.f_2980.f_2 = Global_104373.f_2980.f_2;
	Global_107357.f_2980.f_3 = Global_104373.f_2980.f_3;
	return;
}

void func_87(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x3A31
{
	int i;
	int j;

	*uParam0 = func_22();
	uParam0->f_1 = func_53();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_107(&(uParam0->f_2884), 0);
		func_106(unk_0x4A8C381C258A124D());
		func_99(unk_0x4A8C381C258A124D(), false);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
	
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
			uParam0->f_2 = joaat("WEAPON_UNARMED");
	}

	for (j = 0; j < 3; j = j + 1)
	{
		uParam0->f_17[j] = Global_113810.f_2366.f_539.f_294[j];
	
		if (j == func_98())
		{
			func_89(unk_0x4A8C381C258A124D(), &uParam0->f_616[j /*65*/], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				uParam0->f_616[j /*65*/][i] = Global_100558[j /*65*/][i];
				uParam0->f_616[j /*65*/].f_13[i] = Global_100558[j /*65*/].f_13[i];
			}
		
			uParam0->f_616[j /*65*/].f_59 = Global_100558[j /*65*/].f_59;
			uParam0->f_616[j /*65*/].f_60 = Global_100558[j /*65*/].f_60;
			uParam0->f_616[j /*65*/].f_61 = Global_100558[j /*65*/].f_61;
			uParam0->f_616[j /*65*/].f_62 = Global_100558[j /*65*/].f_62;
			uParam0->f_616[j /*65*/].f_63 = Global_100558[j /*65*/].f_63;
			uParam0->f_616[j /*65*/].f_64 = Global_100558[j /*65*/].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				uParam0->f_616[j /*65*/].f_39[i] = Global_100558[j /*65*/].f_39[i];
				uParam0->f_616[j /*65*/].f_49[i] = Global_100558[j /*65*/].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j /*477*/][i /*5*/] = { Global_113810.f_2366.f_539.f_298[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j /*477*/].f_221[i /*5*/] = { Global_113810.f_2366.f_539.f_298[j /*477*/].f_221[i /*5*/] };
		}
	
		switch (j)
		{
			case 0:
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case 1:
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case 2:
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		}
	
		uParam0->f_9[j] = Global_113810.f_20567.f_233[j /*69*/].f_1;
		uParam0->f_13[j] = Global_60659[j];
		uParam0->f_25[0 /*295*/][j /*98*/] = { Global_113810.f_2366.f_539.f_2407[0 /*295*/][j /*98*/] };
		uParam0->f_25[1 /*295*/][j /*98*/] = { Global_113810.f_2366.f_539.f_2407[1 /*295*/][j /*98*/] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j /*15*/][i] = Global_113810.f_2366.f_493[j /*15*/][i];
			uParam0->f_2838[j /*15*/].f_5[i] = Global_113810.f_2366.f_493[j /*15*/].f_5[i];
			uParam0->f_2838[j /*15*/].f_10[i] = Global_113810.f_2366.f_493[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j /*164*/][i] = Global_113810.f_2366[j /*164*/][i];
			uParam0->f_2345[j /*164*/].f_4[i] = Global_113810.f_2366[j /*164*/].f_4[i];
			uParam0->f_2345[j /*164*/].f_8[i] = Global_113810.f_2366[j /*164*/].f_8[i];
			uParam0->f_2345[j /*164*/].f_12[i] = Global_113810.f_2366[j /*164*/].f_12[i];
			uParam0->f_2345[j /*164*/].f_16[i] = Global_113810.f_2366[j /*164*/].f_16[i];
			uParam0->f_2345[j /*164*/].f_20[i] = Global_113810.f_2366[j /*164*/].f_20[i];
			uParam0->f_2345[j /*164*/].f_24[i] = Global_113810.f_2366[j /*164*/].f_24[i];
			uParam0->f_2345[j /*164*/].f_28[i] = Global_113810.f_2366[j /*164*/].f_28[i];
			uParam0->f_2345[j /*164*/].f_32[i] = Global_113810.f_2366[j /*164*/].f_32[i];
			uParam0->f_2345[j /*164*/].f_36[i] = Global_113810.f_2366[j /*164*/].f_36[i];
			uParam0->f_2345[j /*164*/].f_40[i] = Global_113810.f_2366[j /*164*/].f_40[i];
			uParam0->f_2345[j /*164*/].f_44[i] = Global_113810.f_2366[j /*164*/].f_44[i];
			uParam0->f_2345[j /*164*/].f_48[i] = Global_113810.f_2366[j /*164*/].f_48[i];
			uParam0->f_2345[j /*164*/].f_52[i] = Global_113810.f_2366[j /*164*/].f_52[i];
			uParam0->f_2345[j /*164*/].f_56[i] = Global_113810.f_2366[j /*164*/].f_56[i];
			uParam0->f_2345[j /*164*/].f_60[i] = Global_113810.f_2366[j /*164*/].f_60[i];
			uParam0->f_2345[j /*164*/].f_64[i] = Global_113810.f_2366[j /*164*/].f_64[i];
			uParam0->f_2345[j /*164*/].f_68[i] = Global_113810.f_2366[j /*164*/].f_68[i];
			uParam0->f_2345[j /*164*/].f_72[i] = Global_113810.f_2366[j /*164*/].f_72[i];
			uParam0->f_2345[j /*164*/].f_76[i] = Global_113810.f_2366[j /*164*/].f_76[i];
			uParam0->f_2345[j /*164*/].f_80[i] = Global_113810.f_2366[j /*164*/].f_80[i];
			uParam0->f_2345[j /*164*/].f_84[i] = Global_113810.f_2366[j /*164*/].f_84[i];
			uParam0->f_2345[j /*164*/].f_88[i] = Global_113810.f_2366[j /*164*/].f_88[i];
			uParam0->f_2345[j /*164*/].f_92[i] = Global_113810.f_2366[j /*164*/].f_92[i];
			uParam0->f_2345[j /*164*/].f_96[i] = Global_113810.f_2366[j /*164*/].f_96[i];
			uParam0->f_2345[j /*164*/].f_100[i] = Global_113810.f_2366[j /*164*/].f_100[i];
			uParam0->f_2345[j /*164*/].f_104[i] = Global_113810.f_2366[j /*164*/].f_104[i];
			uParam0->f_2345[j /*164*/].f_108[i] = Global_113810.f_2366[j /*164*/].f_108[i];
			uParam0->f_2345[j /*164*/].f_112[i] = Global_113810.f_2366[j /*164*/].f_112[i];
			uParam0->f_2345[j /*164*/].f_116[i] = Global_113810.f_2366[j /*164*/].f_116[i];
			uParam0->f_2345[j /*164*/].f_120[i] = Global_113810.f_2366[j /*164*/].f_120[i];
			uParam0->f_2345[j /*164*/].f_124[i] = Global_113810.f_2366[j /*164*/].f_124[i];
			uParam0->f_2345[j /*164*/].f_128[i] = Global_113810.f_2366[j /*164*/].f_128[i];
			uParam0->f_2345[j /*164*/].f_132[i] = Global_113810.f_2366[j /*164*/].f_132[i];
			uParam0->f_2345[j /*164*/].f_136[i] = Global_113810.f_2366[j /*164*/].f_136[i];
			uParam0->f_2345[j /*164*/].f_140[i] = Global_113810.f_2366[j /*164*/].f_140[i];
			uParam0->f_2345[j /*164*/].f_144[i] = Global_113810.f_2366[j /*164*/].f_144[i];
			uParam0->f_2345[j /*164*/].f_148[i] = Global_113810.f_2366[j /*164*/].f_148[i];
			uParam0->f_2345[j /*164*/].f_152[i] = Global_113810.f_2366[j /*164*/].f_152[i];
			uParam0->f_2345[j /*164*/].f_156[i] = Global_113810.f_2366[j /*164*/].f_156[i];
			uParam0->f_2345[j /*164*/].f_160[i] = Global_113810.f_2366[j /*164*/].f_160[i];
		}
	}

	unk_0xDF7F16323520B858(joaat("SP0_SPECIAL_ABILITY"), &uParam0->f_2341[0], -1);
	unk_0xDF7F16323520B858(joaat("SP1_SPECIAL_ABILITY"), &uParam0->f_2341[1], -1);
	unk_0xDF7F16323520B858(joaat("SP2_SPECIAL_ABILITY"), &uParam0->f_2341[2], -1);
	uParam0->f_5 = 145;

	if (iParam4 == 1)
		func_4(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);

	func_88(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_88(var uParam0) // Position - 0x48BB
{
	*uParam0 = Global_96662;
	uParam0->f_1 = Global_96663;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_89(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x48DD
{
	int num;
	int i;

	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		num = func_27(iParam0);
	
		for (i = 0; i < 12; i = i + 1)
		{
			func_97(iParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = 0; i < 9; i = i + 1)
		{
			func_96(iParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_13(num))
		{
			uParam1->f_59 = Global_113810.f_2366.f_539[num /*65*/].f_59;
			uParam1->f_60 = Global_113810.f_2366.f_539[num /*65*/].f_60;
			uParam1->f_61 = Global_113810.f_2366.f_539[num /*65*/].f_61;
			uParam1->f_62 = Global_113810.f_2366.f_539[num /*65*/].f_62;
			uParam1->f_63 = Global_113810.f_2366.f_539[num /*65*/].f_63;
			uParam1->f_64 = Global_113810.f_2366.f_539[num /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_94(161, iParam3))
				uParam1->f_59 = func_90(2053, iParam3);
			else
				uParam1->f_59 = func_90(753, iParam3);
		
			uParam1->f_60 = func_90(754, iParam3);
			uParam1->f_61 = func_90(755, iParam3);
		}
	
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
			if (func_94(161, iParam3))
				uParam1->f_59 = func_90(2053, iParam3);
			else
				uParam1->f_59 = func_90(753, iParam3);
	}

	return;
}

int func_90(int iParam0, int iParam1) // Position - 0x4A77
{
	var unk;
	int num;

	if (iParam0 != 14385)
	{
		unk = func_91(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

var func_91(int iParam0, int iParam1) // Position - 0x4AA6
{
	return unk_0xD69CE161FE614531(0, iParam0, func_92(iParam1));
}

int func_92(int iParam0) // Position - 0x4ABB
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_93();
	
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

int func_93() // Position - 0x4AEF
{
	return Global_1574918;
}

BOOL func_94(int iParam0, int iParam1) // Position - 0x4AFB
{
	var unk;
	BOOL num;

	unk = func_95(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

var func_95(int iParam0, int iParam1) // Position - 0x4B1F
{
	return unk_0xD69CE161FE614531(2, iParam0, func_92(iParam1));
}

void func_96(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x4B34
{
	int num;

	num = func_27(iParam0);

	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		num = iParam5;
	}

	if (iParam4 == 0)
		return;

	if (iParam1 == 0)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}

	switch (num)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_97(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x507D
{
	int num;

	num = func_27(iParam0);

	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		num = iParam6;
	}

	if (iParam5 == 0)
		return;

	switch (num)
	{
		case 0:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case 1:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case 2:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

int func_98() // Position - 0x52BE
{
	func_23();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_99(var uParam0, BOOL bParam1) // Position - 0x52D7
{
	int num;
	var unk;
	int i;
	var unk2;

	num = func_27(uParam0);

	if (func_13(num) && !unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (uParam0 == unk_0x4A8C381C258A124D())
		{
			func_100(uParam0, &Global_113810.f_2366.f_539.f_298[num /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_113810.f_2366.f_539.f_1730[i /*4*/][num] = unk_0xFCFCA9D377ED6568(i);
			
				if (bParam1)
				{
					unk = unk_0xAE146ED24909CAF4();
				
					if (Global_113810.f_2366.f_539.f_1730[i /*4*/][num] == unk)
						Global_113810.f_2366.f_539.f_1763 = i;
				}
			}
		
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &unk2);
		
			if (num == 0)
				unk_0x1164A75E490C27B6(joaat("SP0_PARACHUTE_CURRENT_TINT"), unk2, 1);
			else if (num == 1)
				unk_0x1164A75E490C27B6(joaat("SP1_PARACHUTE_CURRENT_TINT"), unk2, 1);
			else if (num == 2)
				unk_0x1164A75E490C27B6(joaat("SP2_PARACHUTE_CURRENT_TINT"), unk2, 1);
		}
	}

	return;
}

void func_100(var uParam0, var uParam1) // Position - 0x53CA
{
	int i;
	int j;
	int k;
	int num;
	int num2;
	int l;
	int num3;
	var unk5;
	var unk44;
	int num4;
	int num5;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			num = func_105(i);
		
			if (num != 0)
			{
				num2 = unk_0xBCEDAE6CA2B2046E(uParam0, func_105(i));
				num2.f_1 = 0;
				num2.f_2 = 0;
				num2.f_3 = 0;
				num2.f_4 = 0;
			
				if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
				{
					num2.f_1 = unk_0x1149D67DB429787A(uParam0, num2);
				
					if (num2 == joaat("GADGET_PARACHUTE"))
						num2.f_1 = 1;
				
					num2.f_3 = unk_0x6C81F95CADD1E6D0(uParam0, num2);
					num2.f_4 = unk_0xB92D606AB30C334C(uParam0, num2);
				
					if (num2.f_1 == -1)
						if (!unk_0xACBE463290141D49(uParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = num2.f_1;
					j = 0;
				
					for (k = func_103(num2, j); k != 0; k = func_103(num2, j))
					{
						if (unk_0x5EDED4B3E1A48E68(uParam0, num2, k))
							unk_0x0B0C9A0F9AAEB7F0(&(num2.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { num2 };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		num3 = unk_0xAFA659708600A8CD();
	
		for (l = 0; l < num3; l = l + 1)
		{
			if (unk_0xA40B513DA7201333(l, &unk5) && !func_102(unk5.f_1) && num4 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(unk5))
				{
					num2 = unk5.f_1;
					num2.f_1 = 0;
					num2.f_2 = 0;
					num2.f_3 = 0;
					num2.f_4 = 0;
					num2.f_1 = unk_0x1149D67DB429787A(uParam0, num2);
				
					if (unk_0x66B90BA528CFEBCE(uParam0, num2, 0))
					{
						num2.f_3 = unk_0x6C81F95CADD1E6D0(uParam0, num2);
						num2.f_4 = unk_0xB92D606AB30C334C(uParam0, num2);
					}
				
					if (num2.f_1 == -1)
						if (!unk_0xACBE463290141D49(uParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->f_221[num4 /*5*/].f_1 = num2.f_1;
					num5 = 0;
				
					for (j = 0; j < unk_0x0A334014DFD4952C(l); j = j + 1)
					{
						if (unk_0x38A1582CAC3F4E95(l, j, &unk44))
						{
							if (!func_101(unk44.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(uParam0, num2, unk44.f_3))
									unk_0x0B0C9A0F9AAEB7F0(&(num2.f_2), num5);
							
								num5 = num5 + 1;
							}
						}
					}
				}
			
				if (num2 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(uParam0, num2, 0))
					{
						num2 = 0;
						num2.f_1 = 0;
					}
				}
			
				uParam1->f_221[num4 /*5*/] = { num2 };
				num4 = num4 + 1;
			}
		}
	}

	return;
}

BOOL func_101(int iParam0) // Position - 0x5652
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
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_102(int iParam0) // Position - 0x56F3
{
	if (unk_0x76CD105BCAC6EB9F())
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
			case 465894841:
			case 1703483498:
			case -22923932:
			case 350597077:
				return true;
		}
	}

	return false;
}

int func_103(int iParam0, int iParam1) // Position - 0x58D3
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	var unk40;

	num = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			
				case 7:
					num = -1566778158;
					break;
			
				case 8:
					num = 1694268374;
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			
				case 10:
					num = 1605520746;
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					num = -1240142720;
					break;
			}
			break;
	
		default:
			if (iParam0 != 0)
			{
				num2 = func_104(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x660FA55F8D417CAB(num2); i = i + 1)
					{
						if (unk_0x737024F2814ABDDD(num2, i, &unk40))
						{
							if (!func_101(unk40.f_3))
							{
								if (num3 == iParam1)
									return unk40.f_3;
							
								num3 = num3 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_104(int iParam0, var uParam1) // Position - 0x6584
{
	int i;
	int num;

	num = unk_0x9A7818E159C72516();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk_0xDF94727C5BBB298F(i, uParam1))
			if (uParam1->f_1 == iParam0)
				return i;
	}

	return -1;
}

int func_105(int iParam0) // Position - 0x65BF
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_106(var uParam0) // Position - 0x6833
{
	int num;

	num = func_27(uParam0);

	if (func_13(num) && !unk_0x4FAFF4BCB7633475(uParam0))
		Global_113810.f_2366.f_539.f_294[num] = unk_0xE5E6F6EFCE07789A(uParam0);

	return;
}

void func_107(var uParam0, int iParam1) // Position - 0x686F
{
	var unk;
	var unk2;
	var unk5;
	int num;

	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_78938, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_78938, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_78938, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_78938, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_111(&unk))
		{
			if (func_109(unk, &unk2, &unk5))
			{
				unk2.f_2 = unk2.f_2 + 1f;
				*uParam0 = { unk2 };
				uParam0->f_3 = unk5;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			num = func_22();
		
			if (num == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (num == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (num == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_108(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_108(var uParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x6DBC
{
	var unk;
	var unk2;

	if (!unk_0x7830326EF9D54DBB(uParam0))
	{
		unk = unk_0x0556019E7EE8EC9A(fParam4, sParam3);
	
		if (!unk_0xF8A8852F99E201DD(unk))
			return false;
	
		unk2 = unk_0x91398220755C14BF(uParam0);
	
		if (unk2 == unk)
			return true;
	}

	return false;
}

BOOL func_109(int iParam0, var uParam1, var uParam2) // Position - 0x6E00
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_110(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_110(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x757F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_111(var uParam0) // Position - 0x75C6
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_139())
		{
			*uParam0 = func_117(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, false, true, -1);
		
			if (func_116(*uParam0) && !func_112(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_112(int iParam0) // Position - 0x7621
{
	return func_113(iParam0, 0, true);
}

BOOL func_113(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7631
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
	else if (unk_0x76CD105BCAC6EB9F())
		if (func_115() == 0)
			return IS_BIT_SET(func_90(func_114(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);

	return false;
}

int func_114(int iParam0) // Position - 0x7691
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12514;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return &func_50;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9916;
	
		case 57:
			return 9918;
	
		case 58:
			return 11433;
	
		case 59:
			return 11844;
	
		case 60:
			return 11901;
	
		default:
			break;
	}

	return 14385;
}

int func_115() // Position - 0x7A39
{
	return Global_32283;
}

BOOL func_116(int iParam0) // Position - 0x7A44
{
	return func_113(iParam0, 5, true);
}

int func_117(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x7A54
{
	int i;
	float num;
	float num2;
	int num3;

	num2 = 1000000f;
	num3 = -1;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_138(i))
		{
			if (!bParam5 || func_137(i))
			{
				num = unk_0xED977E2AE2CB16EE(uParam0, func_118(i, false), 1);
			
				if (num < num2 && num <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num2 = num;
					num3 = i;
				}
			}
		}
	}

	return num3;
}

Vector3 func_118(int iParam0, BOOL bParam1) // Position - 0x7AF6
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_134(Global_102986);
	
		case 46:
			if (Global_1853823 != func_133())
				if (func_132(Global_1853823))
					return func_125(2, 2);
				else if (func_124(Global_1853823))
					return func_125(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return func_122(-9.9f, -0.5f, 1f);
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1971274;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (Global_2657704[unk_0x259BE71D8A81D4FA() /*463*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_119();
	
		case 59:
			return 560f, -405f, -69.6591f;
	
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_119() // Position - 0x8266
{
	if (!func_121(Global_1956855))
		return Global_1956855;

	switch (func_120())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_120() // Position - 0x8561
{
	return Global_2652364.f_2650;
}

BOOL func_121(float fParam0, var uParam1, var uParam2) // Position - 0x8570
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Vector3 func_122(float fParam0, float fParam1, float fParam2) // Position - 0x859A
{
	return unk_0xF10F2A2453AF1DFB(func_123(), 0f, fParam0);
}

Vector3 func_123() // Position - 0x85AF
{
	return -880f, -2770f, -50f;
}

BOOL func_124(int iParam0) // Position - 0x85C6
{
	if (iParam0 != func_133())
		if (IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 0) || IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 1) || IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 2))
			return true;

	return false;
}

Vector3 func_125(int iParam0, int iParam1) // Position - 0x861E
{
	var unk;
	var unk7;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1853823 != func_133())
		if (iParam1 == 3)
			if (func_126(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 4))
				if (func_126(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 5))
				if (func_126(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_126(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x86C8
{
	var unk;
	var unk7;
	var unk13;
	var unk19;

	if (!func_131(iParam3, &unk))
		return false;

	if (!func_131(iParam1, &unk7))
		return false;

	if (!bParam4)
		unk13 = { func_129(iParam0) };
	else
		unk13 = { func_128(iParam0) };

	unk19 = { unk13 - unk };
	unk19 = { func_127(unk19, -unk.f_3.f_2) };
	unk19 = { func_127(unk19, unk7.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(unk7, 0f, unk19) };
	uParam2->f_3 = { unk13.f_3 };
	return true;
}

Vector3 func_127(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x875D
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_128(int iParam0) // Position - 0x87A1
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_129(int iParam0) // Position - 0x8925
{
	return func_130(iParam0);
}

struct<6> func_130(int iParam0) // Position - 0x8933
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_131(int iParam0, var uParam1) // Position - 0x93FA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_132(int iParam0) // Position - 0x947C
{
	if (iParam0 != func_133())
		if (IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 3) || IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 4) || IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 5))
			return true;

	return false;
}

int func_133() // Position - 0x94D4
{
	return -1;
}

Vector3 func_134(int iParam0) // Position - 0x94DD
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return func_123();
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 17:
			if (func_135() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_135() // Position - 0x9749
{
	return func_136(unk_0x259BE71D8A81D4FA());
}

int func_136(int iParam0) // Position - 0x9759
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

BOOL func_137(int iParam0) // Position - 0x9776
{
	return func_113(iParam0, 0, false);
}

int func_138(int iParam0) // Position - 0x9786
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
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
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	}

	return 6;
}

BOOL func_139() // Position - 0x9ABC
{
	return Global_100885.f_393 > 0;
}

int func_140(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x9ACD
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98291.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_28(0))
			return 0;
	
		Global_43341 = Global_43341 + 1;
		*uParam0 = Global_43341;
		unk_0x2B52F77101390E6F(unk_0xB6B621402486C3E4(), 0);
		Global_23251.f_5 = 0;
	
		if (iParam2 != 5)
			unk_0xB1495D79F52B9EEE(8);
	
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43338; i = i + 1)
			{
				if (Global_43344[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!func_29(iParam2))
			return 0;
	
		if (Global_43338 == 8)
			return 0;
	
		Global_43341 = Global_43341 + 1;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338 = Global_43338 + 1;
	
		if (iParam4 != 0)
			func_141(uParam0, iParam4);
	}

	return 2;
}

void func_141(var uParam0, int iParam1) // Position - 0x9C04
{
	int i;

	if (Global_43338 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43338; i = i + 1)
	{
		if (Global_43344[i /*4*/] == *uParam0)
			Global_43344[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

void func_142(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x9C53
{
	var unk;

	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (unk_0xFC8BFE4B41177C22(Global_77479.f_484[25]) && unk_0xD9F5E1FEFD1329E4(Global_77479.f_484[25], 0))
				if (Global_77479.f_484[25] == iParam0)
					return;
	
		if (!bParam6)
			if (unk_0x9E20DC08879FF3FC(iParam0) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tourbus"))
				return;
	
		func_169(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_14(iParam0, &unk);
	
		if (func_110(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			fParam4 = unk_0xCFC0C995455A6204(iParam0);
		}
	
		if (iParam5 == 24)
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != joaat("vehicle_gen_controller"))
				Global_78467 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
	
		func_163(iParam5, &unk, fParam1, fParam4, func_9(iParam0));
		func_143(iParam5, iParam0, 0);
	}

	return;
}

void func_143(int iParam0, int iParam1, int iParam2) // Position - 0x9D7C
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_162(&Global_77479.f_555[0 /*21*/], iParam0))
		return;

	if (!IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10))
		if (Global_77479.f_555[0 /*21*/].f_4 != unk_0x4B423FAA24E8ABF0(iParam1))
			return;

	if (Global_78386 != -1 && Global_78386 != iParam0)
		return;

	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			if (!unk_0x110821AE6C63DD4F(iParam1))
				unk_0xEE0BCDB1B5E36BCB(iParam1, 1, 1);
		
			if (iParam0 == 24)
				Global_113810.f_32752.f_4801 = func_53();
		
			if (iParam1 != Global_77479.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					num = func_161(iParam0);
				
					if (unk_0xFC8BFE4B41177C22(num) && unk_0xD9F5E1FEFD1329E4(num, 0) && iParam1 != num)
						func_144(num, 145);
				}
			
				Global_78385 = iParam1;
				Global_78386 = iParam0;
				Global_78387 = iParam2;
			}
		}
	}

	return;
}

void func_144(int iParam0, int iParam1) // Position - 0x9E93
{
	var unk;
	int i;
	int j;

	if (!func_145(iParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		unk = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
	
		if (!unk_0xFC8BFE4B41177C22(unk))
			unk = unk_0x6B854773972E76E4(iParam0, -1);
	
		if (unk_0xFC8BFE4B41177C22(unk) && !unk_0x4FAFF4BCB7633475(unk))
			if (unk_0x4B423FAA24E8ABF0(unk) == joaat("Player_Zero"))
				iParam1 = 0;
			else if (unk_0x4B423FAA24E8ABF0(unk) == joaat("Player_One"))
				iParam1 = 1;
			else if (unk_0x4B423FAA24E8ABF0(unk) == joaat("Player_Two"))
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_113810.f_2366.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113810.f_32752.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113810.f_32752.f_5600[i /*78*/].f_66)
			if (!unk_0xD6F9DEE4765092A9(&(Global_113810.f_32752.f_5600[i /*78*/].f_1)))
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113810.f_32752.f_5600[i /*78*/].f_1)))
					Global_113810.f_32752.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113810.f_32752.f_5590 = iParam1;
	Global_78384 = iParam0;
	Global_113810.f_32752.f_5588 = 1;
	func_14(iParam0, &(Global_113810.f_32752.f_5510));
	return;
}

BOOL func_145(int iParam0) // Position - 0xA095
{
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0) || func_20(iParam0, 0, false) || func_20(iParam0, 1, false) || func_20(iParam0, 2, false) || func_9(iParam0) != 145 || func_160(iParam0) || func_159(iParam0) || func_158(iParam0) || func_157(iParam0) || !func_146(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		func_159(iParam0);
		func_159(iParam0);
		func_20(iParam0, 0, false);
		func_20(iParam0, 1, false);
		func_20(iParam0, 2, false);
		func_9(iParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_146(int iParam0) // Position - 0xA172
{
	if (iParam0 == 0)
		return false;

	if (!func_147(iParam0, false, -1))
		return false;

	if (unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0) || unk_0xBA16CD57E37AC32A(iParam0) || unk_0xAE447CBB33B40CA3(iParam0))
		return false;

	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_147(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA324
{
	int i;
	var unk;

	if (iParam0 == 0)
		return false;

	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
		return false;

	if (iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("blimp2") || iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F())
	{
		if (!func_156())
			return false;
	}
	else
	{
		for (i = 0; i < unk_0x62B04373BFAD9B85(); i = i + 1)
		{
			if (unk_0x92EAC7DBD5D1D750(i, &unk))
				if (iParam0 == unk.f_1)
					if (unk_0x4BFA043D318BF9AE(unk))
						return false;
		}
	}

	if (iParam0 == joaat("blimp"))
		if (!func_155() && !func_154() && !func_153() && !func_152() && !func_156())
			return false;

	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion"))
	{
		if (func_83() || unk_0x761778199FE1211C() || func_82())
		{
		}
		else if (!func_153())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_150(iParam0, iParam2))
			return false;

	if (!func_148(iParam0))
		return false;

	return true;
}

BOOL func_148(int iParam0) // Position - 0xA4A6
{
	int num;
	var unk;
	var unk2;

	if (!func_149())
		return true;

	unk_0x8A77EAFEB55D476D(&num, &unk);

	if (num == 4)
		return true;

	switch (iParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!unk_0xABE86AEC64720F91(&unk2))
		return false;

	return true;
}

BOOL func_149() // Position - 0xA572
{
	if (unk_0x761778199FE1211C())
		return unk_0xC18CB5D7A27A2E00();

	return false;
}

BOOL func_150(int iParam0, int iParam1) // Position - 0xA589
{
	BOOL num;
	var unk;

	if (!Global_2764417 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586488[iParam1 /*142*/].f_103, 2))
			return true;

	if (Global_2764416)
		return true;

	num = 1;
	unk = unk_0x39D1D336459711BE();

	if (iParam0 == joaat("btype3"))
		if (!Global_262145.f_7142 && !Global_262145.f_13570 && unk < Global_262145.f_13571)
			num = 0;

	if (iParam0 == joaat("faction3"))
		if (!Global_262145.f_14912 && unk < Global_262145.f_14924)
			num = 0;
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
		if (!Global_262145.f_14908 && unk < Global_262145.f_14920)
			num = 0;
	else if (iParam0 == joaat("sabregt2"))
		if (!Global_262145.f_14909 && unk < Global_262145.f_14921)
			num = 0;
	else if (iParam0 == joaat("tornado5"))
		if (!Global_262145.f_14910 && unk < Global_262145.f_14922)
			num = 0;
	else if (iParam0 == joaat("minivan2"))
		if (!Global_262145.f_14911 && unk < Global_262145.f_14923)
			num = 0;
	else if (iParam0 == joaat("slamvan3"))
		if (!Global_262145.f_14913 && unk < Global_262145.f_14925)
			num = 0;

	if (iParam0 == joaat("prototipo"))
		if (!Global_262145.f_14914 && unk < Global_262145.f_14917)
			num = 0;
	else if (iParam0 == joaat("seven70"))
		if (!Global_262145.f_14915 && unk < Global_262145.f_14918)
			num = 0;
	else if (iParam0 == joaat("pfister811"))
		if (!Global_262145.f_14916 && unk < Global_262145.f_14919)
			num = 0;

	if (iParam0 == joaat("bf400"))
		if (!Global_262145.f_17493 && unk < Global_262145.f_17458)
			num = 0;
	else if (iParam0 == joaat("brioso"))
		if (!Global_262145.f_17488 && unk < Global_262145.f_17453)
			num = 0;
	else if (iParam0 == joaat("cliffhanger"))
		if (!Global_262145.f_17492 && unk < Global_262145.f_17457)
			num = 0;
	else if (iParam0 == joaat("contender"))
		if (!Global_262145.f_17491 && unk < Global_262145.f_17456)
			num = 0;
	else if (iParam0 == joaat("le7b"))
		if (!Global_262145.f_17485 && unk < Global_262145.f_17450)
			num = 0;
	else if (iParam0 == joaat("omnis"))
		if (!Global_262145.f_17486 && unk < Global_262145.f_17451)
			num = 0;
	else if (iParam0 == joaat("trophytruck"))
		if (!Global_262145.f_17489 && unk < Global_262145.f_17454)
			num = 0;
	else if (iParam0 == joaat("trophytruck2"))
		if (!Global_262145.f_17490 && unk < Global_262145.f_17455)
			num = 0;
	else if (iParam0 == joaat("tropos"))
		if (!Global_262145.f_17487 && unk < Global_262145.f_17452)
			num = 0;
	else if (iParam0 == joaat("gargoyle"))
		if (!Global_262145.f_17495 && unk < Global_262145.f_17460)
			num = 0;
	else if (iParam0 == joaat("rallytruck"))
		if (!Global_262145.f_17496 && unk < Global_262145.f_17461)
			num = 0;
	else if (iParam0 == joaat("tampa2"))
		if (!Global_262145.f_17484 && unk < Global_262145.f_17449)
			num = 0;
	else if (iParam0 == joaat("tyrus"))
		if (!Global_262145.f_17483 && unk < Global_262145.f_17448)
			num = 0;
	else if (iParam0 == joaat("sheava"))
		if (!Global_262145.f_17482 && unk < Global_262145.f_17447)
			num = 0;
	else if (iParam0 == joaat("lynx"))
		if (!Global_262145.f_17494 && unk < Global_262145.f_17459)
			num = 0;
	else if (iParam0 == joaat("stalion2"))
		if (!Global_262145.f_17497 && unk < Global_262145.f_17462)
			num = 0;
	else if (iParam0 == joaat("gauntlet2"))
		if (!Global_262145.f_17498 && unk < Global_262145.f_17463)
			num = 0;
	else if (iParam0 == joaat("dominator2"))
		if (!Global_262145.f_17499 && unk < Global_262145.f_17464)
			num = 0;
	else if (iParam0 == joaat("buffalo3"))
		if (!Global_262145.f_17500 && unk < Global_262145.f_17465)
			num = 0;

	if (iParam0 == joaat("defiler"))
		if (!Global_262145.f_17654 && unk < Global_262145.f_17676)
			num = 0;
	else if (iParam0 == joaat("nightblade"))
		if (!Global_262145.f_17655 && unk < Global_262145.f_17677)
			num = 0;
	else if (iParam0 == joaat("zombiea"))
		if (!Global_262145.f_17656 && unk < Global_262145.f_17678)
			num = 0;
	else if (iParam0 == joaat("esskey"))
		if (!Global_262145.f_17657 && unk < Global_262145.f_17679)
			num = 0;
	else if (iParam0 == joaat("avarus"))
		if (!Global_262145.f_17658 && unk < Global_262145.f_17680)
			num = 0;
	else if (iParam0 == joaat("zombieb"))
		if (!Global_262145.f_17659 && unk < Global_262145.f_17681)
			num = 0;
	else if (iParam0 == joaat("hakuchou2"))
		if (!Global_262145.f_17661 && unk < Global_262145.f_17682)
			num = 0;
	else if (iParam0 == joaat("vortex"))
		if (!Global_262145.f_17662 && unk < Global_262145.f_17683)
			num = 0;
	else if (iParam0 == joaat("shotaro"))
		if (!Global_262145.f_17663 && unk < Global_262145.f_17684)
			num = 0;
	else if (iParam0 == joaat("chimera"))
		if (!Global_262145.f_17664 && unk < Global_262145.f_17685)
			num = 0;
	else if (iParam0 == joaat("raptor"))
		if (!Global_262145.f_17665 && unk < Global_262145.f_17686)
			num = 0;
	else if (iParam0 == joaat("daemon2"))
		if (!Global_262145.f_17666 && unk < Global_262145.f_17687)
			num = 0;
	else if (iParam0 == joaat("blazer4"))
		if (!Global_262145.f_17667 && unk < Global_262145.f_17688)
			num = 0;
	else if (iParam0 == joaat("tornado6"))
		if (!Global_262145.f_17673 && unk < Global_262145.f_17695)
			num = 0;
	else if (iParam0 == joaat("youga2"))
		if (!Global_262145.f_17670 && unk < Global_262145.f_17691)
			num = 0;
	else if (iParam0 == joaat("wolfsbane"))
		if (!Global_262145.f_17671 && unk < Global_262145.f_17692)
			num = 0;
	else if (iParam0 == joaat("faggio3"))
		if (!Global_262145.f_17672 && unk < Global_262145.f_17693)
			num = 0;
	else if (iParam0 == joaat("faggio"))
		if (!Global_262145.f_17660 && unk < Global_262145.f_17694)
			num = 0;
	else if (iParam0 == joaat("bagger"))
		if (!Global_262145.f_17674 && unk < Global_262145.f_17696)
			num = 0;
	else if (iParam0 == joaat("sanctus"))
		if (!Global_262145.f_17668 && unk < Global_262145.f_17689)
			num = 0;
	else if (iParam0 == joaat("manchez"))
		if (!Global_262145.f_17669 && unk < Global_262145.f_17690)
			num = 0;
	else if (iParam0 == joaat("ratbike"))
		if (!Global_262145.f_17675 && unk < Global_262145.f_17697)
			num = 0;

	if (iParam0 == joaat("voltic2"))
		if (!Global_262145.f_19311 && unk < Global_262145.f_19408)
			num = 0;
	else if (iParam0 == joaat("ruiner2"))
		if (!Global_262145.f_19312 && unk < Global_262145.f_19409)
			num = 0;
	else if (iParam0 == joaat("dune4"))
		if (!Global_262145.f_19313 && unk < Global_262145.f_19410)
			num = 0;
	else if (iParam0 == joaat("dune5"))
		if (!Global_262145.f_19314 && unk < Global_262145.f_19411)
			num = 0;
	else if (iParam0 == joaat("phantom2"))
		if (!Global_262145.f_19315 && unk < Global_262145.f_19412)
			num = 0;
	else if (iParam0 == joaat("technical2"))
		if (!Global_262145.f_19316 && unk < Global_262145.f_19413)
			num = 0;
	else if (iParam0 == joaat("boxville5"))
		if (!Global_262145.f_19317 && unk < Global_262145.f_19414)
			num = 0;
	else if (iParam0 == joaat("wastelander"))
		if (!Global_262145.f_19318 && unk < Global_262145.f_19415)
			num = 0;
	else if (iParam0 == joaat("blazer5"))
		if (!Global_262145.f_19319 && unk < Global_262145.f_19416)
			num = 0;
	else if (iParam0 == joaat("comet2"))
		if (!Global_262145.f_19320 && unk < Global_262145.f_19417)
			num = 0;
	else if (iParam0 == joaat("comet3"))
		if (!Global_262145.f_19321 && unk < Global_262145.f_19418)
			num = 0;
	else if (iParam0 == joaat("diablous"))
		if (!Global_262145.f_19322 && unk < Global_262145.f_19419)
			num = 0;
	else if (iParam0 == joaat("diablous2"))
		if (!Global_262145.f_19323 && unk < Global_262145.f_19420)
			num = 0;
	else if (iParam0 == joaat("elegy"))
		if (!Global_262145.f_19324 && unk < Global_262145.f_19421)
			num = 0;
	else if (iParam0 == joaat("elegy2"))
		if (!Global_262145.f_19325 && unk < Global_262145.f_19422)
			num = 0;
	else if (iParam0 == joaat("fcr"))
		if (!Global_262145.f_19326 && unk < Global_262145.f_19423)
			num = 0;
	else if (iParam0 == joaat("fcr2"))
		if (!Global_262145.f_19327 && unk < Global_262145.f_19424)
			num = 0;
	else if (iParam0 == joaat("italigtb"))
		if (!Global_262145.f_19328 && unk < Global_262145.f_19425)
			num = 0;
	else if (iParam0 == joaat("italigtb2"))
		if (!Global_262145.f_19329 && unk < Global_262145.f_19426)
			num = 0;
	else if (iParam0 == joaat("nero"))
		if (!Global_262145.f_19330 && unk < Global_262145.f_19427)
			num = 0;
	else if (iParam0 == joaat("nero2"))
		if (!Global_262145.f_19331 && unk < Global_262145.f_19428)
			num = 0;
	else if (iParam0 == joaat("penetrator"))
		if (!Global_262145.f_19332 && unk < Global_262145.f_19429)
			num = 0;
	else if (iParam0 == joaat("specter"))
		if (!Global_262145.f_19333 && unk < Global_262145.f_19430)
			num = 0;
	else if (iParam0 == joaat("specter2"))
		if (!Global_262145.f_19334 && unk < Global_262145.f_19431)
			num = 0;
	else if (iParam0 == joaat("tempesta"))
		if (!Global_262145.f_19335 && unk < Global_262145.f_19432)
			num = 0;

	if (iParam0 == joaat("gp1"))
		if (!Global_262145.f_20392 && unk < Global_262145.f_20388)
			num = 0;
	else if (iParam0 == joaat("infernus2"))
		if (!Global_262145.f_20393 && unk < Global_262145.f_20389)
			num = 0;
	else if (iParam0 == joaat("ruston"))
		if (!Global_262145.f_20394 && unk < Global_262145.f_20390)
			num = 0;
	else if (iParam0 == joaat("turismo2"))
		if (!Global_262145.f_20395 && unk < Global_262145.f_20391)
			num = 0;

	if (iParam0 == joaat("xa21"))
		if (!Global_262145.f_21274 && unk < Global_262145.f_21282)
			num = 0;
	else if (iParam0 == joaat("cheetah2"))
		if (!Global_262145.f_21275 && unk < Global_262145.f_21283)
			num = 0;
	else if (iParam0 == joaat("torero"))
		if (!Global_262145.f_21276 && unk < Global_262145.f_21284)
			num = 0;
	else if (iParam0 == joaat("vagner"))
		if (!Global_262145.f_21277 && unk < Global_262145.f_21285)
			num = 0;
	else if (iParam0 == joaat("ardent"))
		if (!Global_262145.f_21278 && unk < Global_262145.f_21286)
			num = 0;
	else if (iParam0 == joaat("nightshark"))
		if (!Global_262145.f_21279 && unk < Global_262145.f_21287)
			num = 0;

	if (iParam0 == joaat("microlight"))
		if (!Global_262145.f_22073 && unk < Global_262145.f_22093)
			num = 0;
	else if (iParam0 == joaat("mogul"))
		if (!Global_262145.f_22085 && unk < Global_262145.f_22105)
			num = 0;
	else if (iParam0 == joaat("rogue"))
		if (!Global_262145.f_22076 && unk < Global_262145.f_22096)
			num = 0;
	else if (iParam0 == joaat("starling"))
		if (!Global_262145.f_22086 && unk < Global_262145.f_22106)
			num = 0;
	else if (iParam0 == joaat("seabreeze"))
		if (!Global_262145.f_22074 && unk < Global_262145.f_22094)
			num = 0;
	else if (iParam0 == joaat("tula"))
		if (!Global_262145.f_22090 && unk < Global_262145.f_22110)
			num = 0;
	else if (iParam0 == joaat("pyro"))
		if (!Global_262145.f_22088 && unk < Global_262145.f_22108)
			num = 0;
	else if (iParam0 == joaat("molotok"))
		if (!Global_262145.f_22089 && unk < Global_262145.f_22109)
			num = 0;
	else if (iParam0 == joaat("nokota"))
		if (!Global_262145.f_22084 && unk < Global_262145.f_22104)
			num = 0;
	else if (iParam0 == joaat("bombushka"))
		if (!Global_262145.f_22091 && unk < Global_262145.f_22111)
			num = 0;
	else if (iParam0 == joaat("hunter"))
		if (!Global_262145.f_22087 && unk < Global_262145.f_22107)
			num = 0;
	else if (iParam0 == joaat("havok"))
		if (!Global_262145.f_22083 && unk < Global_262145.f_22103)
			num = 0;
	else if (iParam0 == joaat("howard"))
		if (!Global_262145.f_22075 && unk < Global_262145.f_22095)
			num = 0;
	else if (iParam0 == joaat("alphaz1"))
		if (!Global_262145.f_22077 && unk < Global_262145.f_22097)
			num = 0;
	else if (iParam0 == joaat("cyclone"))
		if (!Global_262145.f_22078 && unk < Global_262145.f_22098)
			num = 0;
	else if (iParam0 == joaat("visione"))
		if (!Global_262145.f_22079 && unk < Global_262145.f_22099)
			num = 0;
	else if (iParam0 == joaat("vigilante"))
		if (!Global_262145.f_22080 && unk < Global_262145.f_22100)
			num = 0;
	else if (iParam0 == joaat("retinue"))
		if (!Global_262145.f_22081 && unk < Global_262145.f_22101)
			num = 0;
	else if (iParam0 == joaat("rapidgt3"))
		if (!Global_262145.f_22082 && unk < Global_262145.f_22102)
			num = 0;

	if (iParam0 == joaat("deluxo"))
		if (!Global_262145.f_23041 && unk < Global_262145.f_23069)
			num = 0;
	else if (iParam0 == joaat("stromberg"))
		if (!Global_262145.f_23042 && unk < Global_262145.f_23070)
			num = 0;
	else if (iParam0 == joaat("riot2"))
		if (!Global_262145.f_23043 && unk < Global_262145.f_23071)
			num = 0;
	else if (iParam0 == joaat("chernobog"))
		if (!Global_262145.f_23044 && unk < Global_262145.f_23072)
			num = 0;
	else if (iParam0 == joaat("khanjali"))
		if (!Global_262145.f_23045 && unk < Global_262145.f_23073)
			num = 0;
	else if (iParam0 == joaat("akula"))
		if (!Global_262145.f_23046 && unk < Global_262145.f_23074)
			num = 0;
	else if (iParam0 == joaat("thruster"))
		if (!Global_262145.f_23047 && unk < Global_262145.f_23075)
			num = 0;
	else if (iParam0 == joaat("barrage"))
		if (!Global_262145.f_23048 && unk < Global_262145.f_23076)
			num = 0;
	else if (iParam0 == joaat("volatol"))
		if (!Global_262145.f_23049 && unk < Global_262145.f_23077)
			num = 0;
	else if (iParam0 == joaat("comet4"))
		if (!Global_262145.f_23050 && unk < Global_262145.f_23078)
			num = 0;
	else if (iParam0 == joaat("neon"))
		if (!Global_262145.f_23051 && unk < Global_262145.f_23079)
			num = 0;
	else if (iParam0 == joaat("streiter"))
		if (!Global_262145.f_23052 && unk < Global_262145.f_23080)
			num = 0;
	else if (iParam0 == joaat("sentinel3"))
		if (!Global_262145.f_23053 && unk < Global_262145.f_23081)
			num = 0;
	else if (iParam0 == joaat("yosemite"))
		if (!Global_262145.f_23054 && unk < Global_262145.f_23082)
			num = 0;
	else if (iParam0 == joaat("sc1"))
		if (!Global_262145.f_23055 && unk < Global_262145.f_23083)
			num = 0;
	else if (iParam0 == joaat("autarch"))
		if (!Global_262145.f_23056 && unk < Global_262145.f_23084)
			num = 0;
	else if (iParam0 == joaat("gt500"))
		if (!Global_262145.f_23057 && unk < Global_262145.f_23085)
			num = 0;
	else if (iParam0 == joaat("hustler"))
		if (!Global_262145.f_23058 && unk < Global_262145.f_23086)
			num = 0;
	else if (iParam0 == joaat("revolter"))
		if (!Global_262145.f_23059 && unk < Global_262145.f_23087)
			num = 0;
	else if (iParam0 == joaat("pariah"))
		if (!Global_262145.f_23060 && unk < Global_262145.f_23088)
			num = 0;
	else if (iParam0 == joaat("raiden"))
		if (!Global_262145.f_23061 && unk < Global_262145.f_23089)
			num = 0;
	else if (iParam0 == joaat("savestra"))
		if (!Global_262145.f_23062 && unk < Global_262145.f_23090)
			num = 0;
	else if (iParam0 == joaat("riata"))
		if (!Global_262145.f_23063 && unk < Global_262145.f_23091)
			num = 0;
	else if (iParam0 == joaat("hermes"))
		if (!Global_262145.f_23064 && unk < Global_262145.f_23092)
			num = 0;
	else if (iParam0 == joaat("comet5"))
		if (!Global_262145.f_23065 && unk < Global_262145.f_23093)
			num = 0;
	else if (iParam0 == joaat("z190"))
		if (!Global_262145.f_23066 && unk < Global_262145.f_23094)
			num = 0;
	else if (iParam0 == joaat("viseris"))
		if (!Global_262145.f_23067 && unk < Global_262145.f_23095)
			num = 0;
	else if (iParam0 == joaat("kamacho"))
		if (!Global_262145.f_23068 && unk < Global_262145.f_23096)
			num = 0;

	if (iParam0 == joaat("gb200"))
		if (!Global_262145.f_24263 && unk < Global_262145.f_24279)
			num = 0;
	else if (iParam0 == joaat("fagaloa"))
		if (!Global_262145.f_24264 && unk < Global_262145.f_24280)
			num = 0;
	else if (iParam0 == joaat("ellie"))
		if (!Global_262145.f_24268 && unk < Global_262145.f_24284)
			num = 0;
	else if (iParam0 == joaat("issi3"))
		if (!Global_262145.f_24271 && unk < Global_262145.f_24287)
			num = 0;
	else if (iParam0 == joaat("michelli"))
		if (!Global_262145.f_24276 && unk < Global_262145.f_24292)
			num = 0;
	else if (iParam0 == joaat("flashgt"))
		if (!Global_262145.f_24270 && unk < Global_262145.f_24286)
			num = 0;
	else if (iParam0 == joaat("hotring"))
		if (!Global_262145.f_24262 && unk < Global_262145.f_24278)
			num = 0;
	else if (iParam0 == joaat("tezeract"))
		if (!Global_262145.f_24269 && unk < Global_262145.f_24285)
			num = 0;
	else if (iParam0 == joaat("tyrant"))
		if (!Global_262145.f_24275 && unk < Global_262145.f_24291)
			num = 0;
	else if (iParam0 == joaat("dominator3"))
		if (!Global_262145.f_24274 && unk < Global_262145.f_24290)
			num = 0;
	else if (iParam0 == joaat("taipan"))
		if (!Global_262145.f_24265 && unk < Global_262145.f_24281)
			num = 0;
	else if (iParam0 == joaat("entity2"))
		if (!Global_262145.f_24267 && unk < Global_262145.f_24283)
			num = 0;
	else if (iParam0 == joaat("jester3"))
		if (!Global_262145.f_24277 && unk < Global_262145.f_24293)
			num = 0;
	else if (iParam0 == joaat("cheburek"))
		if (!Global_262145.f_24273 && unk < Global_262145.f_24289)
			num = 0;
	else if (iParam0 == joaat("caracara"))
		if (!Global_262145.f_24266 && unk < Global_262145.f_24282)
			num = 0;
	else if (iParam0 == joaat("seasparrow"))
		if (!Global_262145.f_24272 && unk < Global_262145.f_24288)
			num = 0;

	if (iParam0 == joaat("terbyte"))
		if (!Global_262145.f_24353 && unk < Global_262145.f_24340)
			num = 0;
	else if (iParam0 == joaat("pbus2"))
		if (!Global_262145.f_24354 && unk < Global_262145.f_24341)
			num = 0;
	else if (iParam0 == joaat("mule4"))
		if (!Global_262145.f_24359 && unk < Global_262145.f_24346)
			num = 0;
	else if (iParam0 == joaat("pounder2"))
		if (!Global_262145.f_24358 && unk < Global_262145.f_24345)
			num = 0;
	else if (iParam0 == joaat("swinger"))
		if (!Global_262145.f_24356 && unk < Global_262145.f_24343)
			num = 0;
	else if (iParam0 == joaat("menacer"))
		if (!Global_262145.f_24362 && unk < Global_262145.f_24349)
			num = 0;
	else if (iParam0 == joaat("scramjet"))
		if (!Global_262145.f_24364 && unk < Global_262145.f_24351)
			num = 0;
	else if (iParam0 == joaat("strikeforce"))
		if (!Global_262145.f_24365 && unk < Global_262145.f_24352)
			num = 0;
	else if (iParam0 == joaat("oppressor2"))
		if (!Global_262145.f_24363 && unk < Global_262145.f_24350)
			num = 0;
	else if (iParam0 == joaat("patriot2"))
		if (!Global_262145.f_24355 && unk < Global_262145.f_24342)
			num = 0;
	else if (iParam0 == joaat("stafford"))
		if (!Global_262145.f_24357 && unk < Global_262145.f_24344)
			num = 0;
	else if (iParam0 == joaat("freecrawler"))
		if (!Global_262145.f_24361 && unk < Global_262145.f_24348)
			num = 0;
	else if (iParam0 == joaat("blimp3"))
		if (!Global_262145.f_24360 && unk < Global_262145.f_24347)
			num = 0;

	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26956 && unk < Global_262145.f_26958)
			num = 0;
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25969 && unk < Global_262145.f_25962)
			num = 0;
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25970 && unk < Global_262145.f_25963)
			num = 0;
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25971 && unk < Global_262145.f_25964)
			num = 0;
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25972 && unk < Global_262145.f_25965)
			num = 0;
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26957 && unk < Global_262145.f_26959)
			num = 0;
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25973 && unk < Global_262145.f_25966)
			num = 0;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25974 && unk < Global_262145.f_25967)
			num = 0;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25975 && unk < Global_262145.f_25968)
			num = 0;
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25980 && unk < Global_262145.f_26001)
			num = 0;
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25981 && unk < Global_262145.f_26002)
			num = 0;
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25982 && unk < Global_262145.f_26003)
			num = 0;
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25983 && unk < Global_262145.f_26004)
			num = 0;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25984 && unk < Global_262145.f_26005)
			num = 0;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25985 && unk < Global_262145.f_26006)
			num = 0;
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25986 && unk < Global_262145.f_26007)
			num = 0;
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25987 && unk < Global_262145.f_26008)
			num = 0;
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25988 && unk < Global_262145.f_26009)
			num = 0;
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25989 && unk < Global_262145.f_26010)
			num = 0;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25990 && unk < Global_262145.f_26011)
			num = 0;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25991 && unk < Global_262145.f_26012)
			num = 0;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25992 && unk < Global_262145.f_26013)
			num = 0;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25993 && unk < Global_262145.f_26014)
			num = 0;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25994 && unk < Global_262145.f_26015)
			num = 0;
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25995 && unk < Global_262145.f_26016)
			num = 0;
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25996 && unk < Global_262145.f_26017)
			num = 0;
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25997 && unk < Global_262145.f_26018)
			num = 0;
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25998 && unk < Global_262145.f_26019)
			num = 0;
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25999 && unk < Global_262145.f_26020)
			num = 0;
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26000 && unk < Global_262145.f_26021)
			num = 0;
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28820 && unk < Global_262145.f_28841)
			num = 0;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28821 && unk < Global_262145.f_28842)
			num = 0;
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28822 && unk < Global_262145.f_28843)
			num = 0;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28823 && unk < Global_262145.f_28844)
			num = 0;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28824 && unk < Global_262145.f_28845)
			num = 0;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28825 && unk < Global_262145.f_28846)
			num = 0;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28826 && unk < Global_262145.f_28847)
			num = 0;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28827 && unk < Global_262145.f_28848)
			num = 0;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28828 && unk < Global_262145.f_28849)
			num = 0;
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28829 && unk < Global_262145.f_28850)
			num = 0;
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28830 && unk < Global_262145.f_28851)
			num = 0;
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28831 && unk < Global_262145.f_28852)
			num = 0;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28832 && unk < Global_262145.f_28853)
			num = 0;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28833 && unk < Global_262145.f_28854)
			num = 0;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28834 && unk < Global_262145.f_28855)
			num = 0;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28835 && unk < Global_262145.f_28856)
			num = 0;
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28836 && unk < Global_262145.f_28857)
			num = 0;
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28837 && unk < Global_262145.f_28858)
			num = 0;
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28838 && unk < Global_262145.f_28859)
			num = 0;
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28839 && unk < Global_262145.f_28860)
			num = 0;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28840 && unk < Global_262145.f_28861)
			num = 0;
	}
	else if (iParam0 == joaat("formula"))
	{
		if (!Global_262145.f_28863 && unk < Global_262145.f_28864 && !Global_262145.f_28818)
			num = 0;
	}
	else if (iParam0 == joaat("formula2"))
	{
		if (!Global_262145.f_28866 && unk < Global_262145.f_28867 && !Global_262145.f_28819)
			num = 0;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28871 && unk < Global_262145.f_28874)
			num = 0;
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28872 && unk < Global_262145.f_28875)
			num = 0;
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28873 && unk < Global_262145.f_28876)
			num = 0;
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29889 && unk < Global_262145.f_29554)
			num = 0;
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29540 && unk < Global_262145.f_29561)
			num = 0;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29541 && unk < Global_262145.f_29547)
			num = 0;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29887 && unk < Global_262145.f_29555)
			num = 0;
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29888 && unk < Global_262145.f_29556)
			num = 0;
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29534 && unk < Global_262145.f_29553)
			num = 0;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29535 && unk < Global_262145.f_29562)
			num = 0;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29536 && unk < Global_262145.f_29552)
			num = 0;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29537 && unk < Global_262145.f_29550)
			num = 0;
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29883 && unk < Global_262145.f_29557)
			num = 0;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29884 && unk < Global_262145.f_29558)
			num = 0;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29885 && unk < Global_262145.f_29559)
			num = 0;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29886 && unk < Global_262145.f_29560)
			num = 0;
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29538 && unk < Global_262145.f_29549)
			num = 0;
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29539 && unk < Global_262145.f_29551)
			num = 0;
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30348 && unk < Global_262145.f_30331)
			num = 0;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30349 && unk < Global_262145.f_30332)
			num = 0;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30350 && unk < Global_262145.f_30333)
			num = 0;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30351 && unk < Global_262145.f_30334)
			num = 0;
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30352 && unk < Global_262145.f_30335)
			num = 0;
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30353 && unk < Global_262145.f_30336)
			num = 0;
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30354 && unk < Global_262145.f_30337)
			num = 0;
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30355 && unk < Global_262145.f_30338)
			num = 0;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30356 && unk < Global_262145.f_30339)
			num = 0;
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30365)
		{
		}
		else if (!Global_262145.f_30357 && unk < Global_262145.f_30340)
		{
			num = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30358 && unk < Global_262145.f_30341)
			num = 0;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30359 && unk < Global_262145.f_30342)
			num = 0;
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30360 && unk < Global_262145.f_30343)
			num = 0;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30361 && unk < Global_262145.f_30344)
			num = 0;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30366)
		{
		}
		else if (!Global_262145.f_30362 && unk < Global_262145.f_30345)
		{
			num = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30363 && unk < Global_262145.f_30346)
			num = 0;
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30364 && unk < Global_262145.f_30347)
			num = 0;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31216 && unk < Global_262145.f_31199)
			num = 0;
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31217 && unk < Global_262145.f_31200)
			num = 0;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31218 && unk < Global_262145.f_31201)
			num = 0;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31219 && unk < Global_262145.f_31202)
			num = 0;
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31220 && unk < Global_262145.f_31203)
			num = 0;
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31221 && unk < Global_262145.f_31204)
			num = 0;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31222 && unk < Global_262145.f_31205)
			num = 0;
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31223 && unk < Global_262145.f_31206)
			num = 0;
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31224 && unk < Global_262145.f_31207)
			num = 0;
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31225 && unk < Global_262145.f_31208)
			num = 0;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31226 && unk < Global_262145.f_31209)
			num = 0;
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31227 && unk < Global_262145.f_31210)
			num = 0;
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31228 && unk < Global_262145.f_31211)
			num = 0;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31229 && unk < Global_262145.f_31212)
			num = 0;
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31230 && unk < Global_262145.f_31213)
			num = 0;
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31231 && unk < Global_262145.f_31214)
			num = 0;
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31232 && unk < Global_262145.f_31215)
			num = 0;
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32099 && unk < Global_262145.f_32084)
			num = 0;
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32100 && unk < Global_262145.f_32085)
			num = 0;
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32101 && unk < Global_262145.f_32086)
			num = 0;
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32102 && unk < Global_262145.f_32087)
			num = 0;
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32103 && unk < Global_262145.f_32088)
			num = 0;
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32104 && unk < Global_262145.f_32089)
			num = 0;
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32105 && unk < Global_262145.f_32090)
			num = 0;
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32106 && unk < Global_262145.f_32091)
			num = 0;
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32107 && unk < Global_262145.f_32092)
			num = 0;
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32108 && unk < Global_262145.f_32093)
			num = 0;
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32109 && unk < Global_262145.f_32094)
			num = 0;
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32110 && unk < Global_262145.f_32095)
			num = 0;
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32111 && unk < Global_262145.f_32096)
			num = 0;
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32112 && unk < Global_262145.f_32097)
			num = 0;
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32177)
		{
		}
		else if (!Global_262145.f_32113 && unk < Global_262145.f_32098)
		{
			num = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!*Global_262145.f_33350 && unk < *Global_262145.f_33331)
			num = 0;
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!*Global_262145.f_33344 && unk < *Global_262145.f_33325)
			num = 0;
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!*Global_262145.f_33348 && unk < *Global_262145.f_33329)
			num = 0;
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!*Global_262145.f_33342 && unk < *Global_262145.f_33323)
			num = 0;
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!*Global_262145.f_33353 && unk < *Global_262145.f_33334)
			num = 0;
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!*Global_262145.f_33345 && unk < *Global_262145.f_33326)
			num = 0;
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!*Global_262145.f_33354 && unk < *Global_262145.f_33335)
			num = 0;
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!*Global_262145.f_33356 && unk < *Global_262145.f_33337)
			num = 0;
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!*Global_262145.f_33347 && unk < *Global_262145.f_33328)
			num = 0;
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!*Global_262145.f_33355 && unk < *Global_262145.f_33336)
			num = 0;
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!*Global_262145.f_33358 && unk < *Global_262145.f_33339)
			num = 0;
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!*Global_262145.f_33343 && unk < *Global_262145.f_33324)
			num = 0;
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!*Global_262145.f_33351 && unk < *Global_262145.f_33332)
			num = 0;
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!*Global_262145.f_33357 && unk < *Global_262145.f_33338)
			num = 0;
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!*Global_262145.f_33349 && unk < *Global_262145.f_33330)
			num = 0;
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!*Global_262145.f_33359 && unk < *Global_262145.f_33340)
			num = 0;
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!*Global_262145.f_33346 && unk < *Global_262145.f_33327)
			num = 0;
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!*Global_262145.f_33341 && unk < *Global_262145.f_33322)
			num = 0;
	}
	else if (iParam0 == 1384502824)
	{
		if (!*Global_262145.f_34217 && unk < *Global_262145.f_34201)
			num = 0;
	}
	else if (iParam0 == -1576586413)
	{
		if (!*Global_262145.f_34217 && unk < *Global_262145.f_34201)
			num = 0;
	}
	else if (iParam0 == -1249788006)
	{
		if (!*Global_262145.f_34226 && unk < *Global_262145.f_34209)
			num = 0;
	}
	else if (iParam0 == -1386336041)
	{
		if (!*Global_262145.f_34220 && unk < *Global_262145.f_34204)
			num = 0;
	}
	else if (iParam0 == -1627077503)
	{
		if (!*Global_262145.f_34214 && unk < *Global_262145.f_34198)
			num = 0;
	}
	else if (iParam0 == -1035489563)
	{
		if (!*Global_262145.f_34215 && unk < *Global_262145.f_34199)
			num = 0;
	}
	else if (iParam0 == 1748565021)
	{
		if (!*Global_262145.f_34212 && unk < *Global_262145.f_34196)
			num = 0;
	}
	else if (iParam0 == 2100457220)
	{
		if (!*Global_262145.f_34223 && unk < *Global_262145.f_34207)
			num = 0;
	}
	else if (iParam0 == 996383885)
	{
		if (!*Global_262145.f_34227 && unk < *Global_262145.f_34211)
			num = 0;
	}
	else if (iParam0 == -131348178)
	{
		if (!*Global_262145.f_34224 && unk < *Global_262145.f_34208)
			num = 0;
	}
	else if (iParam0 == 268758436)
	{
		if (!*Global_262145.f_34213 && unk < *Global_262145.f_34197)
			num = 0;
	}
	else if (iParam0 == 1076201208)
	{
		if (!*Global_262145.f_34216 && unk < *Global_262145.f_34200)
			num = 0;
	}
	else if (iParam0 == 669204833)
	{
		if (!*Global_262145.f_34225 && unk < *Global_262145.f_34210)
			num = 0;
	}
	else if (iParam0 == 1550581940)
	{
		if (!*Global_262145.f_34221 && unk < *Global_262145.f_34205)
			num = 0;
	}
	else if (iParam0 == -1933242328)
	{
		if (!*Global_262145.f_34222 && unk < *Global_262145.f_34206)
			num = 0;
	}
	else if (iParam0 == -461850249)
	{
		if (!*Global_262145.f_34219 && unk < *Global_262145.f_34203)
			num = 0;
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!*Global_262145.f_34218 && unk < *Global_262145.f_34202)
			num = 0;
	}

	if (iParam0 == joaat("exemplar"))
		if (!*Global_262145.f_35167 && !*Global_262145.f_35168)
			num = 0;
	else if (iParam0 == joaat("cogcabrio"))
		if (!*Global_262145.f_35169 && !*Global_262145.f_35170)
			num = 0;
	else if (iParam0 == joaat("thrust"))
		if (!*Global_262145.f_35171 && !*Global_262145.f_35172)
			num = 0;
	else if (iParam0 == joaat("vindicator"))
		if (!*Global_262145.f_35173 && !*Global_262145.f_35174)
			num = 0;
	else if (iParam0 == joaat("coquette3"))
		if (!*Global_262145.f_35175 && !*Global_262145.f_35176)
			num = 0;
	else if (iParam0 == joaat("brawler"))
		if (!*Global_262145.f_35177 && !*Global_262145.f_35178)
			num = 0;
	else if (iParam0 == joaat("cognoscenti"))
		if (!*Global_262145.f_35179 && !*Global_262145.f_35180)
			num = 0;
	else if (iParam0 == joaat("cognoscenti2"))
		if (!*Global_262145.f_35181 && !*Global_262145.f_35182)
			num = 0;
	else if (iParam0 == joaat("cog55"))
		if (!*Global_262145.f_35183 && !*Global_262145.f_35184)
			num = 0;
	else if (iParam0 == joaat("cog552"))
		if (!*Global_262145.f_35185 && !*Global_262145.f_35186)
			num = 0;
	else if (iParam0 == joaat("superd"))
		if (!*Global_262145.f_35187 && !*Global_262145.f_35188)
			num = 0;
	else if (iParam0 == joaat("schafter4"))
		if (!*Global_262145.f_35189 && !*Global_262145.f_35190)
			num = 0;
	else if (iParam0 == joaat("schafter6"))
		if (!*Global_262145.f_35191 && !*Global_262145.f_35192)
			num = 0;
	else if (iParam0 == joaat("alpha"))
		if (!*Global_262145.f_35193 && !*Global_262145.f_35194)
			num = 0;
	else if (iParam0 == joaat("feltzer2"))
		if (!*Global_262145.f_35195 && !*Global_262145.f_35196)
			num = 0;
	else if (iParam0 == joaat("massacro"))
		if (!*Global_262145.f_35197 && !*Global_262145.f_35198)
			num = 0;
	else if (iParam0 == joaat("rapidgt"))
		if (!*Global_262145.f_35199 && !*Global_262145.f_35200)
			num = 0;
	else if (iParam0 == joaat("rapidgt2"))
		if (!*Global_262145.f_35201 && !*Global_262145.f_35202)
			num = 0;
	else if (iParam0 == joaat("seven70"))
		if (!*Global_262145.f_35203 && !*Global_262145.f_35204)
			num = 0;
	else if (iParam0 == joaat("jester"))
		if (!*Global_262145.f_35205 && !*Global_262145.f_35206)
			num = 0;
	else if (iParam0 == joaat("bestiagts"))
		if (!*Global_262145.f_35207 && !*Global_262145.f_35208)
			num = 0;
	else if (iParam0 == joaat("carbonizzare"))
		if (!*Global_262145.f_35209 && !*Global_262145.f_35210)
			num = 0;
	else if (iParam0 == joaat("coquette"))
		if (!*Global_262145.f_35211 && !*Global_262145.f_35212)
			num = 0;
	else if (iParam0 == joaat("furoregt"))
		if (!*Global_262145.f_35213 && !*Global_262145.f_35214)
			num = 0;
	else if (iParam0 == joaat("ninef"))
		if (!*Global_262145.f_35215 && !*Global_262145.f_35216)
			num = 0;
	else if (iParam0 == joaat("ninef2"))
		if (!*Global_262145.f_35217 && !*Global_262145.f_35218)
			num = 0;
	else if (iParam0 == joaat("verlierer2"))
		if (!*Global_262145.f_35219 && !*Global_262145.f_35220)
			num = 0;
	else if (iParam0 == joaat("btype"))
		if (!*Global_262145.f_35221 && !*Global_262145.f_35222)
			num = 0;
	else if (iParam0 == joaat("feltzer3"))
		if (!*Global_262145.f_35223 && !*Global_262145.f_35224)
			num = 0;
	else if (iParam0 == joaat("stingergt"))
		if (!*Global_262145.f_35225 && !*Global_262145.f_35226)
			num = 0;
	else if (iParam0 == joaat("stinger"))
		if (!*Global_262145.f_35227 && !*Global_262145.f_35228)
			num = 0;
	else if (iParam0 == joaat("coquette2"))
		if (!*Global_262145.f_35229 && !*Global_262145.f_35230)
			num = 0;
	else if (iParam0 == joaat("jb700"))
		if (!*Global_262145.f_35231 && !*Global_262145.f_35232)
			num = 0;
	else if (iParam0 == joaat("mamba"))
		if (!*Global_262145.f_35233 && !*Global_262145.f_35234)
			num = 0;
	else if (iParam0 == joaat("monroe"))
		if (!*Global_262145.f_35235 && !*Global_262145.f_35236)
			num = 0;
	else if (iParam0 == joaat("btype3"))
		if (!*Global_262145.f_35237 && !*Global_262145.f_35238)
			num = 0;
	else if (iParam0 == joaat("ztype"))
		if (!*Global_262145.f_35239 && !*Global_262145.f_35240)
			num = 0;
	else if (iParam0 == joaat("voltic"))
		if (!*Global_262145.f_35241 && !*Global_262145.f_35242)
			num = 0;
	else if (iParam0 == joaat("sheava"))
		if (!*Global_262145.f_35243 && !*Global_262145.f_35244)
			num = 0;
	else if (iParam0 == joaat("cheetah"))
		if (!*Global_262145.f_35245 && !*Global_262145.f_35246)
			num = 0;
	else if (iParam0 == joaat("entityxf"))
		if (!*Global_262145.f_35247 && !*Global_262145.f_35248)
			num = 0;
	else if (iParam0 == joaat("infernus"))
		if (!*Global_262145.f_35249 && !*Global_262145.f_35250)
			num = 0;
	else if (iParam0 == joaat("vacca"))
		if (!*Global_262145.f_35251 && !*Global_262145.f_35252)
			num = 0;
	else if (iParam0 == joaat("bullet"))
		if (!*Global_262145.f_35253 && !*Global_262145.f_35254)
			num = 0;
	else if (iParam0 == joaat("fmj"))
		if (!*Global_262145.f_35255 && !*Global_262145.f_35256)
			num = 0;
	else if (iParam0 == joaat("baller2"))
		if (!*Global_262145.f_35257 && !*Global_262145.f_35258)
			num = 0;
	else if (iParam0 == joaat("baller3"))
		if (!*Global_262145.f_35259 && !*Global_262145.f_35260)
			num = 0;
	else if (iParam0 == joaat("baller5"))
		if (!*Global_262145.f_35261 && !*Global_262145.f_35262)
			num = 0;
	else if (iParam0 == joaat("baller4"))
		if (!*Global_262145.f_35263 && !*Global_262145.f_35264)
			num = 0;
	else if (iParam0 == joaat("baller6"))
		if (!*Global_262145.f_35265 && !*Global_262145.f_35266)
			num = 0;
	else if (iParam0 == joaat("xls"))
		if (!*Global_262145.f_35267 && !*Global_262145.f_35268)
			num = 0;
	else if (iParam0 == joaat("xls2"))
		if (!*Global_262145.f_35269 && !*Global_262145.f_35270)
			num = 0;
	else if (iParam0 == joaat("prairie"))
		if (!*Global_262145.f_35271 && !*Global_262145.f_35272)
			num = 0;
	else if (iParam0 == joaat("issi2"))
		if (!*Global_262145.f_35273 && !*Global_262145.f_35274)
			num = 0;
	else if (iParam0 == joaat("dilettante"))
		if (!*Global_262145.f_35275 && !*Global_262145.f_35276)
			num = 0;
	else if (iParam0 == joaat("felon"))
		if (!*Global_262145.f_35277 && !*Global_262145.f_35278)
			num = 0;
	else if (iParam0 == joaat("felon2"))
		if (!*Global_262145.f_35279 && !*Global_262145.f_35280)
			num = 0;
	else if (iParam0 == joaat("f620"))
		if (!*Global_262145.f_35281 && !*Global_262145.f_35282)
			num = 0;
	else if (iParam0 == joaat("jackal"))
		if (!*Global_262145.f_35283 && !*Global_262145.f_35284)
			num = 0;
	else if (iParam0 == joaat("oracle2"))
		if (!*Global_262145.f_35285 && !*Global_262145.f_35286)
			num = 0;
	else if (iParam0 == joaat("oracle"))
		if (!*Global_262145.f_35287 && !*Global_262145.f_35288)
			num = 0;
	else if (iParam0 == joaat("sentinel2"))
		if (!*Global_262145.f_35289 && !*Global_262145.f_35290)
			num = 0;
	else if (iParam0 == joaat("zion"))
		if (!*Global_262145.f_35291 && !*Global_262145.f_35292)
			num = 0;
	else if (iParam0 == joaat("zion2"))
		if (!*Global_262145.f_35293 && !*Global_262145.f_35294)
			num = 0;
	else if (iParam0 == joaat("akuma"))
		if (!*Global_262145.f_35295 && !*Global_262145.f_35296)
			num = 0;
	else if (iParam0 == joaat("double"))
		if (!*Global_262145.f_35297 && !*Global_262145.f_35298)
			num = 0;
	else if (iParam0 == joaat("enduro"))
		if (!*Global_262145.f_35299 && !*Global_262145.f_35300)
			num = 0;
	else if (iParam0 == joaat("hexer"))
		if (!*Global_262145.f_35301 && !*Global_262145.f_35302)
			num = 0;
	else if (iParam0 == joaat("innovation"))
		if (!*Global_262145.f_35303 && !*Global_262145.f_35304)
			num = 0;
	else if (iParam0 == joaat("sanchez"))
		if (!*Global_262145.f_35305 && !*Global_262145.f_35306)
			num = 0;
	else if (iParam0 == joaat("sanchez2"))
		if (!*Global_262145.f_35307 && !*Global_262145.f_35308)
			num = 0;
	else if (iParam0 == joaat("bati2"))
		if (!*Global_262145.f_35309 && !*Global_262145.f_35310)
			num = 0;
	else if (iParam0 == joaat("faggio2"))
		if (!*Global_262145.f_35311 && !*Global_262145.f_35312)
			num = 0;
	else if (iParam0 == joaat("ruffian"))
		if (!*Global_262145.f_35313 && !*Global_262145.f_35314)
			num = 0;
	else if (iParam0 == joaat("nemesis"))
		if (!*Global_262145.f_35315 && !*Global_262145.f_35316)
			num = 0;
	else if (iParam0 == joaat("hakuchou"))
		if (!*Global_262145.f_35317 && !*Global_262145.f_35318)
			num = 0;
	else if (iParam0 == joaat("pcj"))
		if (!*Global_262145.f_35319 && !*Global_262145.f_35320)
			num = 0;
	else if (iParam0 == joaat("vader"))
		if (!*Global_262145.f_35321 && !*Global_262145.f_35322)
			num = 0;
	else if (iParam0 == joaat("sovereign"))
		if (!*Global_262145.f_35323 && !*Global_262145.f_35324)
			num = 0;
	else if (iParam0 == joaat("gauntlet"))
		if (!*Global_262145.f_35325 && !*Global_262145.f_35326)
			num = 0;
	else if (iParam0 == joaat("ratloader"))
		if (!*Global_262145.f_35327 && !*Global_262145.f_35328)
			num = 0;
	else if (iParam0 == joaat("picador"))
		if (!*Global_262145.f_35329 && !*Global_262145.f_35330)
			num = 0;
	else if (iParam0 == joaat("vigero"))
		if (!*Global_262145.f_35331 && !*Global_262145.f_35332)
			num = 0;
	else if (iParam0 == joaat("ruiner"))
		if (!*Global_262145.f_35333 && !*Global_262145.f_35334)
			num = 0;
	else if (iParam0 == joaat("tampa"))
		if (!*Global_262145.f_35335 && !*Global_262145.f_35336)
			num = 0;
	else if (iParam0 == joaat("blade"))
		if (!*Global_262145.f_35337 && !*Global_262145.f_35338)
			num = 0;
	else if (iParam0 == joaat("bifta"))
		if (!*Global_262145.f_35339 && !*Global_262145.f_35340)
			num = 0;
	else if (iParam0 == joaat("dune"))
		if (!*Global_262145.f_35341 && !*Global_262145.f_35342)
			num = 0;
	else if (iParam0 == joaat("bfinjection"))
		if (!*Global_262145.f_35343 && !*Global_262145.f_35344)
			num = 0;
	else if (iParam0 == joaat("bodhi2"))
		if (!*Global_262145.f_35345 && !*Global_262145.f_35346)
			num = 0;
	else if (iParam0 == joaat("kalahari"))
		if (!*Global_262145.f_35347 && !*Global_262145.f_35348)
			num = 0;
	else if (iParam0 == joaat("rancherxl"))
		if (!*Global_262145.f_35349 && !*Global_262145.f_35350)
			num = 0;
	else if (iParam0 == joaat("rebel2"))
		if (!*Global_262145.f_35351 && !*Global_262145.f_35352)
			num = 0;
	else if (iParam0 == joaat("rebel"))
		if (!*Global_262145.f_35353 && !*Global_262145.f_35354)
			num = 0;
	else if (iParam0 == joaat("blazer"))
		if (!*Global_262145.f_35355 && !*Global_262145.f_35356)
			num = 0;
	else if (iParam0 == joaat("blazer3"))
		if (!*Global_262145.f_35357 && !*Global_262145.f_35358)
			num = 0;
	else if (iParam0 == joaat("sandking2"))
		if (!*Global_262145.f_35359 && !*Global_262145.f_35360)
			num = 0;
	else if (iParam0 == joaat("washington"))
		if (!*Global_262145.f_35361 && !*Global_262145.f_35362)
			num = 0;
	else if (iParam0 == joaat("schafter2"))
		if (!*Global_262145.f_35363 && !*Global_262145.f_35364)
			num = 0;
	else if (iParam0 == joaat("romero"))
		if (!*Global_262145.f_35365 && !*Global_262145.f_35366)
			num = 0;
	else if (iParam0 == joaat("fugitive"))
		if (!*Global_262145.f_35367 && !*Global_262145.f_35368)
			num = 0;
	else if (iParam0 == joaat("surge"))
		if (!*Global_262145.f_35369 && !*Global_262145.f_35370)
			num = 0;
	else if (iParam0 == joaat("asea"))
		if (!*Global_262145.f_35371 && !*Global_262145.f_35372)
			num = 0;
	else if (iParam0 == joaat("premier"))
		if (!*Global_262145.f_35373 && !*Global_262145.f_35374)
			num = 0;
	else if (iParam0 == joaat("regina"))
		if (!*Global_262145.f_35375 && !*Global_262145.f_35376)
			num = 0;
	else if (iParam0 == joaat("asterope"))
		if (!*Global_262145.f_35377 && !*Global_262145.f_35378)
			num = 0;
	else if (iParam0 == joaat("intruder"))
		if (!*Global_262145.f_35379 && !*Global_262145.f_35380)
			num = 0;
	else if (iParam0 == joaat("tailgater"))
		if (!*Global_262145.f_35381 && !*Global_262145.f_35382)
			num = 0;
	else if (iParam0 == joaat("stanier"))
		if (!*Global_262145.f_35383 && !*Global_262145.f_35384)
			num = 0;
	else if (iParam0 == joaat("ingot"))
		if (!*Global_262145.f_35385 && !*Global_262145.f_35386)
			num = 0;
	else if (iParam0 == joaat("warrener"))
		if (!*Global_262145.f_35387 && !*Global_262145.f_35388)
			num = 0;
	else if (iParam0 == joaat("stratum"))
		if (!*Global_262145.f_35389 && !*Global_262145.f_35390)
			num = 0;
	else if (iParam0 == joaat("schwarzer"))
		if (!*Global_262145.f_35391 && !*Global_262145.f_35392)
			num = 0;
	else if (iParam0 == joaat("surano"))
		if (!*Global_262145.f_35393 && !*Global_262145.f_35394)
			num = 0;
	else if (iParam0 == joaat("buffalo"))
		if (!*Global_262145.f_35395 && !*Global_262145.f_35396)
			num = 0;
	else if (iParam0 == joaat("buffalo2"))
		if (!*Global_262145.f_35397 && !*Global_262145.f_35398)
			num = 0;
	else if (iParam0 == joaat("massacro2"))
		if (!*Global_262145.f_35399 && !*Global_262145.f_35400)
			num = 0;
	else if (iParam0 == joaat("jester2"))
		if (!*Global_262145.f_35401 && !*Global_262145.f_35402)
			num = 0;
	else if (iParam0 == joaat("futo"))
		if (!*Global_262145.f_35403 && !*Global_262145.f_35404)
			num = 0;
	else if (iParam0 == joaat("penumbra"))
		if (!*Global_262145.f_35405 && !*Global_262145.f_35406)
			num = 0;
	else if (iParam0 == joaat("fusilade"))
		if (!*Global_262145.f_35407 && !*Global_262145.f_35408)
			num = 0;
	else if (iParam0 == joaat("btype2"))
		if (!*Global_262145.f_35409 && !*Global_262145.f_35410)
			num = 0;
	else if (iParam0 == joaat("pigalle"))
		if (!*Global_262145.f_35411 && !*Global_262145.f_35412)
			num = 0;
	else if (iParam0 == joaat("cavalcade"))
		if (!*Global_262145.f_35413 && !*Global_262145.f_35414)
			num = 0;
	else if (iParam0 == joaat("cavalcade2"))
		if (!*Global_262145.f_35415 && !*Global_262145.f_35416)
			num = 0;
	else if (iParam0 == joaat("bjxl"))
		if (!*Global_262145.f_35417 && !*Global_262145.f_35418)
			num = 0;
	else if (iParam0 == joaat("serrano"))
		if (!*Global_262145.f_35419 && !*Global_262145.f_35420)
			num = 0;
	else if (iParam0 == joaat("gresley"))
		if (!*Global_262145.f_35421 && !*Global_262145.f_35422)
			num = 0;
	else if (iParam0 == joaat("seminole"))
		if (!*Global_262145.f_35423 && !*Global_262145.f_35424)
			num = 0;
	else if (iParam0 == joaat("granger"))
		if (!*Global_262145.f_35425 && !*Global_262145.f_35426)
			num = 0;
	else if (iParam0 == joaat("landstalker"))
		if (!*Global_262145.f_35427 && !*Global_262145.f_35428)
			num = 0;
	else if (iParam0 == joaat("habanero"))
		if (!*Global_262145.f_35429 && !*Global_262145.f_35430)
			num = 0;
	else if (iParam0 == joaat("fq2"))
		if (!*Global_262145.f_35431 && !*Global_262145.f_35432)
			num = 0;
	else if (iParam0 == joaat("baller"))
		if (!*Global_262145.f_35433 && !*Global_262145.f_35434)
			num = 0;
	else if (iParam0 == joaat("patriot"))
		if (!*Global_262145.f_35435 && !*Global_262145.f_35436)
			num = 0;
	else if (iParam0 == joaat("rocoto"))
		if (!*Global_262145.f_35437 && !*Global_262145.f_35438)
			num = 0;
	else if (iParam0 == joaat("radi"))
		if (!*Global_262145.f_35439 && !*Global_262145.f_35440)
			num = 0;
	else if (iParam0 == joaat("mesa3"))
		if (!*Global_262145.f_35441 && !*Global_262145.f_35442)
			num = 0;
	else if (iParam0 == joaat("monster"))
		if (!*Global_262145.f_35443 && !*Global_262145.f_35444)
			num = 0;
	else if (iParam0 == 1336514315)
		if (!*Global_262145.f_35473 && unk < *Global_262145.f_35460)
			num = 0;
	else if (iParam0 == -1659004814)
		if (!*Global_262145.f_35472 && unk < *Global_262145.f_35459)
			num = 0;
	else if (iParam0 == -654498607)
		if (!*Global_262145.f_35474 && unk < *Global_262145.f_35461)
			num = 0;
	else if (iParam0 == -979292575)
		if (!*Global_262145.f_35465 && unk < *Global_262145.f_35452)
			num = 0;
	else if (iParam0 == -1763675285)
		if (!*Global_262145.f_35462 && unk < *Global_262145.f_35449)
			num = 0;
	else if (iParam0 == func_151(true))
		num = 1;
	else if (iParam0 == -536105557)
		if (!*Global_262145.f_35463 && unk < *Global_262145.f_35450)
			num = 0;
	else if (iParam0 == 1447690049)
		if (!*Global_262145.f_35466 && unk < *Global_262145.f_35453)
			num = 0;
	else if (iParam0 == 165968051)
		if (!*Global_262145.f_35469 && unk < *Global_262145.f_35456)
			num = 0;
	else if (iParam0 == 191916658)
		if (!*Global_262145.f_35467 && unk < *Global_262145.f_35454)
			num = 0;
	else if (iParam0 == 802856453)
		if (!*Global_262145.f_35464 && unk < *Global_262145.f_35451)
			num = 0;
	else if (iParam0 == 610429990)
		if (!*Global_262145.f_35471 && unk < *Global_262145.f_35458)
			num = 0;
	else if (iParam0 == 239897677)
		if (!*Global_262145.f_35468 && unk < *Global_262145.f_35455)
			num = 0;
	else if (iParam0 == -897824023)
		if (!*Global_262145.f_35470 && unk < *Global_262145.f_35457)
			num = 0;
	else if (iParam0 == -1983622024)
		if (!*Global_262145.f_35470 && unk < *Global_262145.f_35457)
			num = 0;

	return num;
}

int func_151(BOOL bParam0) // Position - 0xF761
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

BOOL func_152() // Position - 0xF77B
{
	return false;
}

BOOL func_153() // Position - 0xF784
{
	return true;
}

BOOL func_154() // Position - 0xF78D
{
	return true;
}

BOOL func_155() // Position - 0xF796
{
	if (unk_0x087611B922B50F13(-1226939934))
		return true;

	return false;
}

BOOL func_156() // Position - 0xF7AF
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

BOOL func_157(int iParam0) // Position - 0xF867
{
	int num;
	var unk;

	num = unk_0x4B423FAA24E8ABF0(iParam0);
	unk = unk_0xCA7159F2C5FF745A(iParam0);

	if (num == joaat("speedo") && unk_0x1B79E937E91F40C3(unk, "LAMAR G "))
		return true;

	if (!func_147(num, false, -1))
		return true;

	return false;
}

BOOL func_158(int iParam0) // Position - 0xF8AE
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98174[i]))
			if (Global_98174[i] == iParam0)
				return true;
	}

	return false;
}

BOOL func_159(int iParam0) // Position - 0xF8E9
{
	int i;

	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98144[i]) && unk_0xD9F5E1FEFD1329E4(Global_98144[i], 0))
				if (Global_98144[i] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98144[i]) == unk_0x4B423FAA24E8ABF0(iParam0))
					return true;
		}
	}

	return false;
}

BOOL func_160(int iParam0) // Position - 0xF965
{
	int i;

	if (unk_0xFC8BFE4B41177C22(Global_77479.f_484[24]))
		if (iParam0 == Global_77479.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_77479.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (iParam0 == Global_77479.f_484[i])
					return true;
	}

	return false;
}

int func_161(int iParam0) // Position - 0xFA4D
{
	if (iParam0 == -1)
		return 0;

	return Global_77479.f_139[iParam0];
}

BOOL func_162(var uParam0, int iParam1) // Position - 0xFA69
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (func_156())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (func_156())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113810.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_110(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113810.f_32752.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113810.f_32752.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_110(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_110(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

void func_163(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Position - 0x11159
{
	if (func_162(&Global_77479.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10))
		{
			func_168(iParam0);
			func_167(uParam1, &Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]);
		
			if (IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 11))
			{
				Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/] = { uParam2 };
				Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14] = -1f;
			}
		
			Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_164(iParam0, true);
		}
	}

	return;
}

void func_164(int iParam0, BOOL bParam1) // Position - 0x11252
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_166(iParam0, 0))
		{
			func_165(iParam0, 1, false);
			func_165(iParam0, 2, false);
			func_165(iParam0, 3, false);
			func_165(iParam0, 4, false);
			func_165(iParam0, 0, true);
			Global_77479[iParam0] = 1;
		}
	}
	else
	{
		func_165(iParam0, 0, false);
	}

	return;
}

void func_165(int iParam0, int iParam1, BOOL bParam2) // Position - 0x112AF
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		unk_0x0B0C9A0F9AAEB7F0(&Global_113810.f_32752[iParam0], iParam1);
	else
		unk_0x8744D2E3FC95740E(&Global_113810.f_32752[iParam0], iParam1);

	return;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x112EA
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}

void func_167(var uParam0, var uParam1) // Position - 0x1130A
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

void func_168(int iParam0) // Position - 0x113D6
{
	if (iParam0 == -1)
		return;

	if (func_162(&Global_77479.f_555[0 /*21*/], iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_77479.f_139[iParam0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_77479.f_139[iParam0], 1, 1);
			unk_0x68298CA6191CDFDB(&Global_77479.f_139[iParam0]);
			Global_77479.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13))
			func_164(iParam0, false);
	}

	return;
}

void func_169(int iParam0) // Position - 0x1144D
{
	iParam0 != 24 && iParam0 != 25;
	func_168(iParam0);
	func_164(iParam0, false);
	return;
}

void func_170() // Position - 0x11474
{
	Global_23251.f_6 = 1;
	return;
}

void func_171() // Position - 0x11482
{
	int num;

	if (!unk_0xFC8BFE4B41177C22(iLocal_27))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), uLocal_30) < 2500f)
			{
				iLocal_27 = unk_0xDC8D5832207C2EAD();
			
				if (unk_0xFC8BFE4B41177C22(iLocal_27))
				{
					num = unk_0x4B423FAA24E8ABF0(iLocal_27);
					num == joaat("dune");
				}
			}
		}
	}

	return;
}

int func_172() // Position - 0x114DC
{
	return joaat("dune");
}

void func_173(BOOL bParam0) // Position - 0x114E9
{
	unk_0x55098D9E9AD58806(joaat("dune"));

	if (unk_0xFC8BFE4B41177C22(uLocal_52))
		if (bParam0)
			unk_0x8C1F7D7A31B2A38E(&uLocal_52);
		else
			unk_0x68298CA6191CDFDB(&uLocal_52);

	return;
}

BOOL func_174() // Position - 0x11517
{
	if (func_28(9))
	{
		if (unk_0x486FF5D06E9659F1(joaat("trevor2")) == 1)
		{
			if (!uLocal_36[0])
				uLocal_36[0] = 1;
		
			return false;
		}
	
		if (unk_0x486FF5D06E9659F1(joaat("finale_heist2b")) == 1)
		{
			if (!uLocal_36[1])
				uLocal_36[1] = 1;
		
			return false;
		}
	
		if (unk_0x486FF5D06E9659F1(joaat("traffick_air")) == 1)
		{
			if (!uLocal_36[2])
				uLocal_36[2] = 1;
		
			return false;
		}
	
		if (unk_0x486FF5D06E9659F1(joaat("traffick_ground")) == 1)
		{
			if (!uLocal_36[3])
				uLocal_36[3] = 1;
		
			return false;
		}
	
		if (Global_100867)
			return false;
	
		if (iLocal_33 != -1)
			return false;
	
		if (func_196() == 309)
			return false;
	
		return true;
	}

	return false;
}

void func_175(int iParam0, int iParam1) // Position - 0x115D0
{
	func_176(iParam0, iParam1);
	return;
}

void func_176(int iParam0, int iParam1) // Position - 0x115E0
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_177(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x115F1
{
	func_178(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_178(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x11612
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
		func_179();
	}

	return;
}

void func_179() // Position - 0x117E5
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

BOOL func_180(int iParam0, int iParam1) // Position - 0x118FC
{
	return iParam0 && iParam1 != false;
}

void func_181(var uParam0) // Position - 0x1190B
{
	BOOL flag;
	var unk;
	var unk2;
	int num;
	var unk3;

	flag = false;

	if (iLocal_45 != 9)
	{
		if (!Global_113810.f_19986.f_14)
		{
			func_1(105, 1, false);
			Global_113810.f_19986.f_14 = 1;
			flag = true;
		}
		else
		{
			flag = true;
		}
	}
	else
	{
		func_1(105, false, false);
		Global_113810.f_19986.f_14 = 0;
	}

	if (iLocal_45 != 1 && iLocal_45 != 8)
	{
		if (func_174() && !*uParam0)
		{
			func_182(false);
			iLocal_45 = 1;
		}
	}

	switch (iLocal_45)
	{
		case 0:
			iLocal_45 = 1;
			break;
	
		case 1:
			if (!func_174())
				if (fLocal_29 < 50625f)
					iLocal_45 = 2;
				else if (bLocal_35)
					iLocal_45 = 2;
			break;
	
		case 2:
			unk_0xEC9DAA34BBB4658C(joaat("cuban800"));
			iLocal_45 = 3;
			break;
	
		case 3:
			unk_0xEC9DAA34BBB4658C(joaat("cuban800"));
		
			if (unk_0x6252BC0DD8A320DB(joaat("cuban800")))
			{
				if (!unk_0xFC8BFE4B41177C22(uLocal_46))
				{
					unk_0x60040CDD28AA1BC3(uLocal_48, 8f, 0, 0, 0, 0, 0, 0, 0);
					uLocal_46 = unk_0x5779387E956077A6(joaat("cuban800"), uLocal_48, 25.29f, 1, 1, 0);
					unk_0x55098D9E9AD58806(joaat("cuban800"));
					unk_0x20DD46D27530FAC7(uLocal_46, 2);
					func_175(&(Global_113810.f_19986), 128);
					iLocal_45 = 4;
				}
				else
				{
					iLocal_45 = 4;
				}
			}
			break;
	
		case 4:
			if (unk_0xFC8BFE4B41177C22(uLocal_46))
			{
				if (unk_0x1C2F771CDC87A3A5(uLocal_46, 0) || unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_45 = 9;
					return;
				}
			}
		
			if (func_28(9))
			{
				if (unk_0x486FF5D06E9659F1(joaat("traffick_ground")) == 1)
				{
					if (!unk_0x1C2F771CDC87A3A5(uLocal_46, 0))
					{
						unk_0x0B74F181ADFC39BF(uLocal_46, 2);
						return;
					}
				}
			}
			else if (unk_0x486FF5D06E9659F1(joaat("traffick_ground")) == 0)
			{
				if (!unk_0x1C2F771CDC87A3A5(uLocal_46, 0))
					unk_0x0B74F181ADFC39BF(uLocal_46, 1);
			}
		
			if (!bLocal_35)
			{
				if (fLocal_29 >= 50625f && !*uParam0)
				{
					func_182(false);
					iLocal_45 = 1;
					return;
				}
			}
		
			if (!flag && !*uParam0)
			{
				if (!bLocal_47)
				{
					if (unk_0x7F420695E3F776FB(uLocal_26, 0))
					{
						unk = unk_0xCDA725BC2F170795(uLocal_26);
					
						if (unk == uLocal_46)
						{
							bLocal_47 = true;
							unk_0x68298CA6191CDFDB(&uLocal_46);
							iLocal_45 = 9;
						}
					}
				}
			}
		
			if (*uParam0)
				unk_0x73CAFD2038E812B3(uLocal_26, uLocal_46, -1);
		
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uLocal_46, 0))
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), uLocal_46, 1))
					func_170();
		
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk2 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				
					if (unk2 == uLocal_46)
					{
						unk_0x97A5024CE91641F1("Traffick_Air");
					
						if (unk_0xFC8BFE4B41177C22(iLocal_27) && !unk_0x1C2F771CDC87A3A5(iLocal_27, 0))
							if (unk_0x4B423FAA24E8ABF0(iLocal_27) != joaat("dune") && unk_0x4B423FAA24E8ABF0(iLocal_27) != joaat("cuban800"))
								if (!unk_0x5105BE70DEF1F5FB(iLocal_27, 2137.1204f, 4799.97f, 39.678535f, 2116.64f, 4790.417f, 45.452946f, 25f, 0, 1, 0))
									func_142(iLocal_27, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, false);
							else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
								unk_0xE3A0299C9DEE59C8(iLocal_27);
					
						iLocal_45 = 6;
					}
				}
			}
			break;
	
		case 6:
			if (unk_0xA6E4F7A73ABC4A76("Traffick_Air"))
			{
				num = 0;
			
				if (*uParam0)
				{
					num = 1;
				}
				else
				{
					num = func_140(&iLocal_33, 6, 9, false, 0);
					bLocal_43 = true;
				}
			
				if (num == 1)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
				
					if (!*uParam0)
						func_84(unk_0x1AF90EB93E0012D6(), 0);
				
					iLocal_28 = SYSTEM::START_NEW_SCRIPT("Traffick_Air", 57500);
					func_81(15);
					unk_0xFD49725F3FE7EE13("Traffick_Air");
					unk_0x68298CA6191CDFDB(&uLocal_46);
				
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						if (Global_44569 == true)
							func_72(unk_0x4A8C381C258A124D());
				
					bLocal_47 = false;
					iLocal_45 = 7;
				}
				else if (num == 0)
				{
					bLocal_43 = false;
					func_182(false);
					iLocal_45 = 9;
				}
			}
			break;
	
		case 7:
			if (!unk_0xF40767E41852FB72(iLocal_28))
			{
				if (func_180(Global_112460, 1))
				{
					iLocal_45 = 8;
				}
				else
				{
					func_71(&iLocal_33);
					func_54();
					unk3 = func_53();
					func_45(&unk3, 0, 0, 3, 0, 0, 0);
					Global_113810.f_19986.f_11 = unk3;
					func_1(105, false, false);
					Global_113810.f_19986.f_14 = 0;
					iLocal_45 = 9;
				}
			
				*uParam0 = 0;
				func_43(&Global_112460, 1);
			}
			break;
	
		case 8:
			if (Global_100833 == 10)
			{
				if (Global_100867)
				{
					*uParam0 = 1;
				
					if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 2136.4456f, 4791.483f, 39.9702f, 1, 0, 0, 1);
				
					unk_0xEC9DAA34BBB4658C(joaat("cuban800"));
					unk_0x97A5024CE91641F1("Traffick_Air");
				
					if (unk_0x6252BC0DD8A320DB(joaat("cuban800")))
					{
						unk_0x60040CDD28AA1BC3(uLocal_48, 8f, 0, 0, 0, 0, 0, 0, 0);
						uLocal_46 = unk_0x5779387E956077A6(joaat("cuban800"), uLocal_48, 25.29f, 1, 1, 0);
						unk_0x55098D9E9AD58806(joaat("cuban800"));
						iLocal_45 = 3;
					}
				}
				else
				{
					*uParam0 = 0;
					iLocal_45 = 1;
				}
			}
			else if (Global_100833 == 13)
			{
				func_71(&iLocal_33);
				func_54();
				*uParam0 = 0;
				iLocal_45 = 1;
			}
			break;
	
		case 9:
			if (fLocal_29 >= 50625f && func_32(Global_113810.f_19986.f_11))
			{
				func_182(false);
				iLocal_45 = 1;
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_182(BOOL bParam0) // Position - 0x11E58
{
	unk_0x55098D9E9AD58806(joaat("cuban800"));

	if (unk_0xFC8BFE4B41177C22(uLocal_46))
		if (bParam0)
			unk_0x8C1F7D7A31B2A38E(&uLocal_46);
		else
			unk_0x68298CA6191CDFDB(&uLocal_46);

	if (func_180(Global_113810.f_19986, 128))
		func_43(&(Global_113810.f_19986), 128);

	bLocal_47 = false;
	return;
}

BOOL func_183() // Position - 0x11EA6
{
	if (!func_194())
		return false;

	if (!bLocal_43)
	{
		if (func_196() == 309)
			return true;
	
		if (!func_29(9))
			return false;
	}

	if (unk_0x486FF5D06E9659F1(joaat("traffick_ground")) == 1 || unk_0x486FF5D06E9659F1(joaat("traffick_air")) == 1)
		return true;

	uLocal_26 = unk_0x4A8C381C258A124D();
	unk_0x1C2F771CDC87A3A5(uLocal_26, 0);

	if (func_193())
		return true;

	if (func_22() != 2)
		return false;

	if (!func_187(6))
	{
		if (unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
			bLocal_44 = true;
	
		if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
			bLocal_44 = true;
	
		unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0);
		!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA());
		unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0;
		unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0);
		unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D());
		unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D());
		unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D());
		unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA());
		Global_112857;
		Global_32286;
		func_186();
		func_185(8, -1);
	
		if (func_184())
			return true;
	
		return false;
	}
	else
	{
		bLocal_44 = false;
	}

	return true;
}

BOOL func_184() // Position - 0x11FE8
{
	if (Global_78950)
		return true;
	else if (Global_63479 && !Global_63485)
		return true;

	return false;
}

BOOL func_185(int iParam0, int iParam1) // Position - 0x12012
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

BOOL func_186() // Position - 0x1204A
{
	return Global_1575063;
}

BOOL func_187(int iParam0) // Position - 0x12056
{
	int num;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				num = func_22();
			
				if (!func_13(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_192() || Global_112857 || Global_32286 || func_186() || func_185(8, -1) || func_139() || func_191() || func_184() || func_190() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_192() || Global_32286 || func_186() || func_185(8, -1) || func_184() || func_139() || func_191() || func_190() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_192() || Global_112857 || Global_32286 || func_186() || func_185(8, -1) || func_184() || func_139() || func_191() || func_190() || Global_113810.f_7691.f_919[num] == 5 || Global_43924 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_192() || Global_112857 || Global_32286 || func_186() || func_185(8, -1) || func_139() || func_191() || func_190() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_192() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || func_185(8, -1) || func_190() || func_189() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_185(8, -1) || func_139() || func_191() || func_189() || func_188())
							return false;
					
						if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3 && unk_0x6D231A0D52134FC1() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
							if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_192() || Global_32286 || func_186() || func_185(8, -1) || func_191() || func_184() || func_190() || Global_113810.f_7691.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_192() || func_191() || Global_112857 || Global_32286 || func_186() || Global_44569 || func_185(8, -1) || func_184() || func_189() || func_190() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_192() || Global_112857 || Global_32286 || func_186() || func_185(8, -1) || func_184() || func_189() || func_139() || func_191() || func_190())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_188() // Position - 0x12773
{
	return Global_100872.f_1;
}

BOOL func_189() // Position - 0x12781
{
	if (Global_97735 != -1)
		return IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);

	return false;
}

BOOL func_190() // Position - 0x127A4
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_191() // Position - 0x127BE
{
	return Global_100885.f_394 > 0;
}

BOOL func_192() // Position - 0x127CF
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98291.f_44 == 1;

	return false;
}

BOOL func_193() // Position - 0x127EB
{
	if (Global_100833 == 13 || Global_100833 == 10 || Global_100833 == 11 || Global_100833 == 12)
		return false;

	return true;
}

BOOL func_194() // Position - 0x12829
{
	if (Global_113810.f_9088)
		return func_195(0, 15) && func_195(0, 16);
	else
		return true;

	return false;
}

BOOL func_195(int iParam0, int iParam1) // Position - 0x12859
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iParam0], iParam1);
	return flag;
}

int func_196() // Position - 0x128A3
{
	if (unk_0x3555462DB47B7AB1())
		return Global_98943;

	if (func_190())
		return Global_98943;

	return 318;
}

void func_197() // Position - 0x128CA
{
	if (!bLocal_78)
	{
		iLocal_77 = unk_0xA7B0B03284E7503C({ 40.073f, 4788.5586f, 2157.109f } - { 25f, 25f, 25f }, { 40.073f, 4788.5586f, 2157.109f } + { 25f, 25f, 25f }, 0, 1, 1, 1);
		bLocal_78 = true;
	}

	return;
}

int func_198(int iParam0) // Position - 0x12923
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

void func_199() // Position - 0x1297A
{
	if (iLocal_77 != 0)
		unk_0xD7B6A43ACC36D868(iLocal_77, 0);

	func_182(true);
	func_173(true);
	func_202();
	func_200();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_200() // Position - 0x129A5
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97746[i /*17*/] && !Global_97746[i /*17*/].f_1)
			if (Global_97746[i /*17*/].f_3 == 0)
				if (Global_97746[i /*17*/].f_5 != 88 && Global_97746[i /*17*/].f_5 != 89 && Global_97746[i /*17*/].f_5 != 92)
					func_201(Global_97746[i /*17*/].f_5, true);
	}

	return;
}

void func_201(int iParam0, BOOL bParam1) // Position - 0x12A2C
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94798[iParam0 /*2*/] = 1;
	else
		Global_94798[iParam0 /*2*/] = 0;

	return;
}

void func_202() // Position - 0x12A6A
{
	int i;

	iLocal_34 = 0;
	unk_0xCF56BDC3BD787B97(joaat("WEAPON_COMBATPISTOL"));
	unk_0xCF56BDC3BD787B97(joaat("WEAPON_SMG"));
	unk_0xCF56BDC3BD787B97(joaat("WEAPON_STICKYBOMB"));
	unk_0xCF56BDC3BD787B97(joaat("WEAPON_ASSAULTSHOTGUN"));
	unk_0xCF56BDC3BD787B97(joaat("WEAPON_RPG"));

	for (i = 0; i < 5; i = i + 1)
	{
		if (unk_0xB0E14182FAD64944(uLocal_65[i]))
			unk_0xDDFB0941A19702BE(uLocal_65[i]);
	
		if (unk_0xFC8BFE4B41177C22(uLocal_59[i]))
			unk_0x51C8BEA2005931AB(&uLocal_59[i]);
	}

	return;
}

