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
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	func_96();

	while (true)
	{
		func_95();
	
		if (func_90())
			func_89();
	
		if (Global_2794162.f_5231.f_755 == 0)
			func_89();
	
		switch (iLocal_33)
		{
			case 0:
				iLocal_33 = 1;
				break;
		
			case 1:
				if (func_12())
					iLocal_33 = 2;
				break;
		
			case 2:
				if (!func_1())
					iLocal_33 = 4;
				break;
		
			case 4:
				func_89();
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0xD3
{
	int num;

	if (func_7(true))
	{
		num = Global_2794162.f_5231.f_754;
	
		if (num != func_6())
		{
			if (func_4(num))
			{
				func_2(num);
				return false;
			}
		}
		else
		{
			func_2(num);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(int iParam0) // Position - 0x120
{
	if (iParam0 != func_6())
		func_3(iParam0);

	Global_2794162.f_5231.f_754 = func_6();
	return;
}

void func_3(int iParam0) // Position - 0x145
{
	int num;

	num = iParam0;
	unk_0x8744D2E3FC95740E(&(Global_2646835.f_388), num);
	unk_0x8744D2E3FC95740E(&(Global_2646835.f_389), num);
	unk_0x8744D2E3FC95740E(&(Global_2646835.f_390), num);
	unk_0x8744D2E3FC95740E(&(Global_2646835.f_392), num);
	unk_0x8744D2E3FC95740E(&(Global_2646835.f_396), num);
	unk_0x8744D2E3FC95740E(&(Global_2646835.f_391), num);
	return;
}

BOOL func_4(int iParam0) // Position - 0x19F
{
	if (!func_5(iParam0, false, true))
		return true;

	return false;
}

BOOL func_5(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B8
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

int func_6() // Position - 0x218
{
	return -1;
}

BOOL func_7(BOOL bParam0) // Position - 0x221
{
	return func_8(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_8(int iParam0, BOOL bParam1) // Position - 0x233
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, BOOL bParam1, int iParam2) // Position - 0x244
{
	int num;

	if (!func_11(iParam0))
		return 0;

	if (!bParam1)
		if (func_10(iParam0, iParam2))
			return 0;

	num = Global_1895156[iParam0 /*609*/].f_10;

	if (num != func_6() && Global_1895156[num /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x2A1
{
	if (func_11(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10 != func_6())
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

BOOL func_11(int iParam0) // Position - 0x2F0
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_12() // Position - 0x312
{
	int num;

	if (func_7(true))
	{
		num = Global_2794162.f_5231.f_754;
	
		if (num != func_6())
			if (func_13(num))
				return true;
	}

	return false;
}

BOOL func_13(int iParam0) // Position - 0x345
{
	if (func_5(iParam0, false, true))
	{
		func_87(iParam0, 432, true, false);
	
		if (func_86(iParam0))
			func_83(iParam0, func_84(func_85(unk_0x259BE71D8A81D4FA())), true, false);
	
		if (func_81(iParam0))
			func_79(iParam0, true, true, false);
	
		func_73(iParam0, true, false);
		func_14(iParam0, true, 5000);
		return true;
	}

	return false;
}

void func_14(int iParam0, BOOL bParam1, int iParam2) // Position - 0x3A9
{
	int num;

	if (iParam0 == func_6())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	num = iParam0;

	if (bParam1)
	{
		if (iParam0 == Global_2672524)
		{
		}
		else if (unk_0xC450B06E5AAA0985(Global_2646835[num]))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2646835.f_370), num);
			unk_0x8744D2E3FC95740E(&(Global_2646835.f_375), num);
			unk_0x861AC9C2D48CEA7F(Global_2646835[num], 1);
			unk_0xB562F84CE9B07D89(Global_2646835[num], 250);
			func_15(iParam0);
		
			if (iParam2 < 0)
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2646835.f_375), num);
			else
				Global_2646835.f_201[num] = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam2);
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2646835.f_370), num);
			unk_0x8744D2E3FC95740E(&(Global_2646835.f_375), num);
		
			if (iParam2 < 0)
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2646835.f_375), num);
			else
				Global_2646835.f_201[num] = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam2);
		}
	}

	if (!bParam1)
	{
		unk_0x8744D2E3FC95740E(&(Global_2646835.f_370), num);
		unk_0x8744D2E3FC95740E(&(Global_2646835.f_375), num);
	
		if (unk_0xC450B06E5AAA0985(Global_2646835[num]))
		{
			func_15(iParam0);
			unk_0x861AC9C2D48CEA7F(Global_2646835[num], 0);
		}
	}

	return;
}

void func_15(int iParam0) // Position - 0x4DE
{
	int num;

	num = iParam0;

	if (func_5(iParam0, false, true))
	{
		if (unk_0xC450B06E5AAA0985(Global_2646835[num]))
		{
			Global_2646835.f_1504[num] = func_16(iParam0);
			unk_0x1456FD5C0C438B19(Global_2646835[num], Global_2646835.f_1504[num]);
		}
	}

	return;
}

int func_16(int iParam0) // Position - 0x52C
{
	int num;
	int num2;

	num = iParam0;

	if (func_5(iParam0, false, true))
	{
		if (unk_0xC450B06E5AAA0985(Global_2646835[num]))
		{
			num2 = unk_0x8FACE824AEC046E8(Global_2646835[num]);
		
			if (IS_BIT_SET(Global_2646835.f_386, num) || IS_BIT_SET(Global_2646835.f_385, num))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2646835.f_371, num) || IS_BIT_SET(Global_2646835.f_370, num) || IS_BIT_SET(Global_2646835.f_388, num))
			{
				return func_70(10);
			}
			else
			{
				switch (num2)
				{
					case 253:
					case 252:
					case 255:
						return func_70(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_70(11);
				
					case 254:
						if (unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(Global_2672524))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case 271:
						if (unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(Global_2672524))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case 163:
					case 164:
						if (func_69(Global_2672524, iParam0, -2, 0))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case 303:
					case 418:
						return func_70(10);
				
					case 364:
						if (func_21(Global_2672524, iParam0, true))
							return func_70(10);
						else
							return func_70(5);
						break;
				
					case 478:
					case 501:
					case 523:
					case 556:
						return func_70(10);
				
					case 417:
						if (func_20(iParam0) || func_19(iParam0) || func_17(iParam0))
							if (func_21(Global_2672524, iParam0, true))
								return 3;
							else
								return 4;
						else if (func_21(Global_2672524, iParam0, true))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case 256:
					case 268:
					default:
						if (func_21(Global_2672524, iParam0, true))
							return func_70(6);
						else
							return func_70(5);
						break;
				}
			}
		}
	}

	return 1;
}

BOOL func_17(int iParam0) // Position - 0x797
{
	if (iParam0 != func_6())
		if (func_5(iParam0, true, true))
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
				return func_18(Global_2657704[iParam0 /*463*/].f_321.f_7) == 16;

	return false;
}

int func_18(int iParam0) // Position - 0x7DE
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
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
			return 1;
	
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
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

BOOL func_19(int iParam0) // Position - 0xC92
{
	if (iParam0 != func_6())
		if (func_5(iParam0, true, true))
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
				return func_18(Global_2657704[iParam0 /*463*/].f_321.f_7) == 15;

	return false;
}

BOOL func_20(int iParam0) // Position - 0xCD9
{
	if (iParam0 != func_6())
		if (func_5(iParam0, true, true))
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
				return func_18(Global_2657704[iParam0 /*463*/].f_321.f_7) == 14;

	return false;
}

BOOL func_21(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD20
{
	if (func_24(iParam0, -2, false, false, false) == func_24(iParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_22(func_24(iParam0, -2, false, false, false)) && func_22(func_24(iParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_22(int iParam0) // Position - 0xD79
{
	if (iParam0 == func_23(true) || iParam0 == func_23(false))
		return 1;

	return 0;
}

int func_23(BOOL bParam0) // Position - 0xD9F
{
	if (bParam0)
		return 118;

	return 116;
}

int func_24(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDB6
{
	int num;
	var unk;

	if (!func_11(iParam0))
		return 1;

	if (func_67(iParam0) && !bParam4)
		if (bParam2)
			return 0;
		else
			return 1;

	if (iParam1 == -2)
	{
		num = unk_0x1864096A95E36EBA(iParam0);
	
		if (num > -1 && num < 4)
			if (Global_4718592.f_112316[num] != -1)
				iParam1 = num;
	}

	if (func_67(unk_0x259BE71D8A81D4FA()) || func_66() && func_65() && !IS_BIT_SET(Global_2794162.f_4697, 31) && !bParam4)
	{
		unk = func_64();
	
		if (unk_0xFC8BFE4B41177C22(unk))
			if (unk_0x501EBB0523078750(unk))
				if (unk_0x1C1C92A1CBAE364B(unk) != -1)
					if (func_5(unk_0x1C1C92A1CBAE364B(unk), false, true))
						if (iParam1 > -1 && unk_0x834C960822A4683F() && iParam1 < 4)
							if (Global_4718592.f_112316[iParam1] != -1)
								return func_62(iParam1, iParam0, false);
							else
								return func_41(iParam0, unk_0x1C1C92A1CBAE364B(unk), iParam1, bParam2, bParam3);
						else
							return func_41(iParam0, unk_0x1C1C92A1CBAE364B(unk), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && unk_0x834C960822A4683F() && iParam1 < 4)
				if (Global_4718592.f_112316[iParam1] != -1)
					return func_62(iParam1, iParam0, false);
				else
					return func_25(false, -1, false);
			else
				return func_25(false, -1, false);
	}

	if (iParam1 > -1 && unk_0x834C960822A4683F() && iParam1 < 4)
		if (Global_4718592.f_112316[iParam1] != -1)
			return func_62(iParam1, iParam0, false);
		else
			return func_41(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);

	return func_41(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_25(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xFA1
{
	return func_26(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_26(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xFB7
{
	int num;

	if (!unk_0x762604C40829DB72(iParam0))
		return 3;

	num = unk_0x1864096A95E36EBA(iParam0);

	if (func_40() || func_39() && func_37() && Global_1665516.f_1)
		if (bParam1)
			return func_36(iParam2, num);
		else
			return func_36(num, num);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_30(num, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_15, 18))
				if (num == iParam2)
					return func_23(true);
				else
					return func_23(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_27(num, iParam2, true, 4);
			else
				return func_27(num, iParam2, false, 4);
	
		return 28;
	}

	if (num == iParam2 || iParam2 == -1)
		return func_23(true);

	return func_23(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_27(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x10B9
{
	int num;

	num = func_29(iParam0, iParam1, iParam3);

	if (func_28(*Global_4718592.f_117591, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x113;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_28(int iParam0, BOOL bParam1) // Position - 0x11D1
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_171044 == 65)
			return true;

	if (iParam0 == 0)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (iParam0 == Global_262145.f_9658[i])
			return true;
	}

	return false;
}

int func_29(int iParam0, int iParam1, int iParam2) // Position - 0x1222
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!(iParam0 == i))
			if (!func_30(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x126A
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058071.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, num))
			{
				num2 = Global_1058071.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_31(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x15B5
{
	BOOL num;
	int num2;
	var unk;
	int num3;
	int num4;
	int i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, iParam3))
		return false;

	num = 1;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		num4 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		num2 = i;
	
		if (!func_5(num2, true, true) || func_33(num2, 0) || IS_BIT_SET(Global_2657704[num2 /*463*/].f_199, 2) || func_32(num2))
		{
		}
		else if (unk_0x1864096A95E36EBA(num2) != iParam2)
		{
		}
		else
		{
			unk = unk_0x56E414973C2A8C0E(num2);
		
			if (unk_0x4FAFF4BCB7633475(unk))
			{
			}
			else
			{
				num3 = unk_0x4B423FAA24E8ABF0(unk);
			
				if (num4 == joaat("MP_F_Freemode_01") || num4 == joaat("MP_M_Freemode_01"))
					if (num3 == joaat("MP_F_Freemode_01") || num3 == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (num4 != num3)
					return false;
			}
		}
	}

	return num;
}

BOOL func_32(int iParam0) // Position - 0x16E1
{
	return IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x16F9
{
	BOOL flag;

	if (!func_11(iParam0))
		return false;

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_34(-1, false) == 8;
	else
		flag = Global_1853988[iParam0 /*867*/].f_205 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(iParam0))
			flag = unk_0x1864096A95E36EBA(iParam0) == 8;

	return flag;
}

int func_34(int iParam0, BOOL bParam1) // Position - 0x1752
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_35();

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

int func_35() // Position - 0x1793
{
	return Global_1574918;
}

int func_36(int iParam0, int iParam1) // Position - 0x179F
{
	if (iParam0 == -1)
		iParam0 = func_29(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_37() // Position - 0x17ED
{
	if (func_38())
		return true;

	return IS_BIT_SET(*Global_4718592.f_175236, 4);
}

BOOL func_38() // Position - 0x180C
{
	return IS_BIT_SET(*Global_4718592.f_164769, 12);
}

BOOL func_39() // Position - 0x1821
{
	if (unk_0x834C960822A4683F())
		return IS_BIT_SET(*Global_4718592.f_175236, 0);

	return IS_BIT_SET(*Global_4718592.f_175236, 0) || Global_1927347 && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_40() // Position - 0x1868
{
	if (func_38() && unk_0x834C960822A4683F())
		return true;

	return false;
}

int func_41(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1885
{
	int num;
	BOOL flag;
	int num2;
	int num3;
	int num4;

	if (iParam2 == -2)
		num = unk_0x1864096A95E36EBA(iParam0);
	else
		num = iParam2;

	if (Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/] == 148)
		flag = true;

	num2 = iParam0;

	if (num2 > -1)
		if (Global_1853988[num2 /*867*/] == 148)
			flag = true;

	if (!flag)
	{
		if (num != -1)
		{
			if (func_49())
			{
				num3 = func_45(iParam0);
			
				if (!(num3 == -1))
					return func_43(num3);
			}
		
			if (func_69(iParam1, iParam0, num, 0) && !IS_BIT_SET(Global_4718592.f_15, 18) || func_30(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(iParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_15, 23) && !IS_BIT_SET(Global_4718592.f_15, 18))
				return func_23(true);
			else if (IS_BIT_SET(Global_4718592.f_15, 26))
				return func_42(true);
			else
				return func_26(iParam1, true, num, bParam4);
		}
		else if (Global_1836600 || Global_1836590 || Global_1853988[iParam0 /*867*/] == 0)
		{
			if (iParam0 == iParam1 || Global_1836600 == 1 && Global_1836610 == 0)
				return func_23(true);
			else
				return func_26(iParam1, true, num, bParam4);
		}
	
		if (Global_1836594 && Global_1836080.f_14 == iParam0)
			return 28;
	}

	num4 = func_45(iParam0);

	if (!(num4 == -1))
		return func_43(num4);

	if (bParam3)
		return 0;

	return 1;
}

int func_42(BOOL bParam0) // Position - 0x1A1D
{
	if (bParam0)
		return 119;

	return 116;
}

int func_43(int iParam0) // Position - 0x1A34
{
	int num;

	if (iParam0 > -1)
	{
		num = func_44(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_44(int iParam0) // Position - 0x1AF7
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_45(int iParam0) // Position - 0x1B0E
{
	if (func_11(iParam0))
		if (func_47(iParam0, true))
			return Global_2648711.f_818.f_11[func_46(iParam0)];

	return -1;
}

int func_46(int iParam0) // Position - 0x1B3E
{
	if (func_11(iParam0))
		return Global_1895156[iParam0 /*609*/].f_10;

	return func_6();
}

BOOL func_47(int iParam0, BOOL bParam1) // Position - 0x1B61
{
	if (!func_11(iParam0))
		return false;

	if (!bParam1)
		if (func_48(iParam0))
			return false;

	return Global_1895156[iParam0 /*609*/].f_10 != func_6();
}

BOOL func_48(int iParam0) // Position - 0x1B9A
{
	if (func_11(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10 != func_6())
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;

	return false;
}

BOOL func_49() // Position - 0x1BCF
{
	if (func_61() || func_60() || func_59() || func_58() || func_57() || func_55() || func_53() || func_50())
		return true;

	if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_36, 1))
		return true;

	return false;
}

BOOL func_50() // Position - 0x1C41
{
	return func_51(*Global_4718592.f_117591);
}

BOOL func_51(int iParam0) // Position - 0x1C57
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_52(i))
			return 1;
	}

	return 0;
}

int func_52(int iParam0) // Position - 0x1C81
{
	if (iParam0 != -1)
		return Global_262145.f_33923[iParam0];

	return -1;
}

BOOL func_53() // Position - 0x1CA0
{
	return func_54(*Global_4718592.f_117591);
}

BOOL func_54(var uParam0) // Position - 0x1CB6
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_31922[i] == uParam0)
			return 1;
	}

	return 0;
}

BOOL func_55() // Position - 0x1CE5
{
	return func_56(*Global_4718592.f_117591);
}

BOOL func_56(int iParam0) // Position - 0x1CFB
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31258[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_57() // Position - 0x1D35
{
	return Global_2683883.f_24;
}

BOOL func_58() // Position - 0x1D43
{
	return Global_2683883.f_21;
}

BOOL func_59() // Position - 0x1D51
{
	return Global_2683883.f_19;
}

var func_60() // Position - 0x1D5F
{
	return Global_2683883.f_18;
}

var func_61() // Position - 0x1D6D
{
	return Global_2683883.f_17;
}

int func_62(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1D7B
{
	int num;
	int num2;
	int num3;

	num2 = Global_1058071.f_14[iParam0];

	if (func_49())
	{
		num3 = func_45(iParam1);
	
		if (!(num3 == -1))
			return func_43(num3);
	}

	if (num2 > -1 && num2 < 17)
		if (IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[num2], 24))
			return 18;

	if (iParam0 > -1 && iParam1 != func_6())
	{
		if (Global_4718592.f_112316[iParam0] != -1 && Global_4718592.f_112316[iParam0] <= 4)
			if (Global_4718592.f_112316[iParam0] == 0)
				num = 15;
			else if (Global_4718592.f_112316[iParam0] == 1)
				num = 18;
			else if (Global_4718592.f_112316[iParam0] == 2)
				num = 24;
			else if (Global_4718592.f_112316[iParam0] == 4)
				if (IS_BIT_SET(Global_4718592.f_15, 29))
					num = 21;
				else
					num = 6;
			else
				num = Global_4718592.f_112316[iParam0];
		else
			num = func_26(iParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_21, 13))
			num = func_63(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_24, 29))
			num = 0;
	
		if (IS_BIT_SET(Global_4718592.f_15, 26) && !func_30(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
			num = func_42(true);
	}
	else
	{
		num = 1;
	}

	return num;
}

int func_63(int iParam0) // Position - 0x1EFB
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_171203;
			break;
	
		case 1:
			num = *Global_4718592.f_171204;
			break;
	
		case 2:
			num = *Global_4718592.f_171205;
			break;
	
		case 3:
			num = *Global_4718592.f_171206;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

var func_64() // Position - 0x1FD0
{
	return Global_2621446.f_2;
}

BOOL func_65() // Position - 0x1FDE
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_66() // Position - 0x1FEC
{
	return IS_BIT_SET(Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_36.f_18, 14);
}

BOOL func_67(int iParam0) // Position - 0x2006
{
	if (func_33(iParam0, 0))
		return true;

	if (func_68())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_68() // Position - 0x2045
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_69(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2053
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
				return false;
	
		return unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && iParam2 == -1)
				return false;
	
		return unk_0x1864096A95E36EBA(iParam0) == iParam2;
	}

	return unk_0x1864096A95E36EBA(iParam0) == iParam2;
}

int func_70(int iParam0) // Position - 0x20CB
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_72())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_71(iParam0);
}

int func_71(int iParam0) // Position - 0x2105
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

BOOL func_72() // Position - 0x2190
{
	int num;

	num = unk_0x1864096A95E36EBA(Global_2672524);

	if (num > -1 && num < 4)
		return IS_BIT_SET(Global_4718592.f_1816[num /*24279*/].f_13040, 4);

	return false;
}

void func_73(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21C7
{
	var unk;

	if (func_75(iParam0))
		return;

	func_74(&Global_2646835.f_723[iParam0], &Global_2646835.f_1086[iParam0], &(Global_2646835.f_393), bParam1, iParam0, bParam2, &unk);
	return;
}

BOOL func_74(var uParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5, var uParam6) // Position - 0x2205
{
	if (bParam5)
	{
		if (!unk_0xF40767E41852FB72(*uParam1) || *uParam1 == unk_0x8F76B2250AC806FA())
		{
			*uParam1 = unk_0x8F76B2250AC806FA();
			*uParam0 = unk_0x8F76B2250AC806FA();
		}
	}

	if (!unk_0xF40767E41852FB72(*uParam0) || *uParam0 == unk_0x8F76B2250AC806FA())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x0B0C9A0F9AAEB7F0(uParam2, iParam4);
			}
		
			*uParam0 = unk_0x8F76B2250AC806FA();
		}
		else
		{
			if (IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x8744D2E3FC95740E(uParam2, iParam4);
			}
		
			if (*uParam1 == unk_0x8F76B2250AC806FA())
				*uParam1 = -1;
		
			*uParam0 = -1;
		}
	
		return true;
	}
	else if (unk_0xF40767E41852FB72(*uParam1) && !(*uParam1 == unk_0x8F76B2250AC806FA()))
	{
	}

	return false;
}

BOOL func_75(int iParam0) // Position - 0x22C4
{
	if (iParam0 == func_6())
		return true;

	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_76())
		return true;

	return false;
}

int func_76() // Position - 0x22ED
{
	switch (func_78())
	{
		case 0:
			return func_77();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_77() // Position - 0x2320
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_78() // Position - 0x2344
{
	return Global_32283;
}

void func_79(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x234F
{
	var unk;

	if (func_75(iParam0))
		return;

	if (func_74(&Global_2646835.f_822[iParam0], &Global_2646835.f_1185[iParam0], &(Global_2646835.f_367), bParam1, iParam0, bParam3, &unk))
		func_80(iParam0, bParam2);

	return;
}

void func_80(int iParam0, BOOL bParam1) // Position - 0x2397
{
	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2646835.f_368), iParam0);
	else
		unk_0x8744D2E3FC95740E(&(Global_2646835.f_368), iParam0);

	if (unk_0xC450B06E5AAA0985(Global_2646835[iParam0]))
		if (bParam1)
			unk_0x360B279488A775FC(Global_2646835[iParam0], 0);
		else
			unk_0x360B279488A775FC(Global_2646835[iParam0], 1);

	return;
}

BOOL func_81(int iParam0) // Position - 0x23F2
{
	return func_82(&Global_2646835.f_822[iParam0]);
}

BOOL func_82(var uParam0) // Position - 0x2409
{
	if (unk_0xF40767E41852FB72(*uParam0))
		if (!(*uParam0 == unk_0x8F76B2250AC806FA()))
			return 0;

	return 1;
}

void func_83(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x242C
{
	var unk;

	if (func_75(iParam0))
		return;

	if (func_74(&Global_2646835.f_624[iParam0], &Global_2646835.f_987[iParam0], &(Global_2646835.f_389), bParam2, iParam0, bParam3, &unk))
		if (bParam2)
			Global_2646835.f_459[iParam0] = iParam1;

	return;
}

int func_84(int iParam0) // Position - 0x247E
{
	int num;
	int num2;
	int num3;
	var unk;

	switch (iParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	unk_0xA306E6FD2A6558E6(iParam0, &num, &num2, &num3, &unk);
	return (num * 16777216) + (num2 * 65536) + (num3 * 256) + unk;
}

int func_85(int iParam0) // Position - 0x26E6
{
	int num;

	num = func_45(iParam0);

	if (num != -1)
		return func_43(num);

	return 1;
}

BOOL func_86(int iParam0) // Position - 0x2706
{
	return func_82(&Global_2646835.f_624[iParam0]);
}

void func_87(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x271D
{
	BOOL flag;

	if (func_75(iParam0))
		return;

	if (func_74(&Global_2646835.f_591[iParam0], &Global_2646835.f_954[iParam0], &(Global_2646835.f_388), bParam2, iParam0, bParam3, &flag))
	{
		if (bParam2)
			Global_2646835.f_426[iParam0] = iParam1;
	
		if (flag)
			func_88();
	}

	return;
}

void func_88() // Position - 0x2778
{
	Global_2646835.f_1655 = 1;
	return;
}

void func_89() // Position - 0x2788
{
	func_2(Global_2794162.f_5231.f_754);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_90() // Position - 0x27A2
{
	if (Global_1575038 == 0)
		if (!unk_0x76CD105BCAC6EB9F())
			return true;

	if (func_94())
		return true;

	if (Global_2696994)
		return true;

	if (func_93())
		return true;

	if (func_92(159))
		if (!func_91())
			return true;

	if (func_92(157))
		return true;

	if (!unk_0x261E3728EE56B3AC())
		return true;

	if (func_76() != 0)
		if (unk_0x486FF5D06E9659F1(func_76()) == 0)
			return true;

	return false;
}

BOOL func_91() // Position - 0x2826
{
	return Global_2683883.f_698;
}

BOOL func_92(int iParam0) // Position - 0x2835
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_93() // Position - 0x284C
{
	return Global_2694576;
}

BOOL func_94() // Position - 0x2858
{
	return Global_2683883.f_693;
}

void func_95() // Position - 0x2867
{
	SYSTEM::WAIT(0);
	return;
}

int func_96() // Position - 0x2874
{
	unk_0xAECC5FA98C879D67(0);
	return 1;
}

