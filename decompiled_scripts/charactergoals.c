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
	int iLocal_16 = 0;
	var uLocal_17 = 2;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	BOOL bLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
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

	if (unk_0x96CFB880BAC634CE(2))
		func_52();

	while (true)
	{
		SYSTEM::WAIT(250);
	
		switch (iLocal_16)
		{
			case 0:
				if (uLocal_17[0])
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						Global_22964[3 /*42*/].f_27[0] = func_51(2);
						func_50(2, 32, Global_22964[3 /*42*/].f_27[0]);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&Global_22964[3 /*42*/], "PA_TREV1" /*Earn one million dollars.*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_22964[3 /*42*/].f_4), "PA_TREV1" /*Earn one million dollars.*/, 16);
					Global_22964[3 /*42*/].f_8 = 0;
					Global_22964[3 /*42*/].f_9 = 1;
					TEXT_LABEL_ASSIGN_STRING(&Global_22964[3 /*42*/].f_10[1 /*4*/], "PA_TREV1A" /*Current wealth $~1~.*/, 16);
					Global_22964[3 /*42*/].f_37[1] = 0;
				
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						Global_22964[3 /*42*/].f_27[1] = func_51(2);
				
					func_43(2, 3, true, 1);
					func_40("PA_TREV1A" /*Current wealth $~1~.*/, Global_22964[3 /*42*/].f_27[1]);
					iLocal_16 = 1;
				}
				break;
		
			case 1:
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					Global_22964[3 /*42*/].f_27[1] = func_51(2);
				
					if (func_39(2, 999999))
					{
						func_38("PA_COMPLETE" /*Goal achieved ~a~*/, "PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
						Global_22964[3 /*42*/].f_37[1] = 1;
						Global_22964[3 /*42*/].f_8 = 1;
						uLocal_22 = unk_0x1DD05E817C89C737();
						iLocal_16 = 2;
					}
					else if (func_39(2, 499999))
					{
						if (!bLocal_20)
						{
							func_37("PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
							bLocal_20 = true;
						}
					}
				
					if (uLocal_17[1])
					{
						func_1(2, 32, 500000, false, false);
						uLocal_17[1] = 0;
					}
				}
				break;
		
			case 2:
				iLocal_21 = unk_0x1DD05E817C89C737();
			
				if (iLocal_21 - uLocal_22 < 5000)
					func_40("PA_TREV1A" /*Current wealth $~1~.*/, Global_22964[3 /*42*/].f_27[1]);
				break;
		}
	}

	return;
}

void func_1(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D5
{
	int num;
	int num2;

	if (func_36(iParam0) == 3)
		return;

	if (func_36(iParam0) == 4)
		return;

	func_2(func_36(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		num = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					num2 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 1:
					num2 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 2:
					num2 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					num2 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 1:
					num2 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 2:
					num2 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		unk_0xDF7F16323520B858(num2, &num, -1);
		num = num + iParam2;
		unk_0x1164A75E490C27B6(num2, num, 1);
	}

	return;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_35();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_34(99, 1);
					func_33(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_33(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_33(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_17(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_14(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_14(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (unk_0x931D15B1D60C81B0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_14(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_13(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
			
				case 1:
					func_34(97, iParam3);
					break;
			
				case 2:
					func_34(96, iParam3);
					break;
			}
		
			func_34(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_5(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_5(num2);
	}

	num6 = Global_60659[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_60659[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_60659[num3] = 2147483647;
				else
					Global_60659[num3] = Global_60659[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_33(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_33(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_33(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_60659[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_60659[num3];
			Global_60659[num3] = Global_60659[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_113810.f_20567.f_233[num3 /*69*/].f_2[Global_113810.f_20567.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[num3 /*69*/].f_2[Global_113810.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[num3 /*69*/].f_2[Global_113810.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[num3 /*69*/] = Global_113810.f_20567.f_233[num3 /*69*/] + 1;
		Global_113810.f_20567.f_233[num3 /*69*/].f_1 = Global_113810.f_20567.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_113810.f_20567.f_233[num3 /*69*/].f_1 > 10)
			Global_113810.f_20567.f_233[num3 /*69*/].f_1 = 0;
	}

	func_4(iParam0);

	if (Global_43377 == 15)
		func_3(false);

	return 1;
}

void func_3(BOOL bParam0) // Position - 0x8A6
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/];
			Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_60667[i /*3*/][0] = Global_113810.f_20567[i];
		Global_60667.f_31[i /*3*/][0] = Global_113810.f_20567.f_11[i];
		Global_60667.f_62[i /*3*/][0] = Global_113810.f_20567.f_22[i];
		Global_60667.f_93[i /*3*/][0] = Global_113810.f_20567.f_33[i];
		Global_60667.f_124[i /*3*/][0] = Global_113810.f_20567.f_44[i];
		Global_60667.f_155[i /*3*/][0] = Global_113810.f_20567.f_55[i];
		Global_60667.f_186[i /*3*/][0] = Global_113810.f_20567.f_66[i];
		Global_60667.f_217[i /*3*/][0] = Global_113810.f_20567.f_77[i];
		Global_60667.f_248[i /*3*/][0] = Global_113810.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_60667[i /*3*/][1] = Global_113810.f_20567[i];
			Global_60667.f_31[i /*3*/][1] = Global_113810.f_20567.f_11[i];
			Global_60667.f_62[i /*3*/][1] = Global_113810.f_20567.f_22[i];
			Global_60667.f_93[i /*3*/][1] = Global_113810.f_20567.f_33[i];
			Global_60667.f_124[i /*3*/][1] = Global_113810.f_20567.f_44[i];
			Global_60667.f_155[i /*3*/][1] = Global_113810.f_20567.f_55[i];
			Global_60667.f_186[i /*3*/][1] = Global_113810.f_20567.f_66[i];
			Global_60667.f_217[i /*3*/][1] = Global_113810.f_20567.f_77[i];
			Global_60667.f_248[i /*3*/][1] = Global_113810.f_20567.f_88[i];
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0xB28
{
	int num;

	num = Global_60659[iParam0];

	switch (iParam0)
	{
		case 0:
			unk_0x1164A75E490C27B6(joaat("SP0_TOTAL_CASH"), num, 1);
			break;
	
		case 1:
			unk_0x1164A75E490C27B6(joaat("SP1_TOTAL_CASH"), num, 1);
			break;
	
		case 2:
			unk_0x1164A75E490C27B6(joaat("SP2_TOTAL_CASH"), num, 1);
			break;
	}

	return;
}

void func_5(int iParam0) // Position - 0xB82
{
	BOOL flag;
	var unk;

	if (iParam0 == 8)
	{
		func_12(129, 0, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_12(135, 0, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_12(136, 0, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_12(137, 0, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_8(8272, 0, -1, 1);
		return;
	}

	if (iParam0 == 13)
	{
		func_8(8273, 0, -1, 1);
		return;
	}

	if (iParam0 == 14)
	{
		func_8(8274, 0, -1, 1);
		return;
	}

	if (iParam0 == 15)
	{
		func_8(8275, 0, -1, 1);
		return;
	}

	if (iParam0 == 16)
	{
		func_8(8276, 0, -1, 1);
		return;
	}

	if (iParam0 == 17)
	{
		func_8(8277, 0, -1, 1);
		return;
	}

	flag = false;

	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (IS_BIT_SET(Global_113810.f_20567.f_471, iParam0))
		{
			flag = true;
			unk_0x8744D2E3FC95740E(&(Global_113810.f_20567.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_113810.f_20567.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_7() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		unk_0x8744D2E3FC95740E(&(Global_113810.f_20567.f_471), iParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_7() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		unk_0xACF853FB3F6EA7D4(func_6(iParam0));
		unk_0x5C7E2225D7451992(&unk, &unk, 1, 0, "", 0);
	}

	return;
}

char* func_6(int iParam0) // Position - 0xCF9
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*one free haircut.*/;
	
		case 1:
			return "COUP_TATTOO" /*one free tattoo.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
	
		case 6:
			return "COUP_SPRUNK" /*one free can of Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*one free respray.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
	
		default:
			break;
	}

	return "";
}

int func_7() // Position - 0xDED
{
	int num;

	num = 0;
	return num;
}

void func_8(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xDFA
{
	int num;

	num = func_9(iParam0, iParam2);

	if (num != 0)
		unk_0x1164A75E490C27B6(num, iParam1, iParam3);

	return;
}

int func_9(int iParam0, int iParam1) // Position - 0xE1D
{
	return unk_0xD69CE161FE614531(0, iParam0, func_10(iParam1));
}

int func_10(int iParam0) // Position - 0xE32
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_11();
	
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

int func_11() // Position - 0xE66
{
	return Global_1574918;
}

void func_12(int iParam0, int iParam1, int iParam2) // Position - 0xE72
{
	if (iParam2 == -1)
		iParam2 = func_11();

	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
	return;
}

void func_13(int iParam0) // Position - 0xE90
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
	return;
}

BOOL func_14(int iParam0) // Position - 0xEB0
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;

	if (iParam0 == 8)
		return func_16(129, -1);

	if (iParam0 == 9)
		return func_16(135, -1);

	if (iParam0 == 10)
		return func_16(136, -1);

	if (iParam0 == 11)
		return func_16(137, -1);

	if (iParam0 == 12)
	{
		num = unk_0x39D1D336459711BE();
		num2 = func_15(8272, -1);
	
		if (num2 == 0 || num >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		num3 = unk_0x39D1D336459711BE();
		num4 = func_15(8273, -1);
	
		if (num4 == 0 || num3 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		num5 = unk_0x39D1D336459711BE();
		num6 = func_15(8274, -1);
	
		if (num6 == 0 || num5 >= num6)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		num7 = unk_0x39D1D336459711BE();
		num8 = func_15(8275, -1);
	
		if (num8 == 0 || num7 >= num8)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		num9 = unk_0x39D1D336459711BE();
		num10 = func_15(8276, -1);
	
		if (num10 == 0 || num9 >= num10)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		num11 = unk_0x39D1D336459711BE();
		num12 = func_15(8277, -1);
	
		if (num12 == 0 || num11 >= num12)
			return false;
	
		return true;
	}

	if (!unk_0x76CD105BCAC6EB9F())
		return IS_BIT_SET(Global_113810.f_20567.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_7() /*5568*/].f_681.f_10, iParam0);
}

int func_15(int iParam0, int iParam1) // Position - 0x1050
{
	var unk;
	int num;

	if (iParam0 != 14385)
	{
		unk = func_9(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x107F
{
	if (iParam1 == -1)
		iParam1 = func_11();

	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_17(BOOL bParam0) // Position - 0x109B
{
	var unk;
	int num;
	int num2;

	num = 0;

	if (unk_0x37088D2C63AC4C01(27))
		return 0;

	if (unk_0xDF7F16323520B858(joaat("SP0_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	if (unk_0xDF7F16323520B858(joaat("SP1_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	if (unk_0xDF7F16323520B858(joaat("SP2_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	bParam0;
	num2 = 0;
	unk_0xDF7F16323520B858(joaat("NUM_CASH_SPENT"), &num2, -1);

	if (num > 0 && num2 / 2000000 != num / 2000000)
	{
		unk_0x1164A75E490C27B6(joaat("NUM_CASH_SPENT"), num, 1);
		func_32(27, num);
	}

	if (num < 200000000)
		return 0;

	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1) // Position - 0x1152
{
	if (iParam0 >= 78)
		return 0;

	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1) // Position - 0x116D
{
	if (func_31(14) && !func_30(iParam0))
		return 0;

	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32534 != 0 && !Global_78689)
		return 0;

	if (func_29(&Global_4542602))
	{
		if (func_27(&Global_4542602, iParam0))
			return 0;
	
		if (func_20(&Global_4542602, iParam0))
			return 1;
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
			return 0;
	
		if (unk_0x37088D2C63AC4C01(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_20(var uParam0, int iParam1) // Position - 0x120A
{
	int i;
	var unk;

	unk = 78;

	if (unk_0x37088D2C63AC4C01(iParam1))
		return false;

	if (func_31(14) && !func_30(iParam1))
		return false;

	if (func_27(uParam0, iParam1))
		return false;

	if (func_26(uParam0) < 0f)
		func_25(uParam0, 0);

	func_23(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_21(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_21(var uParam0, int iParam1) // Position - 0x12BB
{
	int i;

	if (unk_0x37088D2C63AC4C01(iParam1))
		return 0;

	if (func_31(14) && !func_30(iParam1))
		return 0;

	if (func_27(uParam0, iParam1))
		return 0;

	if (func_26(uParam0) < 0f)
		func_25(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_22(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_22(var uParam0, int iParam1) // Position - 0x1336
{
	return uParam0->[iParam1] == 78;
}

void func_23(var uParam0) // Position - 0x1347
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_24(uParam0, i);
	}

	func_25(uParam0, Global_4542601 - 0.5f);
	return;
}

void func_24(var uParam0, int iParam1) // Position - 0x137B
{
	uParam0->[iParam1] = 78;
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x138B
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_26(var uParam0) // Position - 0x13A8
{
	return uParam0->f_80;
}

BOOL func_27(var uParam0, int iParam1) // Position - 0x13B4
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1) // Position - 0x13C6
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_29(var uParam0) // Position - 0x13F3
{
	return uParam0->f_79 == 1;
}

BOOL func_30(int iParam0) // Position - 0x1401
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

BOOL func_31(int iParam0) // Position - 0x1451
{
	return Global_43377 == iParam0;
}

int func_32(int iParam0, int iParam1) // Position - 0x145F
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

void func_33(int iParam0, int iParam1) // Position - 0x14B0
{
	int num;

	unk_0xDF7F16323520B858(iParam0, &num, -1);
	num = num + iParam1;
	unk_0x1164A75E490C27B6(iParam0, num, 1);
	return;
}

void func_34(int iParam0, int iParam1) // Position - 0x14D3
{
	int num;

	if (iParam1 < 1)
		return;

	if (Global_59227[iParam0 /*7*/].f_2)
		return;

	if (unk_0x76CD105BCAC6EB9F())
		return;

	if (Global_59227[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59227[iParam0 /*7*/].f_1, &num, -1);
		num = num + iParam1;
		unk_0x1164A75E490C27B6(Global_59227[iParam0 /*7*/].f_1, num, 1);
	}

	return;
}

void func_35() // Position - 0x1530
{
	int unk;

	if (unk_0x5F9F81C08516558E())
	{
		unk_0xDF7F16323520B858(joaat("SP0_TOTAL_CASH"), &unk, -1);
	
		if (!(Global_60659[0] == unk))
			Global_60659[0] = unk;
	
		unk_0xDF7F16323520B858(joaat("SP1_TOTAL_CASH"), &unk, -1);
	
		if (!(Global_60659[1] == unk))
			Global_60659[1] = unk;
	
		unk_0xDF7F16323520B858(joaat("SP2_TOTAL_CASH"), &unk, -1);
	
		if (!(Global_60659[2] == unk))
			Global_60659[2] = unk;
	}

	return;
}

int func_36(int iParam0) // Position - 0x15A5
{
	return Global_2058[iParam0 /*29*/].f_17;
}

void func_37(char* sParam0, int iParam1, int iParam2) // Position - 0x15B6
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 0);
	return;
}

void func_38(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x15CF
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x0A3136AD174470CC(iParam2, 0);
	return;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x15EE
{
	if (func_51(iParam0) > iParam1)
		return true;

	return false;
}

void func_40(char* sParam0, int iParam1) // Position - 0x1609
{
	unk_0x81645EE95A114FAE(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, 0);
	func_42(255, 255, 255, 255);
	func_41(0.81f, 0.8f, sParam0, iParam1, 0);
	return;
}

void func_41(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x164C
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam4);
	return;
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x166A
{
	unk_0xBFE94E91C83D8794(0.3f, 0.3f);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(1, 0, 0, 0, 205);
	unk_0xEA62FB8CA7210CF3(1);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0x5A18938160AE52D0(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_43(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16A9
{
	if (func_49())
		return 0;

	if (func_44(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_44(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16D4
{
	if (unk_0x486FF5D06E9659F1(joaat("appsidetask")) > 0)
		return 0;

	if (func_47() == 0)
	{
		func_46();
		return 0;
	}

	func_45(Global_22963);
	Global_23133[Global_22963 /*9*/].f_1 = iParam1;
	Global_23133[Global_22963 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23133[Global_22963 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_45(int iParam0) // Position - 0x1738
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	int num;
	var unk5;

	unk = unk_0x4BA5A16068183C5E();
	unk2 = unk_0x18E502A71E28968C();
	unk3 = unk_0x5295501D0862870D();
	unk4 = unk_0xB12880C92EA6EE15();
	num = unk_0x8825A6E0A30BDCB8() + 1;
	unk5 = unk_0x7598FE4545010A75();
	Global_23133[iParam0 /*9*/].f_2 = unk;
	Global_23133[iParam0 /*9*/].f_2.f_1 = unk2;
	Global_23133[iParam0 /*9*/].f_2.f_2 = unk3;
	Global_23133[iParam0 /*9*/].f_2.f_3 = unk4;
	Global_23133[iParam0 /*9*/].f_2.f_4 = num;
	Global_23133[iParam0 /*9*/].f_2.f_5 = unk5;
	return;
}

void func_46() // Position - 0x17B2
{
	return;
}

int func_47() // Position - 0x17BA
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_23133[i /*9*/].f_8 == 0)
		{
			Global_22963 = i;
			return 1;
		}
	}

	i = 0;
	Global_22963 = 3;
	Global_23133[Global_22963 /*9*/].f_2 = -1;
	Global_23133[Global_22963 /*9*/].f_2.f_1 = 0;
	Global_23133[Global_22963 /*9*/].f_2.f_2 = 0;
	Global_23133[Global_22963 /*9*/].f_2.f_3 = 0;
	Global_23133[Global_22963 /*9*/].f_2.f_5 = 99999;

	while (i < 2)
	{
		if (Global_23133[i /*9*/].f_8 == 0 || Global_23133[i /*9*/].f_8 == 1)
			if (!func_48(Global_23133[i /*9*/].f_2, Global_23133[Global_22963 /*9*/].f_2))
				Global_22963 = i;
	
		i = i + 1;
	}

	if (Global_22963 == 3)
		return 0;

	return 1;
}

BOOL func_48(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x1894
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

BOOL func_49() // Position - 0x197F
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

int func_50(int iParam0, int iParam1, int iParam2) // Position - 0x19A6
{
	if (func_36(iParam0) == 3)
		return 0;

	if (func_36(iParam0) == 4)
		return 0;

	return func_2(func_36(iParam0), 0, iParam1, iParam2, false);
}

int func_51(int iParam0) // Position - 0x19DA
{
	int num;

	switch (iParam0)
	{
		case 0:
			unk_0xDF7F16323520B858(joaat("SP0_TOTAL_CASH"), &num, -1);
			return num;
	
		case 1:
			unk_0xDF7F16323520B858(joaat("SP1_TOTAL_CASH"), &num, -1);
			return num;
	
		case 2:
			unk_0xDF7F16323520B858(joaat("SP2_TOTAL_CASH"), &num, -1);
			return num;
	
		default:
		
	}

	return 0;
}

void func_52() // Position - 0x1A32
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

