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
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_45 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	BOOL bLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
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
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = (0.05f + 0.275f) - 0.01f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_87, "CELL_206" /*BACK*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_91, "CELL_214" /*OPTIONS*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_95, "CELL_243" /*ACCEPT JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_99, "CELL_244" /*CANCEL JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_103, "CELL_265" /*INVITATION*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_107, "CELL_300" /*CHAR_DEFAULT*/, 16);
	unk_0x51CC1333A10C4E09();
	func_99(&uLocal_114);
	iLocal_111 = 0;
	func_97();
	func_96(Global_20481, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_86(false);

	while (true)
	{
		SYSTEM::WAIT(0);
		func_85();
		func_84();
	
		if (!(Global_20500.f_1 == 9) && Global_20500.f_1 > 3)
		{
			switch (iLocal_86)
			{
				case 0:
					func_48();
					break;
			
				case 1:
					func_32();
					break;
			
				case 3:
					func_5();
					break;
			
				case 2:
					func_4();
					break;
			
				default:
					break;
			}
		
			if (Global_20500.f_1 != 8)
				if (func_3())
					func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x170
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 3 || Global_20500.f_1 == 0 || Global_20444 == 1)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x1B3
{
	Global_1890239.f_6 = 0;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_3() // Position - 0x1C6
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x1EF
{
	return;
}

void func_5() // Position - 0x1F7
{
	int num;

	Global_1890239.f_6 = 1;

	if (bLocal_113)
	{
		if (unk_0x2645430E708CBFAC(2, Global_20469))
			bLocal_113 = false;
	
		return;
	}

	if (unk_0x2645430E708CBFAC(2, 201))
	{
		iLocal_86 = 1;
		num = func_30(iLocal_111, 0);
		func_6(num);
		return;
	}

	if (unk_0x2645430E708CBFAC(2, 202))
	{
		iLocal_86 = 1;
		return;
	}

	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /*Confirm*/, "BA_APP_PASS_W" /*Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard.*/, 36, 0, false, -1, 0, 0, true, 0);
	return;
}

void func_6(int iParam0) // Position - 0x25E
{
	int num;

	num = Global_1890239.f_7[iParam0 /*8*/].f_2;

	if (Global_1890239.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_112 == num)
	{
		func_26(num, Global_1890239.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}

	Global_1890239.f_6 = 0;
	func_7(0);
	return;
}

void func_7(int iParam0) // Position - 0x2B3
{
	if (func_12())
		return;

	if (Global_20704)
		if (func_11())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8371, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_21845 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8370, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8370, 30);

	if (!func_8())
		Global_20500.f_1 = 3;

	return;
}

BOOL func_8() // Position - 0x33D
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x364
{
	if (bParam0)
	{
		if (func_10(0))
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

BOOL func_10(int iParam0) // Position - 0x3D8
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

BOOL func_11() // Position - 0x42F
{
	return IS_BIT_SET(Global_1963795, 5);
}

BOOL func_12() // Position - 0x43D
{
	return IS_BIT_SET(Global_1963795, 19);
}

void func_13(int iParam0) // Position - 0x44C
{
	int i;

	if (iParam0 != -1)
	{
		if (Global_1890239.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (IS_BIT_SET(Global_1890239.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
			
				if (Global_1890239.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1890239.f_4 = Global_1890239.f_4 - 1;
				
					if (Global_1890239.f_4 < 0)
						Global_1890239.f_4 = 0;
				
					func_18();
				}
			}
		
			unk_0x8744D2E3FC95740E(&(Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_22), Global_1890239.f_7[iParam0 /*8*/].f_2);
			unk_0xFE3A52C5B7AE3101(Global_1890239.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
	
		for (i = iParam0; i <= 8; i = i + 1)
		{
			Global_1890239.f_7[i /*8*/] = { Global_1890239.f_7[i + 1 /*8*/] };
		}
	
		Global_1890239.f_7[9 /*8*/].f_1 = 0;
		Global_1890239.f_7[9 /*8*/].f_2 = func_14();
	}

	return;
}

int func_14() // Position - 0x53E
{
	return -1;
}

void func_15(int iParam0) // Position - 0x547
{
	if (!func_16(iParam0))
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1890239.f_3), iParam0);

	return;
}

BOOL func_16(int iParam0) // Position - 0x565
{
	return IS_BIT_SET(Global_1890239.f_3, iParam0);
}

void func_17() // Position - 0x576
{
	Global_1890239 = Global_1890239 - 1;
	return;
}

void func_18() // Position - 0x588
{
	Global_22908 = Global_22908 - 1;

	if (Global_22908 < 0)
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");

	func_19();
	return;
}

void func_19() // Position - 0x5AA
{
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_96(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_96(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

void func_20(int iParam0) // Position - 0x607
{
	int i;
	int num;
	int num2;
	int j;
	int value;
	int k;
	int value2;
	int num3;
	int num4;
	int value3;

	Global_22913 = 0;
	Global_8975 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_8939[i] = 0;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_23(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8377[num /*15*/].f_11)
				{
					if (i == Global_8377[num /*15*/].f_4)
					{
						if (Global_8939[i] == 0)
						{
							Global_8903[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8371, 3))
								{
									num2 = 42;
									Global_20708 = 1;
								}
								else
								{
									num2 = 255;
									Global_20708 = 0;
								}
							
								unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8377[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8377[num /*15*/]);
								unk_0x330108B080A2132F(num2);
								unk_0xE6B753D52F4CA222();
							}
						
							if (Global_2694571)
								if (num == 14)
									func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
						
							Global_8939[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8377[num /*15*/].f_11)
				{
					if (i == Global_8377[num /*15*/].f_4)
					{
						if (Global_8939[i] == 0)
						{
							Global_8903[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113810.f_14144[j /*104*/].f_24 != 0)
										if (Global_113810.f_14144[j /*104*/].f_28 == 0)
											if (Global_113810.f_14144[j /*104*/].f_99[Global_20500] == 1)
												Global_22913 = Global_22913 + 1;
								}
							
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22913), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_78689)
								{
									value = 0;
									value = Global_4541036;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541037[k /*104*/].f_24 != 0)
											if (Global_4541037[k /*104*/].f_28 == 0)
												if (Global_4541037[k /*104*/].f_99[Global_20500] == 1)
													value = value + 1;
									}
								
									func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(value), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20500)
									{
										case 0:
											value2 = Global_44580;
											break;
									
										case 1:
											value2 = Global_44581;
											break;
									
										case 2:
											value2 = Global_44582;
											break;
									
										default:
											break;
									}
								
									func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8377[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8377[num /*15*/]);
								unk_0x330108B080A2132F(Global_8376);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8371, 6))
									num3 = 42;
								else
									num3 = 255;
							
								unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8377[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8377[num /*15*/]);
								unk_0x330108B080A2132F(num3);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8371, 3))
								{
									num4 = 42;
									Global_20708 = 1;
								}
								else
								{
									num4 = 255;
									Global_20708 = 0;
								}
							
								unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8377[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8377[num /*15*/]);
								unk_0x330108B080A2132F(num4);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 8)
							{
								unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8377[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8377[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 23 && unk_0x1B79E937E91F40C3(&Global_8377[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8371, 6))
							{
								unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8377[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8377[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8377[num /*15*/].f_10 == 57 && num == 23)
							{
								value3 = 0;
								value3 = Global_1890239.f_1;
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8377[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_8939[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0xB93
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

	if (!unk_0xD6F9DEE4765092A9(sParam7))
		func_22(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_22(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_22(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_22(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_22(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_22(char* sParam0) // Position - 0xC46
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

BOOL func_23(int iParam0) // Position - 0xC58
{
	return Global_43377 == iParam0;
}

void func_24(char* sParam0) // Position - 0xC66
{
	if (Global_22908 != 0)
	{
		!unk_0xD6F9DEE4765092A9(sParam0);
		Global_22908 = 0;
	}

	return;
}

void func_25() // Position - 0xC83
{
	Global_1890239.f_1 = Global_1890239.f_1 - 1;

	if (Global_1890239.f_1 < 0)
		Global_1890239.f_1 = 0;

	return;
}

void func_26(int iParam0, var uParam1) // Position - 0xCAA
{
	if (Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_26 == func_14())
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_26 = iParam0;
			Global_2794162.f_5231.f_226 = uParam1;
			func_27(func_28(iParam0));
		}
	}

	return;
}

void func_27(int iParam0) // Position - 0xCFA
{
	int num;

	num = -627920584;
	num.f_1 = unk_0x259BE71D8A81D4FA();

	if (!(iParam0 == 0))
		unk_0x01F0B819E78A18A1(1, &num, 2, iParam0);

	return;
}

int func_28(int iParam0) // Position - 0xD26
{
	int unk;

	if (func_29(iParam0))
		unk_0x0B0C9A0F9AAEB7F0(&unk, iParam0);

	return unk;
}

BOOL func_29(int iParam0) // Position - 0xD41
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

int func_30(int iParam0, int iParam1) // Position - 0xD63
{
	int i;

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1890239.f_7[i /*8*/].f_7 == iParam1)
		{
			iParam0 = iParam0 - 1;
		
			if (iParam0 < 0)
				return i;
		}
	}

	return 0;
}

int func_31() // Position - 0xDA3
{
	return Global_1890239;
}

void func_32() // Position - 0xDAF
{
	int num;
	int num2;

	num = func_30(iLocal_111, 0);

	if (iLocal_111 == -1)
	{
		func_86(true);
		return;
	}

	num2 = Global_1890239.f_7[num /*8*/].f_2;

	if (!func_47(num2, false, true) || iLocal_112 != num2)
	{
		func_86(true);
		return;
	}

	func_42(&uLocal_114);

	if (func_40(&uLocal_114))
	{
		func_86(true);
		return;
	}

	if (func_39(&uLocal_114))
	{
		func_13(num);
		func_86(true);
		return;
	}

	if (func_35(&uLocal_114))
	{
		if (func_34())
		{
			bLocal_113 = true;
			iLocal_86 = 3;
		}
		else if (Global_1890239.f_7[num /*8*/] == 0)
		{
			func_6(num);
		}
		else if (Global_1890239.f_7[num /*8*/] == 1)
		{
			func_33(num);
		}
		else
		{
			func_7(0);
		}
	}

	return;
}

void func_33(int iParam0) // Position - 0xE75
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1836080, 15);
	func_13(iParam0);
	Global_1890239.f_6 = 0;
	func_7(0);
	return;
}

BOOL func_34() // Position - 0xE99
{
	return Global_1574582;
}

BOOL func_35(var uParam0) // Position - 0xEA5
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20478)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20469))
		return false;

	func_36();
	Global_20478 = true;
	return true;
}

void func_36() // Position - 0xEE9
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20489, 1);
		func_37();
	}

	return;
}

void func_37() // Position - 0xF0E
{
	if (func_38())
		unk_0xBF3F90E670404C44(5);

	return;
}

BOOL func_38() // Position - 0xF22
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

BOOL func_39(var uParam0) // Position - 0xF69
{
	if (!IS_BIT_SET(*uParam0, 1))
		return false;

	if (Global_20478)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20472))
		return false;

	func_36();
	Global_20478 = true;
	return true;
}

BOOL func_40(var uParam0) // Position - 0xFAD
{
	if (!IS_BIT_SET(*uParam0, 2))
		return false;

	if (Global_20478)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20470))
		return false;

	func_41();
	Global_20478 = true;
	return true;
}

void func_41() // Position - 0xFF1
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20489, 1);

	return;
}

void func_42(var uParam0) // Position - 0x1013
{
	if (unk_0x1DD05E817C89C737() < uParam0->f_1)
		return;

	if (!unk_0x9390801B06EE998F())
		return;

	if (unk_0x875A214D5EBCA509(2, Global_20476) || unk_0x875A214D5EBCA509(2, 181))
	{
		func_45();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}

	if (unk_0x875A214D5EBCA509(2, Global_20477) || unk_0x875A214D5EBCA509(2, 180))
	{
		func_43();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}

	return;
}

void func_43() // Position - 0x1080
{
	func_96(Global_20481, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20489, 1);
	func_44();
	return;
}

void func_44() // Position - 0x10BD
{
	if (func_38())
		if (Global_20709 == 0)
			unk_0xBF3F90E670404C44(2);
		else
			unk_0xBF3F90E670404C44(1);

	return;
}

void func_45() // Position - 0x10E0
{
	func_96(Global_20481, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20489, 1);
	func_46();
	return;
}

void func_46() // Position - 0x111D
{
	if (func_38())
		if (Global_20709 == 0)
			unk_0xBF3F90E670404C44(1);
		else
			unk_0xBF3F90E670404C44(2);

	return;
}

BOOL func_47(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1140
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

void func_48() // Position - 0x11A0
{
	var unk;
	int num;
	var unk2;
	int num2;

	if (func_31() > 1)
		func_42(&uLocal_114);

	if (func_35(&uLocal_114))
	{
		unk_0x88F483FBD433696A(Global_20481, "GET_CURRENT_SELECTION");
		unk = unk_0x6CA3F2B87712B6A4();
	
		while (!unk_0xA6F779AA284EB20E(unk))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_111 = unk_0x5DEF122A58D4F685(unk);
		num = func_30(iLocal_111, 0);
	
		switch (Global_1890239.f_7[num /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_50();
				break;
		
			default:
				return;
		}
	
		Global_20500.f_1 = 8;
		return;
	}

	if (func_39(&uLocal_114))
	{
		unk_0x88F483FBD433696A(Global_20481, "GET_CURRENT_SELECTION");
		unk2 = unk_0x6CA3F2B87712B6A4();
	
		while (!unk_0xA6F779AA284EB20E(unk2))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_111 = unk_0x5DEF122A58D4F685(unk2);
		num2 = func_30(iLocal_111, 0);
	
		switch (Global_1890239.f_7[num2 /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_13(num2);
				func_86(false);
				return;
		
			default:
				return;
		}
	
		return;
		return;
	}

	if (func_16(0))
	{
		func_49(0);
		func_86(false);
	}

	return;
}

void func_49(int iParam0) // Position - 0x12AC
{
	if (func_16(iParam0))
		unk_0x8744D2E3FC95740E(&(Global_1890239.f_3), iParam0);

	return;
}

void func_50() // Position - 0x12C9
{
	BOOL flag;
	var unk;
	int num;
	int num2;
	int num3;
	var unk2;
	var unk18;
	BOOL flag2;
	int i;
	int num4;
	var unk22;
	var unk26;
	var unk42;

	if (Global_20500.f_1 != 8)
		Global_20500.f_1 = 8;

	func_96(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	flag = false;
	num2 = func_30(iLocal_111, 0);
	iLocal_112 = Global_1890239.f_7[num2 /*8*/].f_2;
	num3 = Global_1890239.f_7[num2 /*8*/].f_2;
	unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);

	if (func_47(num3, false, true))
	{
		unk2 = { func_83(num3) };
		unk_0x882AEFD55B8D51FB("STRING");
		unk_0x4E5A3D96808F7F84(func_77(num3));
		unk_0x60D332F23943B34F(&unk2);
		unk_0xCFAD3D478C87321A();
		flag = true;
	}
	else
	{
		func_22("");
	}

	if (Global_1890239.f_7[num2 /*8*/] == 0)
	{
		if (Global_262145.f_15594)
		{
			unk18 = 3;
			flag2 = func_76(num3);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (num4 < 3)
				{
					if (Global_1895156[num3 /*609*/].f_10.f_11[i] != func_14())
					{
						if (func_47(Global_1895156[num3 /*609*/].f_10.f_11[i], false, true))
						{
							unk18[num4] = Global_1895156[num3 /*609*/].f_10.f_11[i];
							num4 = num4 + 1;
						}
					}
				}
			}
		
			if (num4 == 0)
			{
				if (flag2)
					func_22("BA_APP_BODYCTA" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~*/);
				else
					func_22("BA_APP_BODY_TA" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~*/);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODY_T4" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~*/, 16);
			
				if (flag2)
					TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODYCT4" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~*/, 16);
			
				if (num4 == 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODYCT5" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODY_T5" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~*/, 16);
				else if (num4 > 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODYCT6" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODY_T6" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~*/, 16);
			
				unk_0x882AEFD55B8D51FB(&unk22);
			
				for (i = 0; i < num4; i = i + 1)
				{
					unk26 = { func_83(unk18[i]) };
					unk_0x60D332F23943B34F(&unk26);
				}
			
				unk_0xCFAD3D478C87321A();
			}
		}
		else
		{
			if (Global_1890239.f_88[num2 /*5*/].f_1)
				if (Global_1890239.f_88[num2 /*5*/].f_2)
					TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T9" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
				else
					TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T8" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else if (Global_1890239.f_88[num2 /*5*/].f_2)
				TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T7" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T10" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
		
			unk_0x882AEFD55B8D51FB(&unk42);
			unk_0x511D14ED2DA887E1(Global_1890239.f_88[num2 /*5*/]);
			unk_0x511D14ED2DA887E1(func_75(num3));
			unk_0x511D14ED2DA887E1(Global_1890239.f_88[num2 /*5*/].f_3);
			unk_0x511D14ED2DA887E1(Global_1890239.f_88[num2 /*5*/].f_4);
			unk_0xCFAD3D478C87321A();
		}
	}
	else if (Global_1890239.f_7[num2 /*8*/] == 1)
	{
		unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM2" /*~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~*/);
		unk_0x4E5A3D96808F7F84(func_77(Global_1890239.f_7[num2 /*8*/].f_2));
		unk_0x60D332F23943B34F(func_62(Global_1890239.f_7[num2 /*8*/].f_2));
		unk_0xCFAD3D478C87321A();
	}

	if (flag)
	{
		num = func_56(Global_1890239.f_7[num2 /*8*/].f_2);
	
		if (num == 0)
			flag = false;
		else
			unk = unk_0x008C0EB38E4459EE(num);
	}

	if (flag)
		unk_0x3585BEBEDC67FCC7(unk);
	else
		func_22(&uLocal_107);

	unk_0xE6B753D52F4CA222();
	func_96(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54(&uLocal_103);
	func_51(13, &uLocal_95, 12, &uLocal_99, 4, &uLocal_87, &uLocal_114);
	iLocal_86 = 1;
	return;
}

void func_51(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6) // Position - 0x1618
{
	func_52(2, iParam0, sParam1, 0, uParam6, -1);
	func_52(1, iParam2, sParam3, 1, uParam6, 17);
	func_52(3, iParam4, sParam5, 2, uParam6, -1);
	return;
}

void func_52(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5) // Position - 0x1648
{
	if (iParam1 == 1)
	{
		func_21(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_53(iParam5, false);
		return;
	}

	if (Global_20488)
	{
		func_21(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_53(iParam5, true);
		return;
	}

	func_21(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_53(iParam5, true);
	return;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x16ED
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

void func_54(char* sParam0) // Position - 0x1718
{
	func_55(Global_20481, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_55(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x1731
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_22(sParam2);

	if (!unk_0xD6F9DEE4765092A9(sParam3))
		func_22(sParam3);

	if (!unk_0xD6F9DEE4765092A9(sParam4))
		func_22(sParam4);

	if (!unk_0xD6F9DEE4765092A9(sParam5))
		func_22(sParam5);

	if (!unk_0xD6F9DEE4765092A9(sParam6))
		func_22(sParam6);

	unk_0xE6B753D52F4CA222();
	return;
}

int func_56(int iParam0) // Position - 0x178C
{
	int num;

	num = func_59(iParam0);

	if (num == -1)
	{
		func_57(iParam0, true);
		return 0;
	}

	Global_1666485[num /*5*/].f_4 = 1;
	return Global_1666485[num /*5*/].f_2;
}

void func_57(int iParam0, BOOL bParam1) // Position - 0x17C2
{
	if (!func_47(iParam0, false, true))
		return;

	if (func_59(iParam0) != -1)
		return;

	if (Global_1666648)
		if (iParam0 == Global_1666648.f_1)
			return;

	if (func_58(iParam0))
		return;

	if (Global_1666686 >= 32)
		return;

	Global_1666653[Global_1666686] = iParam0;
	Global_1666686 = Global_1666686 + 1;
	bParam1;
	return;
}

BOOL func_58(int iParam0) // Position - 0x182E
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

int func_59(int iParam0) // Position - 0x1860
{
	int i;

	if (!func_47(iParam0, false, true))
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
		
			func_60(i);
			return -1;
		}
	}

	return -1;
}

void func_60(int iParam0) // Position - 0x18DF
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

	func_61(&Global_1666485[num /*5*/]);
	Global_1666646 = Global_1666646 - 1;
	return;
}

void func_61(var uParam0) // Position - 0x1995
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

char* func_62(int iParam0) // Position - 0x19C2
{
	char* str;
	int num;

	if (!func_29(iParam0))
	{
		str = func_70(iParam0, false);
		return str;
	}

	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		str = func_69(&(Global_1895156[iParam0 /*609*/].f_10.f_105));
		return str;
	}

	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_121)
	{
		str = func_70(iParam0, false);
		return str;
	}

	if (func_68(iParam0, 28) || func_68(unk_0x259BE71D8A81D4FA(), 28) || func_67(iParam0) && !func_65(iParam0))
		return func_70(iParam0, false);

	num = func_64(iParam0);

	if (num != func_14())
		if (num != unk_0x259BE71D8A81D4FA())
			if (!func_63() && !unk_0x8FF2665359043205(0, -1, 1))
				return func_70(num, false);

	if (num != func_14())
	{
		str = func_69(&(Global_1895156[num /*609*/].f_10.f_105));
	
		if (unk_0xD6F9DEE4765092A9(str))
			return func_70(num, false);
		else
			return str;
	}

	return "";
}

BOOL func_63() // Position - 0x1AE1
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

int func_64(int iParam0) // Position - 0x1AF7
{
	if (func_29(iParam0))
		return Global_1895156[iParam0 /*609*/].f_10;

	return func_14();
}

BOOL func_65(int iParam0) // Position - 0x1B1A
{
	var unk;

	unk = { func_66(iParam0) };

	if (func_63())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;
		else if (unk_0x97DD063A9C6137F8(0))
			if (unk_0x8EF8E27D73EB5271(&unk))
				return true;

	return false;
}

struct<13> func_66(int iParam0) // Position - 0x1B5A
{
	var unk;

	unk_0x464E131FD68B953F(iParam0, &unk, 13);
	return unk;
}

BOOL func_67(int iParam0) // Position - 0x1B71
{
	var unk;

	if (iParam0 != func_14())
	{
		unk = { func_66(iParam0) };
	
		if (unk_0x3B880DE16766E9C3() && !unk_0x716271729B9FB8E6() || unk_0x761778199FE1211C())
			if (unk_0x97DD063A9C6137F8(0))
				return false;
		else if (func_63() || unk_0x716271729B9FB8E6())
			if (unk_0x97DD063A9C6137F8(0))
				if (unk_0x8EF8E27D73EB5271(&unk))
					return false;
	}

	return true;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x1BDE
{
	return IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

char* func_69(var uParam0) // Position - 0x1BF6
{
	return uParam0;
}

char* func_70(int iParam0, BOOL bParam1) // Position - 0x1C00
{
	if (!bParam1)
		if (func_72(iParam0, true))
			return func_71();

	return unk_0xFACCDE46E24AD056("GB_REST_ACC" /*An Organization*/);
}

var func_71() // Position - 0x1C27
{
	return unk_0xFACCDE46E24AD056("GB_REST_ACCM" /*Motorcycle Club*/);
}

BOOL func_72(int iParam0, BOOL bParam1) // Position - 0x1C37
{
	return func_73(iParam0, bParam1, 1);
}

BOOL func_73(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1C48
{
	int num;

	if (!func_29(iParam0))
		return 0;

	if (!bParam1)
		if (func_74(iParam0, iParam2))
			return 0;

	num = Global_1895156[iParam0 /*609*/].f_10;

	if (num != func_14() && Global_1895156[num /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x1CA5
{
	if (func_29(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10 != func_14())
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

int func_75(int iParam0) // Position - 0x1CF4
{
	if (func_64(iParam0) == func_14())
		return 0;

	return Global_1895156[iParam0 /*609*/].f_10.f_19;
}

BOOL func_76(int iParam0) // Position - 0x1D1A
{
	if (!func_29(iParam0))
		return false;

	return IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 26);
}

int func_77(int iParam0) // Position - 0x1D41
{
	int num;

	num = func_80(iParam0);

	if (num != -1)
		return func_78(num);

	return 1;
}

int func_78(int iParam0) // Position - 0x1D61
{
	int num;

	if (iParam0 > -1)
	{
		num = func_79(iParam0);
	
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

var func_79(int iParam0) // Position - 0x1E24
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_80(int iParam0) // Position - 0x1E3B
{
	if (func_29(iParam0))
		if (func_81(iParam0, true))
			return Global_2648711.f_818.f_11[func_64(iParam0)];

	return -1;
}

BOOL func_81(int iParam0, BOOL bParam1) // Position - 0x1E6B
{
	if (!func_29(iParam0))
		return false;

	if (!bParam1)
		if (func_82(iParam0))
			return false;

	return Global_1895156[iParam0 /*609*/].f_10 != func_14();
}

BOOL func_82(int iParam0) // Position - 0x1EA4
{
	if (func_29(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10 != func_14())
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;

	return false;
}

struct<16> func_83(int iParam0) // Position - 0x1ED9
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, unk_0xBD6CA019F46AB947(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

void func_84() // Position - 0x1F00
{
	if (Global_1890239.f_6)
		if (iLocal_86 != 3)
			if (!unk_0xB11671B812399BA2())
				Global_1890239.f_6 = 0;

	return;
}

void func_85() // Position - 0x1F26
{
	unk_0x4CC1CF98851922CE(0, 176);
	unk_0x4CC1CF98851922CE(0, 177);
	return;
}

void func_86(BOOL bParam0) // Position - 0x1F3C
{
	int value;
	int num;
	BOOL flag;

	iLocal_112 = func_14();

	if (!(Global_20500.f_1 == 7))
		Global_20500.f_1 = 7;

	value = 0;

	if (bParam0)
		value = iLocal_111;

	if (value >= Global_1665428)
		value = 0;

	if (Global_22905)
	{
		func_50();
		Global_22905 = false;
		return;
	}

	num = func_31();
	num = num - func_95();

	if (func_81(unk_0x259BE71D8A81D4FA(), false) && !func_94(true) && num <= 0)
	{
		func_92();
		return;
	}

	func_87();
	func_96(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /*SecuroServ*/);
	flag = false;

	if (num > 0)
		flag = true;

	if (flag)
		func_51(13, &uLocal_91, 12, &uLocal_99, 4, &uLocal_87, &uLocal_114);
	else
		func_51(1, "", 1, "", 4, &uLocal_87, &uLocal_114);

	iLocal_86 = 0;
	return;
}

void func_87() // Position - 0x2026
{
	int i;
	int num;

	func_96(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1890239.f_7[i /*8*/].f_1 == 1 && Global_1890239.f_7[i /*8*/].f_7 == 0)
		{
			switch (Global_1890239.f_7[i /*8*/])
			{
				case 0:
					if (func_91(i, num))
						num = num + 1;
					break;
			
				case 1:
					if (func_89(i, num))
						num = num + 1;
					break;
			}
		}
	}

	if (num > 0)
		return;

	func_88();
	return;
}

void func_88() // Position - 0x20DB
{
	var unk;

	unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(0);

	if (func_82(unk_0x259BE71D8A81D4FA()))
		func_22("BA_APP_NONEB" /*No Invites*/);
	else
		func_22("BA_APP_NONE" /*No VIP Invites*/);

	func_22("");
	unk_0x330108B080A2132F(-1);
	unk_0x330108B080A2132F(1);
	unk = unk_0x76CD105BCAC6EB9F();
	unk_0x557F1E2300EF1A3E(unk);
	unk_0xE6B753D52F4CA222();
	return;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x2139
{
	var unk;
	int num;
	int num2;

	if (Global_1890239.f_7[iParam0 /*8*/].f_2 == func_14() || !func_47(Global_1890239.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	unk = { func_83(Global_1890239.f_7[iParam0 /*8*/].f_2) };
	func_90(&unk);
	unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM1" /*Has challenged you to an Executive Deathmatch.*/);
	unk_0xCFAD3D478C87321A();
	unk_0x330108B080A2132F(-1);
	num = 1;
	num2 = func_80(Global_1890239.f_7[iParam0 /*8*/].f_2);

	if (num2 != -1)
		num = func_78(num2);

	unk_0x330108B080A2132F(num);
	unk_0x557F1E2300EF1A3E(1);
	unk_0xE6B753D52F4CA222();
	return true;
}

void func_90(var uParam0) // Position - 0x21E8
{
	unk_0xCE3E870AC37B4253(uParam0);
	return;
}

BOOL func_91(int iParam0, int iParam1) // Position - 0x21F6
{
	var unk;
	BOOL flag;
	int num;
	int num2;
	int num3;

	if (Global_1890239.f_7[iParam0 /*8*/].f_2 == func_14() || !func_47(Global_1890239.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	unk = { func_83(Global_1890239.f_7[iParam0 /*8*/].f_2) };
	func_90(&unk);
	flag = func_76(Global_1890239.f_7[iParam0 /*8*/].f_2);
	num = func_75(Global_1890239.f_7[iParam0 /*8*/].f_2);

	if (num == 0)
	{
		if (flag)
			func_22("BA_APP_BODYCT" /*Wants you to become an Associate.*/);
		else
			func_22("BA_APP_BODY_T" /*Wants you to become a Bodyguard.*/);
	}
	else if (num == 1)
	{
		if (flag)
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT3" /*Wants you to become an Associate.~n~~1~ other in this Organization.*/);
		else
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T3" /*Wants you to become a Bodyguard.~n~~1~ other in this Organization.*/);
	
		unk_0x511D14ED2DA887E1(num);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		if (flag)
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT2" /*Wants you to become an Associate.~n~~1~ others in this Organization.*/);
		else
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T2" /*Wants you to become a Bodyguard.~n~~1~ others in this Organization.*/);
	
		unk_0x511D14ED2DA887E1(num);
		unk_0xCFAD3D478C87321A();
	}

	unk_0x330108B080A2132F(-1);
	num2 = 1;
	num3 = func_80(Global_1890239.f_7[iParam0 /*8*/].f_2);

	if (num3 != -1)
		num2 = func_78(num3);

	unk_0x330108B080A2132F(num2);
	unk_0x557F1E2300EF1A3E(1);
	unk_0xE6B753D52F4CA222();
	return true;
}

void func_92() // Position - 0x232B
{
	func_96(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x88F483FBD433696A(Global_20481, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(func_77(unk_0x259BE71D8A81D4FA()));
	unk_0x60D332F23943B34F(func_93());
	unk_0xCFAD3D478C87321A();
	func_22("BA_APP_NONEG" /*You are already a member of this Organization.*/);
	func_22("CELL_AGBOSSPIC" /*CHAR_GANGAPP*/);
	unk_0xE6B753D52F4CA222();
	func_96(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /*SecuroServ*/);
	func_51(1, "", 1, "", 4, &uLocal_87, &uLocal_114);
	iLocal_86 = 2;
	return;
}

char* func_93() // Position - 0x23E3
{
	int num;
	char* str;

	num = func_64(unk_0x259BE71D8A81D4FA());

	if (num != func_14())
	{
		if (num != unk_0x259BE71D8A81D4FA())
		{
			if (func_68(num, 28) || func_68(unk_0x259BE71D8A81D4FA(), 28) || func_67(num) && !func_65(num))
				return func_70(num, false);
		
			if (!func_63() && !unk_0x8FF2665359043205(0, -1, 1))
				return func_70(num, false);
		}
	
		str = func_69(&(Global_1895156[num /*609*/].f_10.f_105));
	
		if (unk_0xD6F9DEE4765092A9(str))
			return func_70(num, false);
		else
			return str;
	}

	return "";
}

BOOL func_94(BOOL bParam0) // Position - 0x2495
{
	return func_72(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_95() // Position - 0x24A7
{
	int i;
	int num;

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1890239.f_7[i /*8*/].f_7 == 1)
			num = num + 1;
	}

	return num;
}

void func_96(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x24DC
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

void func_97() // Position - 0x253F
{
	Global_1890239.f_1 = 0;
	func_98();
	return;
}

void func_98() // Position - 0x2552
{
	Global_1890239.f_5 = 0;
	return;
}

void func_99(var uParam0) // Position - 0x2561
{
	*uParam0 = 0;
	return;
}

