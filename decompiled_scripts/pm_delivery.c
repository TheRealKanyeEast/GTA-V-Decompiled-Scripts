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
	int iLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1092616192;
	var uLocal_45 = 1101004800;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 3;
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
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	BOOL bLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 2;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 2;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 2;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = 0;
	char* sLocal_102 = 0;
	char* sLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = -1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1000;
	var uLocal_114 = 1000;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_83 = -1;
	sLocal_101 = "PMDL_OBJ";
	sLocal_102 = "PMDL_LOC";
	sLocal_103 = "PMDL_BCK";
	unk_0x925970A93719CADE(1);

	if (unk_0x96CFB880BAC634CE(3))
	{
		func_143(2);
		func_114();
	}

	iLocal_34 = func_112();

	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (!bLocal_74)
					func_107();
				else
					func_106();
			
				if (bLocal_73)
				{
					bLocal_75 = true;
					iLocal_35 = 1;
				}
				break;
		
			case 1:
				if (!func_105())
				{
					switch (iLocal_36)
					{
						case 0:
							func_102();
							break;
					
						case 1:
							if (iLocal_34 == 5 || iLocal_34 == 6)
								func_66();
							else
								func_65();
							break;
					
						case 2:
							func_9();
						
							if (iLocal_34 < 3)
							{
								func_7();
							}
							else if (iLocal_34 > 6)
							{
								func_7();
								func_2();
							}
							break;
					
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x153
{
	func_143(2);
	func_114();
	return;
}

void func_2() // Position - 0x164
{
	int num;
	int num2;

	if (unk_0xFC8BFE4B41177C22(iLocal_94))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_94, 0))
		{
			num = 200;
			num2 = unk_0x8D91ADE44AC79BC9(iLocal_94) - 800;
		
			if (unk_0xD1F1A906BA9226BE(iLocal_94))
				unk_0xD25E9BDC14A0B649(iLocal_94, unk_0x8D91ADE44AC79BC9(iLocal_94) - 5, 0);
		
			if (num2 <= 0)
				iLocal_36 = 4;
			else if (num2 < 75)
				func_3(num2, num, "PMDL_DMG", 6, 0, 1, 2);
			else
				func_3(num2, num, "PMDL_DMG", 1, 0, 1, 2);
		}
		else
		{
			iLocal_36 = 4;
		}
	}
	else
	{
		iLocal_36 = 4;
	}

	return;
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E7
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	return;
}

void func_4(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36) // Position - 0x227
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(0, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655612.f_1 = 1;
		func_5(0, num);
		Global_1655612.f_1177[num] = iParam0;
		Global_1655612.f_1177.f_11[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_1177.f_22[num /*16*/], sParam2, 64);
		Global_1655612.f_1177.f_194[num] = iParam3;
		Global_1655612.f_1177.f_183[num] = iParam4;
		Global_1655612.f_1177.f_216[num] = iParam5;
		Global_1655612.f_1177.f_227[num /*3*/] = fParam6;
		Global_1655612.f_1177.f_227[num /*3*/].f_1 = fParam7;
		Global_1655612.f_1177.f_258[num] = iParam8;
		Global_1655612.f_1177.f_269[num] = iParam9;
		Global_1655612.f_1177.f_312[num] = iParam10;
		Global_1655612.f_1177.f_323[num] = iParam11;
		Global_1655612.f_1177.f_334[num] = iParam12;
		Global_1655612.f_1177.f_345[num] = iParam13;
		Global_1655612.f_1172 = 1;
		Global_1655612.f_1177.f_356[num] = iParam14;
		Global_1655612.f_1177.f_367[num] = iParam15;
		Global_1655612.f_1177.f_378[num] = iParam16;
		Global_1655612.f_1177.f_389[num] = iParam17;
		Global_1655612.f_1177.f_400[num] = iParam18;
		Global_1655612.f_1177.f_411[num] = iParam19;
		Global_1655612.f_1177.f_422[num] = iParam20;
		Global_1655612.f_1177.f_433[num] = iParam21;
		Global_1655612.f_1177.f_444[num] = iParam22;
		Global_1655612.f_1177.f_455[num] = iParam23;
		Global_1655612.f_1177.f_466[num] = iParam24;
		Global_1655612.f_1177.f_205[num] = iParam25;
		Global_1655612.f_1177.f_477[num] = iParam26;
		Global_1655612.f_1177.f_488[num] = iParam27;
		Global_1655612.f_1177.f_499[num] = iParam28;
		Global_1655612.f_1177.f_510[num] = iParam29;
		Global_1655612.f_1177.f_521[num] = iParam30;
		Global_1655612.f_1177.f_532[num] = iParam31;
		Global_1655612.f_1177.f_543[num] = iParam32;
		Global_1655612.f_1177.f_554[num] = iParam33;
		Global_1655612.f_1177.f_565[num] = iParam34;
		Global_1655612.f_1177.f_576[num] = iParam35;
		Global_1655612.f_1177.f_587[num] = iParam36;
	}

	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x4BF
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1655612.f_7009[iParam0], iParam1);
	return;
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x4D8
{
	return IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}

void func_7() // Position - 0x4EE
{
	int num;

	num = iLocal_78 - unk_0x1DD05E817C89C737();

	if (num < 0)
		num = 0;

	if (unk_0x1DD05E817C89C737() >= iLocal_82)
		func_8(num, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else
		func_8(num, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	switch (iLocal_79)
	{
		case 0:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 10000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 1:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 9000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 2:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 8000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 3:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 7000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 4:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 6000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 5:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 5000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 6:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 4500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 7:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 4000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 8:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 3500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 9:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 3000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 10:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 2500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 11:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 2000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 12:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 1500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 13:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 1000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 14:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 15:
			if (unk_0x1DD05E817C89C737() >= iLocal_78)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 16:
			break;
	}

	if (unk_0x1DD05E817C89C737() >= iLocal_78)
		iLocal_36 = 3;

	return;
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x7DE
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655612.f_1 = 1;
		func_5(7, num);
		Global_1655612.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_4659.f_11[num /*16*/], sParam1, 64);
		Global_1655612.f_4659.f_172[num] = iParam2;
		Global_1655612.f_4659.f_216[num] = iParam3;
		Global_1655612.f_4659.f_183[num] = iParam4;
		Global_1655612.f_4659.f_194[num] = iParam5;
		Global_1655612.f_4659.f_249[num] = iParam6;
		Global_1655612.f_4659.f_260[num] = iParam7;
		Global_1655612.f_4659.f_205[num] = iParam8;
		Global_1655612.f_4659.f_314[num] = iParam9;
		Global_1655612.f_4659.f_325[num] = iParam10;
		Global_1655612.f_4659.f_357[num] = iParam11;
		Global_1655612.f_4659.f_238[num] = iParam12;
		Global_1655612.f_4659.f_271[num] = iParam13;
		Global_1655612.f_4659.f_368[num] = iParam14;
		Global_1655612.f_4659.f_379[num] = iParam15;
		Global_1655612.f_4659.f_390[num] = iParam16;
		Global_1655612.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_9() // Position - 0x93B
{
	int i;
	int j;

	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		for (i = 0; i < iLocal_91; i = i + 1)
		{
			if (!bLocal_76)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_91[i]))
				{
					if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_62, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
						unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
						bLocal_76 = true;
					}
				}
			}
			else if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_91[i]))
				{
					unk_0xD844F5E50DAB6FF7(iLocal_91[i], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
					unk_0x44FB298D6382876D(iLocal_91[i], 1);
					unk_0xF09E30AF1B8FB379(&iLocal_91[i]);
				}
			
				if (unk_0xFC8BFE4B41177C22(uLocal_95))
					unk_0x68298CA6191CDFDB(&uLocal_95);
			}
		}
	}

	if (func_21(&uLocal_37, uLocal_65, Global_22, 1, iLocal_94, sLocal_102, "", sLocal_103, true, 0, true, -1))
	{
		func_19(iLocal_94, 10.5f, 2, 1056964608, 0, true, false);
		unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 2000, 0);
		unk_0xF04751F8E604D487(iLocal_94, 0);
		func_14(&uLocal_37, true, false);
		func_13();
	}

	for (j = 0; j < iLocal_88; j = j + 1)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_88[j]))
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_97[j]))
			{
				uLocal_97[j] = func_10(iLocal_88[j], true, 145);
				unk_0xB5396F1FB088FE38(&uLocal_118);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x93C0674FC00824D0(uLocal_118);
				unk_0x4BD42B0527065BB6(iLocal_88[j], uLocal_118);
				unk_0xD0557B139A542F12(&uLocal_118);
				unk_0x44FB298D6382876D(iLocal_88[j], 1);
			}
		
			if (!unk_0xFAA48325A90263BE(iLocal_88[j], unk_0x4A8C381C258A124D(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xC450B06E5AAA0985(uLocal_97[j]))
					unk_0xFE54B8568B2ABD12(&uLocal_97[j]);
			
				unk_0xD844F5E50DAB6FF7(iLocal_88[j], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_88[j], 1);
				unk_0xF09E30AF1B8FB379(&iLocal_88[j]);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uLocal_97[j]))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_97[j]);
		}
	}

	return;
}

int func_10(int iParam0, BOOL bParam1, int iParam2) // Position - 0xB65
{
	int num;

	num = func_11(iParam0, !bParam1, false);

	if (iParam2 != 145 && unk_0xC450B06E5AAA0985(num) && unk_0x6BA487C862DB8DDF(&(Global_2058[iParam2 /*29*/].f_3)))
		unk_0x594D5D0D7071B0DE(num, &(Global_2058[iParam2 /*29*/].f_3));

	return num;
}

int func_11(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBAF
{
	int num;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 0;

	num = unk_0x18E23E031A9B798F(iParam0);

	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 1f : 1f);
	
		if (!bParam2)
			unk_0x6A52036D51C7E18E(num, bParam1);
		else
			unk_0x61183D6239A9D7B8(num, 2);
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 0.7f : 0.7f);
		unk_0x6A52036D51C7E18E(num, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 0.7f : 0.7f);
	}

	return num;
}

var func_12(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC53
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_13() // Position - 0xC6A
{
	func_143(1);
	func_114();
	return;
}

void func_14(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC7B
{
	int i;

	if (IS_BIT_SET(uParam0->f_13, 30))
		bParam1 = true;

	func_18(uParam0);

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
			unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
	
		func_17(i, uParam0);
		func_16(i, uParam0);
	}

	for (i = 0; i < 31; i = i + 1)
	{
		if (i != 8)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), i);
			unk_0x8744D2E3FC95740E(&(uParam0->f_14), i);
		}
	}

	if (unk_0xC450B06E5AAA0985(*uParam0))
		unk_0xFE54B8568B2ABD12(uParam0);

	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
		{
			unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[i], 1);
			unk_0xD9757FAB956617BA(uParam0->f_17[i], 1);
		
			if (bParam2)
			{
				unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 32, 1);
				unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 305, 0);
			}
		
			unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 268, 0);
		
			if (bParam1)
				if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) && uParam0->f_17[i] != unk_0x4A8C381C258A124D())
					unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
		
			if (!IS_BIT_SET(uParam0->f_13, 29))
				unk_0x96A0632EBDD87FA3(uParam0->f_17[i], 0, -1, 0);
		
			uParam0->f_17[i] = 0;
		}
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 1);
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		if (bParam2)
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);

	uParam0->f_21 = 0;
	return;
}

var func_15() // Position - 0xE26
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_16(int iParam0, var uParam1) // Position - 0xE36
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 17);
			break;
	
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 18);
			break;
	
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 19);
			break;
	}

	return;
}

void func_17(int iParam0, var uParam1) // Position - 0xE7E
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 14);
			break;
	
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 15);
			break;
	
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 16);
			break;
	}

	return;
}

void func_18(var uParam0) // Position - 0xEC6
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_5))
		unk_0xFE54B8568B2ABD12(&(uParam0->f_5));

	return;
}

int func_19(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xEE1
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);

	if (bParam5)
		unk_0x66EFB3D6110055C4(0, 75, 1);

	unk_0x66EFB3D6110055C4(0, 80, 1);

	if (!bParam6)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}

	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
	func_20(iParam0);

	if (unk_0x1DD05E817C89C737() - Global_29 > 500)
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);

	Global_29 = unk_0x1DD05E817C89C737();

	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= iParam3)
			return 1;

	return 0;
}

void func_20(int iParam0) // Position - 0x1079
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		if (unk_0xA03728CC57F6DD36(iParam0))
			if (unk_0x772683F12F46CE82(iParam0))
				unk_0x5B29AF88D03CEB7A(iParam0, 0);

	return;
}

BOOL func_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, BOOL bParam12, int iParam13, BOOL bParam14, int iParam15) // Position - 0x10A5
{
	return func_22(uParam0, uParam1, uParam4, func_64(), func_64(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_63(), func_63(), func_63(), func_63(), sParam10, false, bParam12, sParam11, false, iParam13, bParam14, iParam15, 0, 0, 0, true, 1065353216);
}

BOOL func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, BOOL bParam25, BOOL bParam26, char* sParam27, BOOL bParam28, int iParam29, BOOL bParam30, int iParam31, int iParam32, int iParam33, int iParam34, BOOL bParam35, int iParam36) // Position - 0x10F4
{
	var unk;
	BOOL flag;
	int i;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	unk2 = { uParam1 + { 1f, 0f, 0f } };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_62(uParam0);
	func_61(uParam0);
	func_60();

	if (func_44(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, false, false, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_43(sParam20);
		func_43(sParam21);
		func_43(sParam22);
		func_43(sParam23);
	
		if (unk_0x9390801B06EE998F())
		{
			flag = false;
		
			if (unk_0xD9F5E1FEFD1329E4(iParam18, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam18, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
				
					if (!IS_BIT_SET(uParam0->f_13, 9))
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
				
					if (IS_BIT_SET(uParam0->f_13, 23))
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 23);
				
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					flag = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(uParam0, iParam29))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
				
					if (!IS_BIT_SET(uParam0->f_13, 9))
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
				
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		
			if (flag)
			{
				func_43(sParam24);
				func_43(sParam27);
				func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
			
				if (bParam26 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						func_43(sParam19);
					}
				
					if (unk_0xC450B06E5AAA0985(*uParam0))
						unk_0xFE54B8568B2ABD12(uParam0);
				
					if (!func_37(uParam0, 1) && !func_36(uParam0) && !IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED" /*Lose the Cops.*/, false);
						
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED" /*Lose the Cops.*/);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
				
					if (!unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						if (unk_0xC450B06E5AAA0985(*uParam0))
							unk_0xFE54B8568B2ABD12(uParam0);
					
						uParam0->f_5 = func_31(unk2, 0);
					
						if (!(iParam31 == -1))
							unk_0x4C905FB262965D5D(uParam0->f_5, iParam31);
					
						if (bParam35)
							func_30(uParam0->f_5, uParam0);
					}
					else if (!func_29(unk2, unk_0x3CF9D442F2C902BD(uParam0->f_5), 0.1f, false))
					{
						unk_0xDABC73EF230B6665(uParam0->f_5, unk2);
					
						if (bParam35)
							func_30(uParam0->f_5, uParam0);
					}
				
					if (!func_37(uParam0, 2))
					{
						if (!IS_BIT_SET(uParam0->f_13, 2))
						{
							func_34(uParam0, sParam19, false);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 2);
						}
					}
				
					if (iParam14 == 4 || iParam14 == 5)
						if (IS_BIT_SET(uParam0->f_13, 13))
							iParam13 = 0;
				
					flag = false;
					num = 0;
					num2 = 0;
				
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5)
						num = 1;
				
					if (iParam14 == 2 || iParam14 == 3)
						num2 = 1;
					else if (iParam14 == 4 || iParam14 == 5)
						num2 = 2;
				
					if (bParam28)
					{
						unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uParam1, uParam4, iParam13, num, num2);
					
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), uParam7, uParam10, iParam36, 0, num, num2))
							flag = true;
					}
					else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uParam1, uParam4, iParam13, num, num2))
					{
						flag = true;
					}
				
					if (flag)
					{
						flag = true;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[i], unk, 0))
										flag = false;
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[i], iParam18, 0))
										flag = false;
								}
								else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) || !func_27(uParam0->f_17[i], 1))
								{
									flag = false;
								}
							}
						}
					
						if (flag)
						{
							if (func_24(uParam0))
							{
								func_43(sParam19);
								func_43(sParam24);
								func_43(sParam20);
								func_43(sParam21);
								func_43(sParam22);
								func_43(sParam23);
								func_43("LOSE_WANTED" /*Lose the Cops.*/);
								func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
								func_43(sParam27);
								func_14(uParam0, true, false);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(iParam18))
			{
				if (bParam26 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) && !IS_BIT_SET(uParam0->f_13, 9) && !IS_BIT_SET(uParam0->f_13, 22))
				{
					func_43(sParam24);
					func_43(sParam27);
				
					if (unk_0xC450B06E5AAA0985(uParam0->f_5) || unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						unk_0xFE54B8568B2ABD12(uParam0);
						func_43(sParam19);
					}
				
					if (!func_37(uParam0, 1) && !func_36(uParam0) && !IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED" /*Lose the Cops.*/, false);
						
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED" /*Lose the Cops.*/);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
				
					if (unk_0xD9F5E1FEFD1329E4(iParam18, 0))
					{
						if (!unk_0xC450B06E5AAA0985(*uParam0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_5))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
								func_43(sParam19);
							}
						
							*uParam0 = func_23(iParam18, false, false);
							unk_0xF55F62DA99DB0C2F(*uParam0, 2);
						
							if (!IS_BIT_SET(uParam0->f_13, 4))
								func_30(*uParam0, uParam0);
						}
					
						if (!func_37(uParam0, 2))
						{
							if (!IS_BIT_SET(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!unk_0xFF692AB7350A74D7(sParam27))
								{
									if (!IS_BIT_SET(uParam0->f_13, 4))
									{
										func_34(uParam0, sParam27, false);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
									}
								}
								else if (!IS_BIT_SET(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam24, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							
								if (!IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
										func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
								
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
					func_43(sParam19);
				}
			
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(uParam0, 2))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 13))
								{
									num3 = 0;
									num4 = 0;
								
									for (i = 0; i < 3; i = i + 1)
									{
										if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
											num3 = num3 + 1;
									}
								
									num4 = unk_0xC5935DFB3F39785A(0, num3);
								
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[num4]))
										func_32(uParam0->f_17[num4], "NEED_A_BIGGER_VEHICLE", 3);
								
									func_34(uParam0, "MORE_SEATS" /*A vehicle with more seats is needed.*/, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
								}
							}
							else if (!IS_BIT_SET(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (!IS_BIT_SET(uParam0->f_13, 4))
							{
								if (IS_BIT_SET(uParam0->f_13, 9))
								{
									func_34(uParam0, sParam27, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(uParam0, 2))
					{
						if (!IS_BIT_SET(uParam0->f_13, 3))
						{
							func_34(uParam0, sParam24, false);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
						}
						else if (IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!unk_0xFF692AB7350A74D7(sParam27))
							{
								if (!IS_BIT_SET(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam27, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
							else if (!IS_BIT_SET(uParam0->f_13, 4))
							{
								func_34(uParam0, sParam24, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (IS_BIT_SET(uParam0->f_13, 0))
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
	
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED" /*Lose the Cops.*/);
	
		if (unk_0xC450B06E5AAA0985(uParam0->f_5))
			unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
	
		if (unk_0xC450B06E5AAA0985(*uParam0))
			unk_0xFE54B8568B2ABD12(uParam0);
	}

	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 11);
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19F9
{
	return func_11(iParam0, !bParam1, bParam2);
}

BOOL func_24(var uParam0) // Position - 0x1A0C
{
	if (IS_BIT_SET(uParam0->f_13, 12))
		if (func_26(unk_0x4A8C381C258A124D()))
			if (func_25(true, false, true) || IS_BIT_SET(uParam0->f_13, 7))
				return true;
	else if (func_25(true, false, true) || IS_BIT_SET(uParam0->f_13, 7))
		return true;

	return false;
}

BOOL func_25(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A61
{
	int num;

	if (unk_0x94A7730DEC6E86C8())
		return false;

	if (bParam0)
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			return false;

	num = 0;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			return false;
	
		num = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (bParam0)
			if (unk_0x1C2F771CDC87A3A5(num, 0))
				return false;
	
		if (bParam2)
			if (!unk_0x1C2F771CDC87A3A5(num, 0))
				if (unk_0xFD5C5BBD1FE92BB7(num, -1, 0) != unk_0x4A8C381C258A124D())
					return false;
	
		if (!unk_0x1C2F771CDC87A3A5(num, 0))
			if (unk_0x032CEF99C0D59B73(num) < 0.95f || unk_0x032CEF99C0D59B73(num) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
		return false;

	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
		return false;

	return true;
}

BOOL func_26(var uParam0) // Position - 0x1B46
{
	float num;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		num = unk_0xDF93B3CFAC96698F(uParam0);
	
		if (num > -0.5f && num < 0.5f)
			return true;
	}

	return false;
}

BOOL func_27(var uParam0, int iParam1) // Position - 0x1B7D
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && iParam1)
		{
			if (func_28(unk_0x4A8C381C258A124D(), uParam0))
			{
				unk_0x316802E03D8923D8(func_15(), 50f);
				return true;
			}
		}
		else if (unk_0xD11A63E12F198FDB(uParam0, func_15()))
		{
			unk_0x316802E03D8923D8(func_15(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_28(var uParam0, var uParam1) // Position - 0x1BE8
{
	var unk;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0x27E68848F0E5D7D9(uParam0))
		{
			unk = unk_0x6EF03BE64E058E2F(uParam0, 0);
		
			if (unk_0xD9F5E1FEFD1329E4(unk, 0))
				if (!unk_0x4FAFF4BCB7633475(uParam1))
					if (unk_0xF4244288C3EF3306(uParam1, unk))
						return true;
		}
	}

	return false;
}

BOOL func_29(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1C30
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (unk_0x1D5CD3EAAA7422B0(fParam0 - uParam3) <= fParam6)
			if (unk_0x1D5CD3EAAA7422B0(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (unk_0x1D5CD3EAAA7422B0(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (unk_0x1D5CD3EAAA7422B0(fParam0 - uParam3) <= fParam6)
		if (unk_0x1D5CD3EAAA7422B0(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_30(var uParam0, var uParam1) // Position - 0x1CAB
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0xC450B06E5AAA0985(uParam1->f_6))
			unk_0xBC64B805EE071A37(uParam1->f_6, 0);
	
		unk_0x0F20DD0DCEB2959F(0);
		unk_0xC3C7C9791CD79114();
		uParam1->f_6 = uParam0;
		unk_0xBC64B805EE071A37(uParam0, 1);
	}

	return;
}

var func_31(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1CE6
{
	var unk;

	unk = unk_0x34864AB7DA700AA6(uParam0);
	unk_0x5D3946F818C6B331(unk, unk_0x76CD105BCAC6EB9F() ? 1f : 1f);
	unk_0xBC64B805EE071A37(unk, iParam3);
	return unk;
}

void func_32(var uParam0, char* sParam1, int iParam2) // Position - 0x1D12
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_33(iParam2), 1);
	return;
}

char* func_33(int iParam0) // Position - 0x1D29
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_34(var uParam0, char* sParam1, BOOL bParam2) // Position - 0x1F1B
{
	if (!bParam2)
		if (!unk_0xFF692AB7350A74D7(sParam1))
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
				func_35(sParam1, 7500, 1);

	uParam0->f_10 = unk_0x1DD05E817C89C737();
	return;
}

void func_35(char* sParam0, int iParam1, int iParam2) // Position - 0x1F52
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
	return;
}

BOOL func_36(var uParam0) // Position - 0x1F6B
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_16))
		if (unk_0x912159A05BE6B52E(uParam0->f_16))
			return true;

	return false;
}

BOOL func_37(var uParam0, int iParam1) // Position - 0x1F8F
{
	if (iParam1 != 1 || unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
			return true;
	
		if (func_40(uParam0))
			return true;
	}

	if (iParam1 != 2 || unk_0x5994A2F6D4FFFE4D())
		if (func_39() && !func_38())
			return true;

	return false;
}

BOOL func_38() // Position - 0x1FE7
{
	if (Global_22856 == 1)
		return true;

	return false;
}

BOOL func_39() // Position - 0x1FFE
{
	if (Global_21845 != 0 || unk_0x1F9EB85925C3ECD7())
		return true;

	return false;
}

BOOL func_40(var uParam0) // Position - 0x2020
{
	int num;
	int num2;

	num2 = unk_0x1DD05E817C89C737();
	num = num2 - uParam0->f_10;

	if (num < 35)
		return true;

	return false;
}

BOOL func_41(var uParam0, int iParam1) // Position - 0x2043
{
	var unk;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (func_42(unk, uParam0, iParam1))
			return true;
	}

	return false;
}

BOOL func_42(var uParam0, var uParam1, int iParam2) // Position - 0x2074
{
	int num;
	int num2;
	int i;

	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_17[i]))
				num = num + 1;
		}
	
		num2 = unk_0x2EEC0612337D20CE(uParam0);
	
		if (iParam2 > 0)
			if (num2 >= iParam2)
				if (iParam2 > 1)
					if (!unk_0x22007BC82AF0074B(uParam0, 1))
						return true;
				else
					return true;
		else if (num2 >= num)
			if (num > 1)
				if (!unk_0x22007BC82AF0074B(uParam0, 1))
					return true;
			else
				return true;
	}

	return false;
}

void func_43(char* sParam0) // Position - 0x2108
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
		unk_0x4E8E15513E171E54(sParam0);

	return;
}

BOOL func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, BOOL bParam9, int iParam10, BOOL bParam11, BOOL bParam12, int iParam13, int iParam14, int iParam15, int iParam16, BOOL bParam17) // Position - 0x2120
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	var unk;
	BOOL flag2;
	BOOL flag3;
	int num6;
	int num7;
	var unk5;
	var unk9;
	BOOL flag4;
	var unk13;
	int num8;
	int num9;
	int num10;
	var unk14;
	int num11;
	var unk17;

	num4 = 0;
	unk = 3;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	unk5 = 3;
	unk5[0] = uParam4;
	unk5[1] = uParam5;
	unk5[2] = uParam6;
	unk9 = 3;
	unk9[0] = iParam13;
	unk9[1] = iParam14;
	unk9[2] = iParam15;
	flag = true;
	num = 0;
	num2 = 0;
	num3 = 0;
	unk[0] = 0;
	unk[1] = 0;
	unk[2] = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
			num3 = num3 + 1;
	
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!IS_BIT_SET(uParam0->f_13, 29) && !IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
					unk_0x96A0632EBDD87FA3(uParam0->f_17[i], 1, -1, 0);
			
				if (i == 2)
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 28);
			}
		}
		else if (!IS_BIT_SET(uParam0->f_13, 29) && IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				unk_0x96A0632EBDD87FA3(uParam0->f_17[i], 0, -1, 0);
		
			if (i == 2)
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 28);
		}
	}

	if (num3 == 0)
		return true;

	if (IS_BIT_SET(uParam0->f_13, 26))
	{
		flag4 = false;
	
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_21))
		{
			num8 = 64;
			num8 = num8 | 65536;
			num8 = num8 | 2048;
			num8 = num8 | 1;
			num8 = num8 | 2;
			num8 = num8 | 4;
			num8 = num8 | 32;
			num8 = num8 | 16;
			num8 = num8 | 8;
			unk13 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50f, 0, num8);
		
			if (unk_0xD9F5E1FEFD1329E4(unk13, 0))
				uParam0->f_21 = unk13;
		}
	
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, num3))
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
								{
									unk_0x4190C67D524CD0DC(uParam0->f_17[i], 1f);
								
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
										unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
								
									if (unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7 && !func_59(uParam0->f_17[i], uParam0->f_21))
									{
										if (!unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[i], 1);
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[i], uParam0->f_21, 60000, i, 1f, 1, 0);
											unk_0x412B9F2CF0E60079(uParam0->f_17[i], i);
										}
									}
								}
							}
						
							return true;
						}
						else
						{
							flag4 = true;
						}
					}
					else
					{
						flag4 = true;
					}
				}
				else
				{
					flag4 = true;
				}
			}
			else
			{
				flag4 = true;
			}
		}
		else
		{
			flag4 = true;
		}
	
		if (flag4)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 26);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				{
					if (!unk_0x9D6DF8F3584AAC2B(uParam0->f_17[i]) && !uParam0->f_15)
						unk_0x974022927CB47E68(uParam0->f_17[i]);
				
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
						if (func_57(uParam0, uParam0->f_17[i], uParam8, true))
							unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
				}
			}
		}
	}

	if (!IS_BIT_SET(uParam0->f_13, 26))
	{
		if (!func_56(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !unk_0xFC8BFE4B41177C22(iParam10))
		{
			num6 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		
			if (unk_0xD9F5E1FEFD1329E4(num6, 0))
			{
				if (!IS_BIT_SET(uParam0->f_13, 13))
				{
					iParam16 == 4 || iParam16 == 5;
				
					if (!func_37(uParam0, 2))
					{
						num9 = 0;
						num10 = 0;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
								num9 = num9 + 1;
						}
					
						num10 = unk_0xC5935DFB3F39785A(0, num9);
					
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[num10]))
							func_32(uParam0->f_17[num10], "NEED_A_BIGGER_VEHICLE", 3);
					
						func_34(uParam0, "MORE_SEATS" /*A vehicle with more seats is needed.*/, false);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
					}
				}
			
				flag3 = true;
			}
		}
		else
		{
			flag3 = false;
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 13);
			func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
		}
	
		if (!unk_0xFC8BFE4B41177C22(iParam10))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[1]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[2]))
			{
				if (!IS_BIT_SET(uParam0->f_13, 31))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !func_37(uParam0, 2))
					{
						num6 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					
						if (func_55(num6, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT" /*~s~Vehicle is not suitable.*/, false);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					unk_0x8744D2E3FC95740E(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT" /*~s~Vehicle is not suitable.*/);
				}
			}
		}
	
		if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
				if (unk_0x875A214D5EBCA509(0, 75))
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
			else if (IS_BIT_SET(uParam0->f_13, 21))
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 21);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[i]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				{
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
						unk_0x34A9A872D3C510BF(uParam0->f_17[i], 1);
					else
						unk_0x34A9A872D3C510BF(uParam0->f_17[i], 0);
				
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						num6 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					
						if (unk_0xD9F5E1FEFD1329E4(num6, 0))
							if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
								if (!func_56(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									if (!func_54(uParam0->f_17[i]))
										unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
					
						if (num6 != iParam10 && !unk_0x1C2F771CDC87A3A5(num6, 0))
						{
							if (unk_0xF4244288C3EF3306(uParam0->f_17[i], num6))
							{
								if (unk_0x69799E0840A34AFB(num6) && !unk_0xD2A0543EC400E1A5(num6))
								{
									unk14 = { unk_0xD1A6A821F5AC81DB(num6, 1) };
								
									if (unk14.f_2 < -1f)
										unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 64);
								}
							}
						}
					}
				
					flag2 = true;
				
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
					{
						if (unk_0x27E68848F0E5D7D9(uParam0->f_17[i]))
						{
							num6 = unk_0x6EF03BE64E058E2F(uParam0->f_17[i], 0);
						
							if (!unk_0x1C2F771CDC87A3A5(num6, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
								{
									if (num6 != iParam10)
									{
										if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), num6))
										{
											if (unk_0xDF93B3CFAC96698F(num6) > 5f)
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 4160);
											else
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 64);
										
											flag2 = false;
										}
									}
								}
								else
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
										num11 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								
									if (unk_0xD9F5E1FEFD1329E4(num11, 0))
									{
										if (num6 != num11)
										{
											if (unk_0xDF93B3CFAC96698F(num6) > 5f)
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 4160);
											else
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 64);
										
											flag2 = false;
										}
									}
								}
							}
						}
					}
				
					if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
					{
						unk17 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
					
						if (unk_0xFC8BFE4B41177C22(unk17))
						{
							if (func_42(unk17, uParam0, 0))
							{
								if (func_53(i, uParam0) || !IS_BIT_SET(uParam0->f_13, 27))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[i], i);
									func_16(i, uParam0);
									num4 = num4 + 1;
								
									if (num4 >= num3)
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 27);
								}
							}
							else if (!func_53(i, uParam0))
							{
								if (unk_0x4B423FAA24E8ABF0(unk17) == joaat("sentinel2"))
									unk_0x412B9F2CF0E60079(uParam0->f_17[i], 4);
								else
									unk_0x412B9F2CF0E60079(uParam0->f_17[i], 2);
							
								func_52(i, uParam0);
							}
						}
					}
				
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) && !func_51(uParam0->f_17[i], iParam10) && !func_50(uParam0->f_17[i], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[i], uParam8, bParam11))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
							{
								if (!unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]) && !unk_0xE7895DBF72C7F282(uParam0->f_17[i]) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[i]))
								{
									num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
								
									if (num7 == 7)
										unk_0x974022927CB47E68(uParam0->f_17[i]);
								
									unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
									flag2 = false;
								}
							}
						}
					
						if (flag2)
						{
							if (!unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
							{
								uParam0->f_11 = unk_0x1DD05E817C89C737();
								uParam0->f_1[i] = func_23(uParam0->f_17[i], false, false);
								unk_0xF55F62DA99DB0C2F(uParam0->f_1[i], 2);
							
								if (bParam9)
									func_30(uParam0->f_1[i], uParam0);
							}
						}
					
						flag = false;
					}
					else if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
					{
						if (func_27(uParam0->f_17[i], 1) || func_51(uParam0->f_17[i], iParam10) || bParam12 || unk_0xD9F5E1FEFD1329E4(iParam10, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
							{
								unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
								func_43(unk5[i]);
							}
						}
						else
						{
							if (bParam9)
								func_30(uParam0->f_1[i], uParam0);
						
							flag = false;
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xF4244288C3EF3306(uParam0->f_17[i], iParam10))
						{
							if (unk_0xFAA48325A90263BE(uParam0->f_17[i], iParam10, 20f, 20f, 5f, 0, 1, 0) && !IS_BIT_SET(uParam0->f_13, 11) && !(bParam17 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
							{
								if (unk_0x27E68848F0E5D7D9(uParam0->f_17[i]))
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[i], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[i], 1))
										{
											if (func_26(uParam0->f_17[i]))
											{
												num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
											
												if (num7 == 7)
													unk_0x092B9247AF00F5CF(uParam0->f_17[i], 0, 0);
											}
										}
									}
								}
								else
								{
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
										if (!unk_0xE7895DBF72C7F282(uParam0->f_17[i]) && !unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[i]) && !unk_0x5B702A5D1F2635BE(iParam10))
											unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
								
									num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
								
									if (num7 == 7 && !func_59(uParam0->f_17[i], iParam10))
									{
										if (!unk_0xE7895DBF72C7F282(uParam0->f_17[i]) && !unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D()) && !func_49(uParam0->f_17[i], 2f) && !unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[i], 1);
										
											if (IS_BIT_SET(uParam0->f_13, 10))
												unk_0x4190C67D524CD0DC(uParam0->f_17[i], 1f);
										
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[i], iParam10, 60000, i, 1073741824, 1, 0);
											unk_0x379E96D5D36B27DC(uParam0->f_17[i], 0);
										}
									}
									else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
									{
										uParam0->f_1[i] = func_23(uParam0->f_17[i], false, false);
										unk_0xF55F62DA99DB0C2F(uParam0->f_1[i], 2);
										flag = false;
									}
								}
							}
							else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[i], uParam8, bParam11))
								{
									if (!unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]))
									{
										num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									
										if (num7 == 7)
											unk_0x974022927CB47E68(uParam0->f_17[i]);
									
										unk_0xAAA71DD7E9059338(uParam0->f_17[i], 0);
										unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
									}
								}
							}
						}
						else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 21))
									unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
							}
							else if (IS_BIT_SET(uParam0->f_13, 21))
							{
								unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) && !unk_0x5B702A5D1F2635BE(iParam10))
						{
							unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
				{
					unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
					func_43(unk5[i]);
				}
			}
		}
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
			{
				unk[i] = 1;
				num = num + 1;
			}
		}
	
		if (!func_37(uParam0, 2))
		{
			if (num > 0)
			{
				for (i = 0; i < 3; i = i + 1)
				{
					if (unk[i])
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
						{
							if (func_54(uParam0->f_17[i]) || unk_0xFAA48325A90263BE(uParam0->f_17[i], unk_0x4A8C381C258A124D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								num = num - 1;
								unk[i] = 0;
							}
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
					{
						!unk_0xFAA48325A90263BE(uParam0->f_17[i], unk_0x4A8C381C258A124D(), uParam0->f_8 * 0.85f, uParam0->f_8 * 0.85f, uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[i]);
					}
				}
			}
		
			num5 = unk_0x1DD05E817C89C737();
		
			if (num5 - uParam0->f_11 > 1500 || num3 == 1)
			{
				if (num > 0)
				{
					if (uParam0->f_12 < num)
					{
						if (num == num3 || num2 + num == num3 && num3 > 1)
						{
							if (!IS_BIT_SET(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 5);
								uParam0->f_12 = num;
							}
							else
							{
								uParam0->f_12 = num;
							}
						}
						else
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (unk[i])
								{
									if (!func_48(i, uParam0))
									{
										if (!unk_0xFF692AB7350A74D7(unk9[i]))
										{
											if (!unk_0x1B79E937E91F40C3(unk9[i], ""))
											{
												func_46(uParam0, unk5[i], unk9[i], false);
												func_45(i, uParam0);
												uParam0->f_12 = num;
											}
										}
									
										if (!func_48(i, uParam0))
										{
											func_34(uParam0, unk5[i], false);
											func_45(i, uParam0);
											uParam0->f_12 = num;
										}
									}
									else
									{
										uParam0->f_12 = num;
									}
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
	
		unk_0x8744D2E3FC95740E(&(uParam0->f_13), 10);
	
		if (flag && !flag3)
		{
			for (i = 0; i < 3; i = i + 1)
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
				{
					unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
					func_43(unk5[i]);
				}
			}
		
			func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
			return true;
		}
	}

	return false;
}

void func_45(int iParam0, var uParam1) // Position - 0x3163
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 14);
			break;
	
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 15);
			break;
	
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 16);
			break;
	}

	return;
}

void func_46(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x31AB
{
	if (!bParam3)
		if (!unk_0xFF692AB7350A74D7(uParam1))
			if (!unk_0x1B79E937E91F40C3(uParam1, ""))
				func_47(uParam1, uParam2, 7500, 1);

	uParam0->f_10 = unk_0x1DD05E817C89C737();
	return;
}

void func_47(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x31E4
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
	return;
}

BOOL func_48(int iParam0, var uParam1) // Position - 0x3203
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 14);
	
		case 1:
			return IS_BIT_SET(uParam1->f_13, 15);
	
		case 2:
			return IS_BIT_SET(uParam1->f_13, 16);
	
		default:
		
	}

	return false;
}

BOOL func_49(var uParam0, float fParam1) // Position - 0x3243
{
	var unk;

	if (unk_0x7F420695E3F776FB(uParam0, 0))
	{
		unk = unk_0x6EF03BE64E058E2F(uParam0, 0);
	
		if (!unk_0x1C2F771CDC87A3A5(unk, 0))
			if (unk_0xDF93B3CFAC96698F(unk) > fParam1)
				return true;
	}

	return false;
}

BOOL func_50(var uParam0, int iParam1) // Position - 0x327A
{
	int num;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (!unk_0xD11A63E12F198FDB(uParam0, func_15()))
		{
			num = unk_0x31945A289F1359A1(uParam0);
		
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
				if (unk_0xFAA48325A90263BE(uParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
					if (num == iParam1)
						return true;
		}
	}

	return false;
}

BOOL func_51(var uParam0, int iParam1) // Position - 0x32E1
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
		if (unk_0xFC8BFE4B41177C22(iParam1))
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
				if (unk_0xF4244288C3EF3306(uParam0, iParam1))
					return true;

	return false;
}

void func_52(int iParam0, var uParam1) // Position - 0x3316
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 17);
			break;
	
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 18);
			break;
	
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 19);
			break;
	}

	return;
}

BOOL func_53(int iParam0, var uParam1) // Position - 0x335E
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 17);
	
		case 1:
			return IS_BIT_SET(uParam1->f_13, 18);
	
		case 2:
			return IS_BIT_SET(uParam1->f_13, 19);
	
		default:
		
	}

	return false;
}

BOOL func_54(var uParam0) // Position - 0x339E
{
	var unk;
	var unk2;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
	
		if (unk_0xD9F5E1FEFD1329E4(unk, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0))
			{
				unk2 = unk_0xCDA725BC2F170795(uParam0);
			
				if (unk_0xD9F5E1FEFD1329E4(unk2, 0))
					if (unk == unk2)
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xFAA48325A90263BE(uParam0, unk2, 20f, 20f, 20f, 0, 1, 0))
							return true;
			}
		}
	}

	return false;
}

BOOL func_55(int iParam0, var uParam1) // Position - 0x342B
{
	int num;
	int num2;
	int i;
	var unk;
	var unk2;
	var unk3;

	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("coach"))
		{
			num = 0;
			num2 = 0;
			i = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam1->f_17[i]))
					num = num + 1;
			}
		
			unk = unk_0xFD5C5BBD1FE92BB7(iParam0, 0, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk))
				if (unk == uParam1->f_17[0] || unk == uParam1->f_17[1] || unk == uParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			unk2 = unk_0xFD5C5BBD1FE92BB7(iParam0, 1, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk2))
				if (unk2 == uParam1->f_17[0] || unk2 == uParam1->f_17[1] || unk2 == uParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			unk3 = unk_0xFD5C5BBD1FE92BB7(iParam0, 2, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk3))
				if (unk3 == uParam1->f_17[0] || unk3 == uParam1->f_17[1] || unk3 == uParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			if (num2 < num)
				return true;
		}
	}

	return false;
}

BOOL func_56(var uParam0) // Position - 0x358B
{
	var unk;

	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (func_42(unk, uParam0, 0))
			return true;
	}

	return false;
}

BOOL func_57(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x35BA
{
	var unk;

	if (!unk_0x4FAFF4BCB7633475(uParam1))
	{
		if (unk_0x27E68848F0E5D7D9(uParam1))
		{
			unk = unk_0x6EF03BE64E058E2F(uParam1, 0);
		
			if (!unk_0x1C2F771CDC87A3A5(unk, 0))
				if (unk_0xD9F5E1FEFD1329E4(unk, 0))
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk))
						if (func_56(uParam0))
							return true;
					else if (bParam3)
						return true;
				else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam1, uParam2, uParam2, 3f, 0, 1, 0))
					return true;
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam1, uParam2, uParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				unk = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			
				if (unk_0xFC8BFE4B41177C22(unk))
					if (func_42(unk, uParam0, 0))
						if (unk_0xD9F5E1FEFD1329E4(unk, 0))
							if (func_58(unk))
								return true;
				else
					return true;
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

BOOL func_58(var uParam0) // Position - 0x3698
{
	float num;

	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		num = unk_0xDF93B3CFAC96698F(uParam0);
	
		if (num > -0.5f && num < 0.5f)
			return true;
	}

	return false;
}

BOOL func_59(var uParam0, int iParam1) // Position - 0x36D0
{
	var unk;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			unk = unk_0xCDA725BC2F170795(uParam0);
		
			if (unk == iParam1)
				return true;
		}
	}

	return false;
}

void func_60() // Position - 0x3700
{
	var unk;
	var unk2;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		unk = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
	
		if (unk_0xD9F5E1FEFD1329E4(unk, 0))
		{
			unk2 = unk_0xFD5C5BBD1FE92BB7(unk, 0, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk2))
				if (unk2 != unk_0x4A8C381C258A124D())
					if (unk_0x110821AE6C63DD4F(unk2))
						if (!unk_0x2E0309EF5F2EBDB1(unk2, unk_0x4A8C381C258A124D()))
							unk_0xE67051907958B5EB(unk2, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
		}
	}

	return;
}

void func_61(var uParam0) // Position - 0x376D
{
	int i;

	if (!IS_BIT_SET(uParam0->f_13, 25))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[i]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				{
					unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 32, 0);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 305, 1);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 268, 1);
					unk_0x379E96D5D36B27DC(uParam0->f_17[i], 0);
				}
			}
		}
	
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 25);
	}

	return;
}

void func_62(var uParam0) // Position - 0x380D
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[i]))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
			{
				if (unk_0x27E68848F0E5D7D9(uParam0->f_17[i]))
				{
					unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[i], 0);
					unk_0xD9757FAB956617BA(uParam0->f_17[i], 0);
				}
			}
		}
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 0);
				unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}

	return;
}

char* func_63() // Position - 0x38A3
{
	char* unk;

	return unk;
}

Vector3 func_64() // Position - 0x38AD
{
	var unk;

	return unk;
}

void func_65() // Position - 0x38B9
{
	int i;

	if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_94, 0))
	{
		if (unk_0xC450B06E5AAA0985(iLocal_100))
			unk_0xFE54B8568B2ABD12(&iLocal_100);
	
		if (iLocal_34 <= 2)
		{
			iLocal_78 = unk_0x91C8345B22D52DEC() * ((60 * iLocal_80) + iLocal_81);
			iLocal_78 = iLocal_78 + unk_0x1DD05E817C89C737();
			iLocal_82 = iLocal_78 - (unk_0x91C8345B22D52DEC() * 30);
		}
		else if (iLocal_34 > 6)
		{
			iLocal_78 = unk_0x91C8345B22D52DEC() * ((60 * iLocal_80) + iLocal_81);
			iLocal_78 = iLocal_78 + unk_0x1DD05E817C89C737();
			iLocal_82 = iLocal_78 - (unk_0x91C8345B22D52DEC() * 30);
		}
		else if (iLocal_34 >= 3 && iLocal_34 <= 4)
		{
			uLocal_95 = unk_0x5779387E956077A6(iLocal_87, uLocal_68, fLocal_72, 1, 1, 0);
			iLocal_91[0] = unk_0x8728A378EF2B46B2(uLocal_95, 6, iLocal_85, -1, 1, 1);
			iLocal_91[1] = unk_0x8728A378EF2B46B2(uLocal_95, 6, iLocal_85, 0, 1, 1);
			unk_0x06CD913C241C765E("rghCop", &uLocal_116);
			unk_0xD414C47AFF81382A(4, uLocal_116, joaat("PLAYER"));
			unk_0xBE8796DB2B90A437(iLocal_91[0], 39, 1);
			unk_0xBE8796DB2B90A437(iLocal_91[1], 39, 1);
		
			for (i = 0; i < iLocal_91; i = i + 1)
			{
				unk_0xB41DEC3AAC1AA107(iLocal_91[i], joaat("WEAPON_PISTOL"), -1, 0, 1);
				unk_0x25DBF9F9C6BDFFEA(iLocal_91[i], 100f);
				unk_0x3CEA1FD137ACE2D9(iLocal_91[i], uLocal_116);
			}
		}
	
		iLocal_36 = 2;
	}

	return;
}

void func_66() // Position - 0x39EB
{
	int i;

	if (!unk_0x1C2F771CDC87A3A5(iLocal_94, 0))
	{
		if (func_101() || unk_0x4FAFF4BCB7633475(iLocal_88[0]))
		{
			for (i = 0; i < iLocal_88; i = i + 1)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_88[i]))
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_97[i]))
					{
						uLocal_97[i] = func_10(iLocal_88[i], true, 145);
						unk_0xBE8796DB2B90A437(iLocal_88[i], 1, 0);
						unk_0xB5396F1FB088FE38(&uLocal_118);
						unk_0x092B9247AF00F5CF(0, 0, 0);
						unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x93C0674FC00824D0(uLocal_118);
						unk_0x4BD42B0527065BB6(iLocal_88[i], uLocal_118);
						unk_0xD0557B139A542F12(&uLocal_118);
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_97[i]))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_97[i]);
				}
			}
		}
		else if (!bLocal_77)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_88[0]))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_88[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x13DE13EA38996410(iLocal_88[0], iLocal_94, unk_0x4A8C381C258A124D(), 8, 25f, 786469, -1f, -1f, 1);
					bLocal_77 = true;
				}
			}
		}
	
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_94, 0))
		{
			if (unk_0xC450B06E5AAA0985(iLocal_100))
				unk_0xFE54B8568B2ABD12(&iLocal_100);
		
			func_100(&uLocal_104, 0, 0);
			iLocal_36 = 2;
		}
		else if (unk_0xC39AE5D390581AD5(iLocal_94, -1, 0) || unk_0x4FAFF4BCB7633475(iLocal_88[0]))
		{
			func_100(&uLocal_104, 0, 0);
		}
		else
		{
			func_67();
		}
	}

	return;
}

void func_67() // Position - 0x3B59
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_88[0]) && !unk_0x1C2F771CDC87A3A5(iLocal_94, 0))
		if (unk_0xCECDBB848D53DEB2(iLocal_88[0], iLocal_94, 0))
			func_68(&uLocal_104, iLocal_94, 0, 0, true, true, true);

	return;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3B97
{
	func_69(uParam0, iParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_69(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BB4
{
	func_70(uParam0, iParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_70(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BD2
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		func_100(uParam0, 0, 0);

	uParam0->f_6 = 2;
	func_71(uParam0, iParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_71(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3C0A
{
	char* str;
	BOOL flag;

	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
		if (unk_0x1DD05E817C89C737() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	str = sParam5;

	if (unk_0xFF692AB7350A74D7(str))
		if (!unk_0x76CD105BCAC6EB9F())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (func_99(str))
		func_98();

	if (func_97(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		flag = false;
	
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
		
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
				flag = true;
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
		
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
				flag = true;
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
		
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
				flag = true;
		}
	
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_92(uParam0, bParam7, bParam9, false))
				func_88(uParam0, iParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(str))
				{
					if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(str) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (flag && !unk_0x4C705AAF75363287() && bParam8)
						{
							if (!func_99(str))
							{
								func_75(str, -1);
								uParam0->f_3 = str;
							
								if (unk_0x1B79E937E91F40C3("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, str))
									func_74(true);
							}
						}
					}
				}
			}
			else if (func_76(str))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(str))
				{
					if (unk_0xCB5CAFF0A4A8B74B(iParam1) && flag && !unk_0x4C705AAF75363287() && bParam8)
					{
						if (!func_99(str))
						{
							func_75(str, -1);
							uParam0->f_3 = str;
						
							if (unk_0x1B79E937E91F40C3("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, str))
								func_74(true);
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam5))
				if (func_99(sParam5))
					unk_0x428C32CC68809A35(1);
		
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
						func_100(uParam0, str, 1);
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
						func_100(uParam0, str, 1);
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
						func_100(uParam0, str, 1);
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
						func_100(uParam0, str, 1);
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
						func_100(uParam0, str, 1);
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
					func_100(uParam0, str, 1);
		
			if (!func_92(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_73(uParam0))
					func_72(uParam0);
		}
	}
	else
	{
		func_100(uParam0, str, 0);
	}

	return;
}

void func_72(var uParam0) // Position - 0x3F77
{
	if (func_97(unk_0x4A8C381C258A124D()))
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());

	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
	
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_73(var uParam0) // Position - 0x3FE0
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > unk_0x1DD05E817C89C737())
			return true;
	}

	return false;
}

int func_74(BOOL bParam0) // Position - 0x400F
{
	switch (Global_43377)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113810.f_10052.f_100 = Global_113810.f_10052.f_100 + 1;
		
			return Global_113810.f_10052.f_100;
	
		case 4:
			if (bParam0)
				Global_113810.f_10052.f_101 = Global_113810.f_10052.f_101 + 1;
		
			return Global_113810.f_10052.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113810.f_10052.f_102 = Global_113810.f_10052.f_102 + 1;
		
			return Global_113810.f_10052.f_102;
	
		default:
			break;
	}

	return 3;
}

void func_75(char* sParam0, int iParam1) // Position - 0x40B9
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_76(char* sParam0) // Position - 0x40D0
{
	if (!func_77(true, true, false))
	{
		if (!unk_0xD6F9DEE4765092A9(sParam0) && func_99(sParam0) || func_99("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			unk_0x428C32CC68809A35(1);
	
		return false;
	}

	switch (Global_43377)
	{
		case 0:
		case 3:
			if (func_74(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_74(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_74(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_77(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4169
{
	var unk;
	int num;

	if (bParam0)
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			return false;

	if (bParam2)
		return true;

	if (unk_0x3555462DB47B7AB1())
		return false;

	if (func_87(0))
		return false;

	if (func_86())
		return false;

	if (unk_0xA43CD45F18522E3F())
		return false;

	if (Global_75816)
		return false;

	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
		return false;

	if (Global_60666)
		return false;

	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					return false;
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					return false;
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					return false;
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					return false;
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					return false;
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				return false;
		
			if (unk_0xDD851254D8C7D338())
				return false;
		}
	}

	if (func_85() || func_84(*Global_4718592.f_171044) || func_83())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			num = func_82(unk_0x4A8C381C258A124D(), 0);
		
			if (unk_0x333A2A6253C809D2(unk, num) || unk_0x4B423FAA24E8ABF0(unk) == joaat("apc") && num != -1 || unk_0x4B423FAA24E8ABF0(unk) == joaat("akula") && num != -1 || unk_0x4B423FAA24E8ABF0(unk) == joaat("riot2") && num == 0 && func_81(unk, 10) && unk_0x94C9CD3D66808551(unk, 10) != -1)
				return false;
		}
	}

	if (Global_1962809)
		return false;

	if (func_78(unk_0x259BE71D8A81D4FA()))
		return false;

	return true;
}

BOOL func_78(int iParam0) // Position - 0x43C2
{
	if (iParam0 != func_80())
		if (func_79(iParam0, true, true))
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		else if (Global_1575063 && iParam0 == unk_0x259BE71D8A81D4FA() && func_79(iParam0, true, false))
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;

	return false;
}

BOOL func_79(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4428
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

int func_80() // Position - 0x4488
{
	return -1;
}

BOOL func_81(var uParam0, int iParam1) // Position - 0x4491
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(uParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (unk_0x5B59C12A02157D00(uParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int func_82(var uParam0, int iParam1) // Position - 0x44F3
{
	var unk;
	int num;
	int i;
	int num2;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0x7F420695E3F776FB(uParam0, iParam1))
		{
			unk = unk_0x6EF03BE64E058E2F(uParam0, iParam1);
		
			if (unk_0xFC8BFE4B41177C22(unk))
			{
				num = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(unk));
			
				if (num == 1)
				{
					num2 = -1;
					return num2;
				}
			
				for (i = 0; i < num; i = i + 1)
				{
					num2 = i - 1;
				
					if (!unk_0xC39AE5D390581AD5(unk, num2, 0))
						if (unk_0xFD5C5BBD1FE92BB7(unk, num2, 0) == uParam0)
							return num2;
				}
			}
		}
	}

	return num2;
}

BOOL func_83() // Position - 0x4578
{
	return Global_2683883.f_19;
}

BOOL func_84(int iParam0) // Position - 0x4586
{
	return iParam0 == 51;
}

BOOL func_85() // Position - 0x4593
{
	return Global_2683883.f_18;
}

BOOL func_86() // Position - 0x45A1
{
	return unk_0x1DD05E817C89C737() <= Global_23390.f_6321 + 100;
}

BOOL func_87(int iParam0) // Position - 0x45B6
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

void func_88(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x460D
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;

	if (Global_1581988 == 1)
		return;

	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
		func_100(uParam0, 0, 0);

	if (func_91(uParam2, 0f, 0f, 0f, false))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk = unk_0xBD545F8729E9F413(iParam1);
		
			if (!unk_0x7F420695E3F776FB(unk, 0))
				if (unk_0x501EBB0523078750(unk))
					if (!func_89())
						uParam2 = { 0f, 0f, 1f };
				else if (unk_0xB98B1A5B59BC5065(unk))
					uParam2 = { 0f, 0f, 1f };
		}
	}

	unk_0x0A0A06C514052E80(0);
	num = uParam0->f_9;
	num2 = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (num < 1500)
			num = 1500;
	
		if (num2 < 1500)
			num2 = 1500;
	}

	unk_0x190BA0A3BB48F7FD(iParam1, uParam2, 1, -1, num, num2, iParam5);
	num3 = 2048;
	num4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, num3, num4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_89() // Position - 0x471D
{
	return func_90(unk_0x259BE71D8A81D4FA());
}

BOOL func_90(var uParam0) // Position - 0x472D
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_91(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x474C
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_92(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4793
{
	if (uParam0->f_1)
		if (unk_0x1DD05E817C89C737() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (unk_0x1DD05E817C89C737() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					if (!func_96(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_95(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					uParam0->f_5 = 0;
				else if (!func_96(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (unk_0x1DD05E817C89C737() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
						if (func_94(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_93(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_93(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
						uParam0->f_5 = 0;
					else if (func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_73(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_98();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_93(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4AFF
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
		
			if (unk_0x61C3701AD6D746B2(0, 80))
				return true;
		}
	}

	return false;
}

BOOL func_94(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B51
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
	
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return true;
			}
		}
	}

	return false;
}

BOOL func_95(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B9A
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
		
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
				return true;
		}
	}

	return false;
}

BOOL func_96(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BF9
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
	
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				unk_0x0A0A06C514052E80(0);
				return true;
			}
		}
	}

	return false;
}

BOOL func_97(int iParam0) // Position - 0x4C4F
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
		if (unk_0x55B80B6E7AB61270(iParam0))
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
				return true;
		else if (unk_0x0101C509A6E67F99(iParam0))
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
				return true;
		else if (unk_0xBE79A96C521F4432(iParam0))
			return true;

	return false;
}

void func_98() // Position - 0x4CAA
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8371, 4);
	return;
}

BOOL func_99(char* sParam0) // Position - 0x4CBA
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_100(var uParam0, char* sParam1, int iParam2) // Position - 0x4CCD
{
	char* str;

	if (unk_0x76CD105BCAC6EB9F())
		if (IS_BIT_SET(Global_2794162.f_4697, 26))
			return;

	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}

	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (unk_0xFF692AB7350A74D7(str))
		if (!unk_0x76CD105BCAC6EB9F())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
		if (func_99(uParam0->f_3))
			unk_0x428C32CC68809A35(1);

	if (!unk_0xFF692AB7350A74D7(str))
		if (func_99(str))
			unk_0x428C32CC68809A35(1);

	return;
}

int func_101() // Position - 0x4DA7
{
	if (unk_0xFC8BFE4B41177C22(iLocal_94))
		if (!unk_0x1C2F771CDC87A3A5(iLocal_94, 0))
			if (unk_0x8D91ADE44AC79BC9(iLocal_94) < 300 || unk_0x4C7724D572378B05(iLocal_94) < 200f || unk_0x5B702A5D1F2635BE(iLocal_94) || unk_0x548F6F43A7CB6F45(iLocal_94, 0, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 1, 0) || unk_0x548F6F43A7CB6F45(iLocal_94, 4, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 5, 0) || unk_0x548F6F43A7CB6F45(iLocal_94, 0, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 4, 0) || unk_0x548F6F43A7CB6F45(iLocal_94, 1, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 5, 0))
				return 1;

	return 0;
}

void func_102() // Position - 0x4E5F
{
	int i;
	int j;

	iLocal_94 = func_104(0);

	if (!unk_0xD9F5E1FEFD1329E4(iLocal_94, 0))
	{
		iLocal_94 = unk_0x5779387E956077A6(iLocal_86, uLocal_62, fLocal_71, 1, 1, 0);
	
		for (i = 1; i <= 8; i = i + 1)
		{
			unk_0xD772F6AA66750D2B(iLocal_94, i, 1);
		}
	
		if (iLocal_83 != -1)
			unk_0xD772F6AA66750D2B(iLocal_94, iLocal_83, 0);
	}

	unk_0xDC05A8A020E60C86(iLocal_94, 1);
	iLocal_100 = func_103(iLocal_94, false, false);

	if (iLocal_34 != 5 && iLocal_34 != 6)
	{
		if (iLocal_34 > 6)
		{
			unk_0xD0F1DB0E50B367AD(iLocal_94, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0xBD618A73193F9982(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_94, 0, 0, 0);
		}
	
		func_35(sLocal_101, 7500, 1);
	}
	else
	{
		iLocal_88[0] = unk_0x8728A378EF2B46B2(iLocal_94, 26, iLocal_84, -1, 1, 1);
		iLocal_88[1] = unk_0x8728A378EF2B46B2(iLocal_94, 26, iLocal_84, 0, 1, 1);
		unk_0x06CD913C241C765E("rghCriminal", &uLocal_117);
		unk_0xD414C47AFF81382A(5, uLocal_117, joaat("PLAYER"));
	
		for (j = 0; j < iLocal_88; j = j + 1)
		{
			unk_0xAAA71DD7E9059338(iLocal_88[j], 1);
			unk_0xB41DEC3AAC1AA107(iLocal_88[j], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, 0, 1);
			unk_0x3CEA1FD137ACE2D9(iLocal_88[j], uLocal_117);
		}
	
		unk_0x7C8E9DE09D4AD3FF(iLocal_88[0], iLocal_94, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}

	if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
		uLocal_96 = unk_0xDC8D5832207C2EAD();

	iLocal_36 = 1;
	return;
}

int func_103(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4FB2
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_104(int iParam0) // Position - 0x4FC5
{
	if (unk_0xD9F5E1FEFD1329E4(Global_112519.f_222[iParam0], 0))
	{
		unk_0xEE0BCDB1B5E36BCB(Global_112519.f_222[iParam0], 1, 1);
		return Global_112519.f_222[iParam0];
	}

	return 0;
}

BOOL func_105() // Position - 0x4FFD
{
	if (unk_0xFC8BFE4B41177C22(iLocal_94))
		if (unk_0xD9F5E1FEFD1329E4(iLocal_94, 0))
			if (!unk_0xFAA48325A90263BE(iLocal_94, unk_0x4A8C381C258A124D(), 300f, 300f, 300f, 0, 1, 0))
				return true;
		else
			return true;

	if (unk_0x4FAFF4BCB7633475(iLocal_88[0]))
		if (unk_0xC450B06E5AAA0985(uLocal_97[0]))
			unk_0xFE54B8568B2ABD12(&uLocal_97[0]);

	return false;
}

void func_106() // Position - 0x5065
{
	unk_0xEC9DAA34BBB4658C(iLocal_86);
	unk_0xF2CB0224D3BE0B42("PMDL", 0);

	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		unk_0xEC9DAA34BBB4658C(iLocal_85);
		unk_0xEC9DAA34BBB4658C(iLocal_87);
	}
	else if (iLocal_34 == 5 || iLocal_34 == 6)
	{
		unk_0xEC9DAA34BBB4658C(iLocal_84);
	}

	unk_0xCCA6D8A84EE8C88A(joaat("benson"), 1);
	unk_0xCCA6D8A84EE8C88A(joaat("pony2"), 1);

	if (unk_0x6252BC0DD8A320DB(iLocal_86) && unk_0xDCB78A15E5F495DC(0))
		if (iLocal_34 >= 3 && iLocal_34 <= 4)
			if (unk_0x6252BC0DD8A320DB(iLocal_85) && unk_0x6252BC0DD8A320DB(iLocal_87))
				bLocal_73 = true;
		else if (iLocal_34 == 5 || iLocal_34 == 6)
			if (unk_0x6252BC0DD8A320DB(iLocal_84))
				bLocal_73 = true;
		else if (iLocal_34 > 6)
			if (unk_0xD7E1DF759CD0FFF2("Deliveries", 0, -1))
				bLocal_73 = true;
		else
			bLocal_73 = true;

	return;
}

void func_107() // Position - 0x513F
{
	float num;

	uLocal_62 = { func_109(func_111(), iLocal_34) };
	fLocal_71 = func_108(func_111(), iLocal_34);

	if (iLocal_34 > 6)
	{
		sLocal_101 = "PMDL_TRUCK";
		sLocal_102 = "PMDL_BTIM";
		sLocal_103 = "PMDL_BCKT";
		iLocal_86 = joaat("benson");
		iLocal_83 = 2;
	}

	if (func_111() == 10)
	{
		uLocal_65 = { -1161.2133f, -1567.0677f, 3.4234f };
		iLocal_86 = joaat("pony2");
	
		if (iLocal_34 == 0)
		{
			iLocal_80 = 2;
			iLocal_81 = 15;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 1)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 2)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 3)
		{
			uLocal_68 = { -3121.2615f, 1152.92f, 19.4047f };
			fLocal_72 = 176.4887f;
			iLocal_87 = joaat("police4");
			iLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 == 4)
		{
			uLocal_68 = { 1543.1453f, 2184.3706f, 77.8114f };
			fLocal_72 = 45.3499f;
			iLocal_87 = joaat("police4");
			iLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 >= 5)
		{
			iLocal_84 = joaat("G_M_Y_SalvaGoon_02");
		}
	}
	else if (func_111() == 14)
	{
		uLocal_65 = { -2169.8284f, 4277.365f, 47.9568f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 40f) / 2f);
	}
	else if (func_111() == 13)
	{
		uLocal_65 = { -323.356f, 6264.4307f, 30.4463f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 40f) / 2f);
	}
	else if (func_111() == 12)
	{
		uLocal_65 = { 198.5282f, 342.2399f, 104.9566f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 15f) / 2f);
	}
	else if (func_111() == 11)
	{
		uLocal_65 = { -560.0195f, 301.1481f, 82.1436f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 15f) / 2f);
	}

	iLocal_79 = 0;
	bLocal_74 = true;
	return;
}

float func_108(int iParam0, int iParam1) // Position - 0x536D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
			
				case 1:
					return 177.9306f;
			
				case 2:
					return 49.6978f;
			
				case 3:
					return 336.9449f;
			
				case 4:
					return 80.1639f;
			
				case 5:
					return 287.983f;
			
				case 6:
					return 46.7895f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
			
				case 8:
					return 256.7899f;
			
				case 9:
					return 180.9647f;
			
				case 10:
					return 126.4385f;
			
				case 11:
					return 123.4767f;
			
				case 12:
					return 226.219f;
			
				case 13:
					return 82.6097f;
			}
			break;
	}

	return 0f;
}

Vector3 func_109(int iParam0, int iParam1) // Position - 0x549D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.18756f, 1934.4951f, 194.90749f;
			
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
			
				case 2:
					return 1390.0889f, -605.923f, 73.3378f;
			
				case 3:
					return -3170.0483f, 1098.809f, 19.7817f;
			
				case 4:
					return 1581.2198f, 2194.629f, 78.1062f;
			
				case 5:
					return 1475.8333f, -113.5801f, 141.794f;
			
				case 6:
					return 1603.0708f, -1793.9147f, 89.0179f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
			
				case 8:
					return -1916.1224f, 2060.3132f, 139.7363f;
			
				case 9:
					return 824.8992f, -1064.1921f, 26.9851f;
			
				case 10:
					return -669.6013f, -1198.6638f, 9.6125f;
			
				case 11:
					return -1465.5795f, -390.7494f, 37.5168f;
			
				case 12:
					return 797.7521f, -1793.0078f, 28.3164f;
			
				case 13:
					return 806.319f, -2017.4514f, 28.2215f;
			}
			break;
	}

	return func_110(iParam0);
}

Vector3 func_110(int iParam0) // Position - 0x565E
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
	
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
	
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
	
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
	
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
	
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
	
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
	
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
	
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
	
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
	
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
	
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
	
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
	
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
	
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
	}

	return 10f, 10f, 10f;
}

int func_111() // Position - 0x5811
{
	return Global_112519.f_20;
}

int func_112() // Position - 0x581F
{
	return func_113(Global_112519.f_20, Global_112519.f_29);
}

int func_113(int iParam0, int iParam1) // Position - 0x5837
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				case 6:
					return 6;
			}
			break;
	
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
			
				case 1:
					return 10;
			
				case 2:
					return 11;
			
				case 3:
					return 12;
			
				case 4:
					return 13;
			}
			break;
	
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 7;
			}
			break;
	}

	return 0;
}

void func_114() // Position - 0x593F
{
	unk_0xCCA6D8A84EE8C88A(joaat("benson"), 0);
	unk_0xCCA6D8A84EE8C88A(joaat("pony2"), 0);
	unk_0x59E2E0637E7776F3();

	if (bLocal_75)
	{
		if (!unk_0x1C2F771CDC87A3A5(uLocal_96, 0))
			func_115(uLocal_96, 0, 145);
	
		unk_0xF58D3BBA4A469D70(unk_0x259BE71D8A81D4FA());
		func_100(&uLocal_104, 0, 0);
	}

	unk_0xBBC29EBE6E1A48FA();
	return;
}

int func_115(var uParam0, int iParam1, int iParam2) // Position - 0x598D
{
	var unk;
	var unk2;

	if (iParam1 == 0)
	{
		unk2 = unk_0xED22194AB8539910(uParam0, &unk);
	
		if (!unk_0xD6F9DEE4765092A9(unk2))
			if (unk_0x70E57E9927B6BA58(unk2) == unk_0x70E57E9927B6BA58("vehicle_gen_controller"))
				return 0;
	}

	func_116(uParam0, iParam2);
	return 1;
}

void func_116(var uParam0, int iParam1) // Position - 0x59CD
{
	var unk;
	int i;
	int j;

	if (!func_122(uParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		unk = unk_0xFD5C5BBD1FE92BB7(uParam0, -1, 0);
	
		if (!unk_0xFC8BFE4B41177C22(unk))
			unk = unk_0x6B854773972E76E4(uParam0, -1);
	
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
			if (unk_0x4B423FAA24E8ABF0(uParam0) == Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(uParam0), &(Global_113810.f_32752.f_5038[i /*157*/][j /*78*/].f_1)))
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
		if (unk_0x4B423FAA24E8ABF0(uParam0) == Global_113810.f_32752.f_5600[i /*78*/].f_66)
			if (!unk_0xD6F9DEE4765092A9(&(Global_113810.f_32752.f_5600[i /*78*/].f_1)))
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(uParam0), &(Global_113810.f_32752.f_5600[i /*78*/].f_1)))
					Global_113810.f_32752.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113810.f_32752.f_5590 = iParam1;
	Global_78384 = uParam0;
	Global_113810.f_32752.f_5588 = 1;
	func_117(uParam0, &(Global_113810.f_32752.f_5510));
	return;
}

void func_117(var uParam0, var uParam1) // Position - 0x5BCF
{
	int i;

	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		func_121(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(uParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(uParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(uParam0);
		unk_0xFF4B16F297D9CB3E(uParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(uParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(uParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(uParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(uParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(uParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(uParam0);
		unk_0x04434FA56DED5500(uParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(uParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (unk_0xF1B79038130E3C08(uParam0, 2))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
	
		if (unk_0xF1B79038130E3C08(uParam0, 3))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
	
		if (unk_0xF1B79038130E3C08(uParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
	
		if (unk_0xF1B79038130E3C08(uParam0, 1))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (unk_0x7943BD10E2A03FAC(uParam0, 0))
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(uParam0);
	
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(uParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(uParam0))
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
	
		if (!unk_0xE6BE8A525BA6BD44(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
	
		if (unk_0xFDA2576D37032738(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
	
		if (unk_0xA9D64A14804D119B(uParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(uParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (unk_0x2C0B2BB7913E8DBA(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
	
		func_119(&uParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (unk_0x5318DF85BEB6B95F(uParam0, i + 1))
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_118(i + 1));
		}
	
		if (unk_0x0BCE48C8677F9824(uParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
	
		if (unk_0xD130E7CDEE903624(uParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(uParam0, "IgnoredByQuickSave"))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
	}

	return;
}

int func_118(int iParam0) // Position - 0x5E7A
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

int func_119(var uParam0, var uParam1, var uParam2) // Position - 0x5F2A
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

BOOL func_120(int iParam0) // Position - 0x611D
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

void func_121(var uParam0) // Position - 0x613D
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

BOOL func_122(var uParam0) // Position - 0x61ED
{
	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0) || func_141(uParam0, 0, false) || func_141(uParam0, 1, false) || func_141(uParam0, 2, false) || func_140(uParam0) != 145 || func_139(uParam0) || func_138(uParam0) || func_137(uParam0) || func_136(uParam0) || !func_123(unk_0x4B423FAA24E8ABF0(uParam0)))
	{
		func_138(uParam0);
		func_138(uParam0);
		func_141(uParam0, 0, false);
		func_141(uParam0, 1, false);
		func_141(uParam0, 2, false);
		func_140(uParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_123(int iParam0) // Position - 0x62CA
{
	if (iParam0 == 0)
		return false;

	if (!func_124(iParam0, false, -1))
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

BOOL func_124(int iParam0, BOOL bParam1, int iParam2) // Position - 0x647C
{
	int i;
	var unk;

	if (iParam0 == 0)
		return false;

	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
		return false;

	if (iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("blimp2") || iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F())
	{
		if (!func_135())
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
		if (!func_134() && !func_133() && !func_132() && !func_131() && !func_135())
			return false;

	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion"))
	{
		if (func_130() || unk_0x761778199FE1211C() || func_129())
		{
		}
		else if (!func_132())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_127(iParam0, iParam2))
			return false;

	if (!func_125(iParam0))
		return false;

	return true;
}

BOOL func_125(int iParam0) // Position - 0x65FE
{
	int num;
	var unk;
	var unk2;

	if (!func_126())
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

BOOL func_126() // Position - 0x66CA
{
	if (unk_0x761778199FE1211C())
		return unk_0xC18CB5D7A27A2E00();

	return false;
}

BOOL func_127(int iParam0, int iParam1) // Position - 0x66E1
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
	else if (iParam0 == func_128(true))
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

int func_128(BOOL bParam0) // Position - 0xB8B9
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

BOOL func_129() // Position - 0xB8D3
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

BOOL func_130() // Position - 0xB8E9
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

BOOL func_131() // Position - 0xB8FF
{
	return false;
}

BOOL func_132() // Position - 0xB908
{
	return true;
}

BOOL func_133() // Position - 0xB911
{
	return true;
}

BOOL func_134() // Position - 0xB91A
{
	if (unk_0x087611B922B50F13(-1226939934))
		return true;

	return false;
}

BOOL func_135() // Position - 0xB933
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

BOOL func_136(var uParam0) // Position - 0xB9EB
{
	int num;
	var unk;

	num = unk_0x4B423FAA24E8ABF0(uParam0);
	unk = unk_0xCA7159F2C5FF745A(uParam0);

	if (num == joaat("speedo") && unk_0x1B79E937E91F40C3(unk, "LAMAR G "))
		return true;

	if (!func_124(num, false, -1))
		return true;

	return false;
}

BOOL func_137(var uParam0) // Position - 0xBA32
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98174[i]))
			if (Global_98174[i] == uParam0)
				return true;
	}

	return false;
}

BOOL func_138(var uParam0) // Position - 0xBA6D
{
	int i;

	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98144[i]) && unk_0xD9F5E1FEFD1329E4(Global_98144[i], 0))
				if (Global_98144[i] == uParam0 && unk_0x4B423FAA24E8ABF0(Global_98144[i]) == unk_0x4B423FAA24E8ABF0(uParam0))
					return true;
		}
	}

	return false;
}

BOOL func_139(var uParam0) // Position - 0xBAE9
{
	int i;

	if (unk_0xFC8BFE4B41177C22(Global_77479.f_484[24]))
		if (uParam0 == Global_77479.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_77479.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (uParam0 == Global_77479.f_484[i])
					return true;
	}

	return false;
}

int func_140(var uParam0) // Position - 0xBBD1
{
	int i;

	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return 145;

	if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98144[i]))
			if (Global_98144[i] == uParam0)
				return Global_98154[i];
	}

	return 145;
}

BOOL func_141(var uParam0, int iParam1, BOOL bParam2) // Position - 0xBC34
{
	int i;
	var unk;
	int num;

	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return false;

	for (i = 0; func_142(iParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113810.f_7232[num], 0))
			if (unk_0xFE448E8C2209CA31(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_142(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xBCA2
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

void func_143(int iParam0) // Position - 0xBD7A
{
	Global_112519.f_22 = iParam0;
	return;
}

