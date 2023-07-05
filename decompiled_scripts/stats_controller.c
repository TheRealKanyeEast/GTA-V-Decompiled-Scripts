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
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	BOOL bLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
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
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_52 = 2;
	unk_0x51CC1333A10C4E09();

	if (unk_0x96CFB880BAC634CE(32))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		func_106();
	
		switch (iLocal_53)
		{
			case 0:
				func_101();
				break;
		
			case 1:
				func_92();
				func_2();
				Global_98097 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xCC
{
	iLocal_53 = 0;
	return;
}

void func_2() // Position - 0xD7
{
	int num;
	BOOL flag;
	int i;
	int num2;
	int num3;
	int num4;
	var unk;
	int num5;
	int num6;
	var unk2;
	var unk3;
	int num7;
	int j;
	BOOL flag2;
	int num8;
	int num9;
	BOOL flag3;

	if (bLocal_59)
		bLocal_59 = false;
	else
		iLocal_54 = iLocal_54 + 1;

	bLocal_58 = false;

	if (unk_0x76CD105BCAC6EB9F())
		num = 3;
	else
		num = func_87();

	if (num != iLocal_57)
	{
		iLocal_57 = num;
		bLocal_58 = true;
		bLocal_65 = false;
		bLocal_66 = false;
		bLocal_73 = false;
		bLocal_79 = false;
	}

	if (iLocal_57 == 145)
		return;

	flag = false;

	if (iLocal_54 == 6 && func_86(64) || iLocal_54 == 5 && unk_0x486FF5D06E9659F1(joaat("pilot_school")) > 0)
	{
		flag = true;
		bLocal_59 = true;
	}

	func_80();

	if (Global_98095 || Global_98096 && !func_77(0))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				func_76(iLocal_57, i);
			}
		
			Global_98095 = false;
		}
	}

	if (!flag)
	{
		if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || !unk_0x76CD105BCAC6EB9F() && !func_75(iLocal_57) || unk_0x3555462DB47B7AB1() || func_74() || unk_0xFD216000DC314A92() || unk_0x15CCE8886267624F() || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || Global_78687 || Global_98097 || bLocal_60)
		{
			bLocal_81 = true;
			iLocal_82 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_83 = unk_0x7E3F74F641EE6B27();
		
			return;
		}
	
		if (bLocal_81)
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_82 > &func_11 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_83, &func_11)))
				bLocal_81 = false;
			else
				return;
	}

	if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_55 > 2000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_56, 2000)) || bLocal_58)
	{
		if (iLocal_54 >= 8)
		{
			iLocal_54 = 0;
			iLocal_55 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_56 = unk_0x7E3F74F641EE6B27();
		}
	
		num7 = 1;
	
		if (bLocal_58)
			num7 = 8;
	
		for (j = 0; j < num7; j = j + 1)
		{
			flag2 = true;
		
			if (bLocal_58)
				num6 = j;
			else
				num6 = iLocal_54;
		
			func_73(iLocal_57, num6, &unk, &num5);
		
			if (unk_0x76CD105BCAC6EB9F())
				num2 = func_72(num5, -1);
			else if (num6 == 0)
				num2 = Global_113810.f_2366.f_539.f_2387[iLocal_57];
			else
				unk_0xDF7F16323520B858(unk, &num2, -1);
		
			num4 = num2;
			num2 = func_71(num2, 0, 100);
		
			if (func_58(iLocal_57, num6, num2, &num3))
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_56(num5, num3, -1, 1);
				}
				else if (num6 == 0)
				{
					if (Global_113810.f_2366.f_539.f_2387[iLocal_57] == 0)
						flag2 = false;
				
					Global_113810.f_2366.f_539.f_2387[iLocal_57] = num3;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, num3, 1);
				}
			
				if (num3 > func_54(iLocal_57, num6, -1))
				{
					if (unk_0x76CD105BCAC6EB9F())
						if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
							flag2 = false;
					else if (!Global_113810.f_9088 && !func_53(false) || !IS_BIT_SET(Global_113810.f_9088.f_2[27 /*3*/], 2))
						flag2 = false;
				
					num8 = num3;
					num9 = num8 - (num8 % func_52(iLocal_57, num6));
				
					if (num8 % func_52(iLocal_57, num6) >= 0)
						num9 = num9 + func_52(iLocal_57, num6);
				
					if (num8 >= num9)
						num8 = num9;
					else
						num8 = num9 - func_52(iLocal_57, num6);
				
					if (num3 > num8)
						flag2 = false;
				
					if (func_46())
						flag2 = false;
				
					if (flag2)
					{
						if (!bLocal_58)
						{
							if (unk_0x76CD105BCAC6EB9F())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0x4C705AAF75363287() && func_9())
									{
										func_8("STAT_HELP2" /*~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game.*/, -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
						
							bLocal_60 = true;
							iLocal_63 = num3 - num2;
							iLocal_63 = iLocal_63 + (num2 % func_52(iLocal_57, num6));
							iLocal_64 = num3;
							iLocal_61 = iLocal_57;
							iLocal_62 = num6;
						}
					}
				
					if (num3 >= 100)
					{
						if (func_3(iLocal_57, num6, &unk2))
						{
							if (iLocal_57 == 0)
							{
								unk_0xDF7F16323520B858(joaat("SP0_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (iLocal_57 == 1)
							{
								unk_0xDF7F16323520B858(joaat("SP1_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (iLocal_57 == 2)
							{
								unk_0xDF7F16323520B858(joaat("SP2_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else
							{
								iLocal_57 == 3;
							}
						}
					}
				}
			
				func_76(iLocal_57, num6);
			}
			else if (num3 < num4)
			{
				flag3 = true;
			
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_56(num5, num3, -1, 1);
				}
				else if (num6 == 0)
				{
					Global_113810.f_2366.f_539.f_2387[iLocal_57] = num3;
					flag3 = false;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, num3, 1);
				}
			
				if (flag3)
					func_76(iLocal_57, num6);
			}
		}
	}
	else
	{
		bLocal_59 = true;
	}

	return;
}

BOOL func_3(int iParam0, int iParam1, var uParam2) // Position - 0x5CA
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7B2
{
	int num;

	num = func_5(iParam0, iParam2);

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, iParam3);

	return;
}

int func_5(int iParam0, int iParam1) // Position - 0x7D5
{
	return unk_0xD69CE161FE614531(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x7EA
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
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

int func_7() // Position - 0x81E
{
	return Global_1574918;
}

void func_8(char* sParam0, int iParam1) // Position - 0x82A
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_9() // Position - 0x841
{
	var unk;

	unk = unk_0x8034325BF6D6E41F();

	if (Global_1936068 == unk)
	{
		return Global_1936069;
	}
	else
	{
		Global_1936068 = unk;
		Global_1936069 = false;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
			return false;

	if (unk_0xC5D15A335232A15D() && unk_0xBE259DBA45F2996E() && !func_44(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_1936070 == 1)
		return false;

	if (Global_1935879 == 1)
		return false;

	if (func_43())
		return false;

	if (unk_0xB2E86D4871B30979())
		return false;

	if (Global_1836586 == 1)
		return false;

	if (unk_0xF6D8C7059C3C2495())
		return false;

	if (Global_1057410)
		return false;

	if (IS_BIT_SET(Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_863, 16))
		return false;

	if (func_42())
		return false;

	if (func_41())
		return false;

	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2697074, 300000, false) == 1)
				{
					func_36(&Global_2697072);
					func_34(3, -1);
				}
				else if (func_37(&Global_2697072, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (unk_0x0721B5D4CF3ACD02())
		return false;

	if (unk_0x4D9174D8796EA622())
		return false;

	if (unk_0x5EA7A06A1491D450())
		if (func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_SNIPERRIFLE") || func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (unk_0x15CCE8886267624F())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (unk_0x7B035E8A1D320F1B(19))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_863, 2))
		return false;

	if (Global_1836377)
		return false;

	if (Global_1836381)
		return false;

	if (Global_1836383)
		return false;

	if (Global_2672524.f_3694.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2794162.f_4069)
		return false;

	if (Global_2672524.f_3560)
		return false;

	if (!func_19(unk_0x259BE71D8A81D4FA(), true, false))
		return false;

	if (func_18(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_2672524.f_3694.f_39 == true)
		return false;

	if (Global_2684820.f_2846.f_26 == 1)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (unk_0x7B035E8A1D320F1B(16))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (unk_0x3273F980CC5E02CD())
		if (func_12("FHU_HELP3" /*Shout through your headset to make the store clerk fill the bag with cash faster.*/))
			return false;

	if (IS_BIT_SET(Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_863, 6))
		return false;

	if (func_10(unk_0x259BE71D8A81D4FA()))
		return false;

	Global_1936069 = true;
	return true;
}

BOOL func_10(int iParam0) // Position - 0xB91
{
	if (iParam0 != func_11())
		return IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_366, 26);

	return false;
}

int func_11() // Position - 0xBB8
{
	return -1;
}

BOOL func_12(char* sParam0) // Position - 0xBC1
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

BOOL func_13() // Position - 0xBD4
{
	return Global_2672524.f_1685.f_701 != 0;
}

BOOL func_14() // Position - 0xBE8
{
	return Global_2672524.f_2838.f_582;
}

BOOL func_15() // Position - 0xBFA
{
	return func_16();
}

BOOL func_16() // Position - 0xC06
{
	return Global_1649067.f_40 == 3;
}

BOOL func_17(BOOL bParam0) // Position - 0xC16
{
	if (bParam0)
		return Global_23251.f_4 && Global_23251.f_104 == 4;

	return Global_23251.f_4;
}

BOOL func_18(int iParam0) // Position - 0xC3F
{
	return IS_BIT_SET(Global_1890739[iParam0 /*138*/].f_14, 0);
}

BOOL func_19(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC53
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

BOOL func_20() // Position - 0xCB3
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0xCD0
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

BOOL func_22() // Position - 0xD27
{
	return Global_1654054.f_112;
}

BOOL func_23() // Position - 0xD35
{
	return Global_2672524.f_2514[0 /*80*/].f_1 != 0;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xD4B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1654054.f_137[iParam1])
					return true;
			
				if (Global_1654054.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1654054.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1654054.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xDB1
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

int func_26(var uParam0) // Position - 0xDE9
{
	int unk;

	unk_0x23B29877D0BE9547(uParam0, &unk, 1);
	return unk;
}

BOOL func_27() // Position - 0xDFD
{
	return Global_2683883.f_692;
}

BOOL func_28() // Position - 0xE0C
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

BOOL func_29() // Position - 0xE1D
{
	return Global_2683883.f_691;
}

BOOL func_30() // Position - 0xE2C
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Position - 0xE4E
{
	return Global_1574632.f_18;
}

BOOL func_32() // Position - 0xE5C
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

BOOL func_33() // Position - 0xE7E
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, int iParam1) // Position - 0xE98
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_7();

	if (unk_0x76CA59C648318506() == 0)
		return;

	switch (iParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, iParam1);
			num2 = func_35(iParam1);
			num = unk_0x38640D2193CB547F(num2);
			break;
	
		default:
			num2 = func_35(iParam1);
			num = unk_0x38640D2193CB547F(num2);
		
			if (!IS_BIT_SET(num, iParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&num, iParam0);
				unk_0x1A169A00A9C3A74E(num, iParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_56(1304, 0, iParam1, 1);
			func_56(7236, 0, iParam1, 1);
			break;
	}

	return;
}

int func_35(int iParam0) // Position - 0xF79
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_7();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

void func_36(var uParam0) // Position - 0xFDC
{
	uParam0->f_1 = 0;
	return;
}

int func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0xFE9
{
	if (iParam1 == -1)
		return 1;

	func_38(uParam0, bParam2, false);

	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}

	return 0;
}

void func_38(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1053
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

BOOL func_39(int iParam0, int iParam1) // Position - 0x1098
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_7();

	num = func_35(iParam1);
	num2 = unk_0x38640D2193CB547F(num);
	return IS_BIT_SET(num2, iParam0);
}

BOOL func_40() // Position - 0x10C1
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

BOOL func_41() // Position - 0x1179
{
	return Global_1575063;
}

BOOL func_42() // Position - 0x1185
{
	return Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_192 != 0;
}

BOOL func_43() // Position - 0x119C
{
	return Global_2765083;
}

BOOL func_44(int iParam0) // Position - 0x11A8
{
	return IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_3, 13);
}

int func_45(int iParam0, int iParam1) // Position - 0x11C1
{
	int num;
	int num2;

	num = func_5(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(num, &num2, -1))
		return num2;

	return 0;
}

BOOL func_46() // Position - 0x11E5
{
	if (!func_50(true))
		return false;

	if (func_47())
		return false;

	return Global_1948427;
}

BOOL func_47() // Position - 0x1209
{
	return func_48(unk_0x259BE71D8A81D4FA());
}

BOOL func_48(int iParam0) // Position - 0x1219
{
	if (func_49(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10 != func_11())
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;

	return false;
}

BOOL func_49(int iParam0) // Position - 0x124E
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_50(BOOL bParam0) // Position - 0x1270
{
	return func_51(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_51(int iParam0, BOOL bParam1) // Position - 0x1282
{
	if (!func_49(iParam0))
		return false;

	if (!bParam1)
		if (func_48(iParam0))
			return false;

	return Global_1895156[iParam0 /*609*/].f_10 != func_11();
}

int func_52(int iParam0, int iParam1) // Position - 0x12BB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

BOOL func_53(BOOL bParam0) // Position - 0x14CB
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78938, 0);
}

int func_54(int iParam0, int iParam1, int iParam2) // Position - 0x14F3
{
	if (!unk_0x76CD105BCAC6EB9F())
		if (func_55(14))
			return 100;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(1225, iParam2);
			
				case 3:
					return func_72(1231, iParam2);
			
				case 2:
					return func_72(1227, iParam2);
			
				case 4:
					return func_72(1230, iParam2);
			
				case 5:
					return func_72(1229, iParam2);
			
				case 6:
					return func_72(1226, iParam2);
			
				case 7:
					return func_72(1228, iParam2);
			}
			break;
	}

	return 0;
}

BOOL func_55(int iParam0) // Position - 0x1739
{
	return Global_43377 == iParam0;
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1747
{
	int num;

	num = func_57(iParam0, iParam2);

	if (num != 0)
		unk_0x1164A75E490C27B6(num, iParam1, iParam3);

	return;
}

int func_57(int iParam0, int iParam1) // Position - 0x176A
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(iParam1));
}

BOOL func_58(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x177F
{
	*uParam3 = func_59(iParam0, iParam1, false, -1);

	if (*uParam3 > iParam2)
		return true;

	return false;
}

int func_59(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x17A1
{
	float value;
	float num;
	int num2;
	int value2;
	int num3;
	int num4;
	int value3;
	int i;
	int num5;
	int num6;
	int num7;
	int num8;
	float num9;

	num2 = 0;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (iParam0 == 3)
			{
				value = SYSTEM::TO_FLOAT(func_72(64, iParam3));
			}
			break;
	
		case 1:
			if (iParam0 == 0)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_RUNNING"), &num, -1);
				value = (num - Global_113810.f_2366.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 1)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_RUNNING"), &num, -1);
				value = (num - Global_113810.f_2366.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 2)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_RUNNING"), &num, -1);
				value = (num - Global_113810.f_2366.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 3)
			{
				value = func_69(20, iParam3) / 175f;
				func_66(&value);
			}
		
			if (iParam0 == 0)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_SWIMMING")));
			}
			else if (iParam0 == 1)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_SWIMMING")));
			}
			else if (iParam0 == 2)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_SWIMMING")));
			}
			else if (iParam0 == 3)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(func_57(50, iParam3)));
				func_66(&value);
			}
		
			if (iParam0 == 0)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 1)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 2)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 3)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(func_57(47, iParam3)));
				func_66(&value);
			}
		
			if (iParam0 == 3)
				value = value + (4f * Global_262145.f_24515 * (float)func_72(7237, -1));
		
			if (iParam0 == 3)
				value = value * 0.25f;
			break;
	
		case 3:
			if (iParam0 == 0)
			{
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 1)
			{
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 2)
			{
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 3)
			{
				value = SYSTEM::TO_FLOAT(func_64(func_57(52, iParam3))) / 30f;
				func_66(&value);
			}
			break;
	
		case 2:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("SP0_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("SP1_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("SP2_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 3)
			{
				value = SYSTEM::TO_FLOAT(func_72(1500, iParam3)) / 20f;
				func_66(&value);
			}
			break;
	
		case 4:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("SP0_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("SP1_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("SP2_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 3)
			{
				value = value + (float)func_72(113, iParam3) / 50;
				func_66(&value);
			}
			break;
	
		case 5:
			if (iParam0 == 0)
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 1)
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 2)
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 3)
				value = SYSTEM::TO_FLOAT(func_65(func_57(43, iParam3))) / 10f;
		
			if (iParam0 == 0)
				value = value + (SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 1)
				value = value + (SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 2)
				value = value + (SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 3)
				value = value + (SYSTEM::TO_FLOAT(func_65(func_57(45, iParam3))) / 10f);
		
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("SP0_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("SP1_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("SP2_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (iParam0 == 3)
			{
				value = value + (float)func_72(61, iParam3);
				func_66(&value);
			}
		
			if (iParam0 == 3)
				if (IS_BIT_SET(Global_1574994, 15))
					value = 100f;
		
			if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2)
			{
				num3 = func_63(iParam0, 0);
			
				if (iParam0 == 2)
					if (num3 == 3)
						value = value + 10f;
					else if (num3 == 2)
						value = value + 7f;
					else if (num3 == 1)
						value = value + 5f;
				else if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 1);
			
				if (iParam0 == 2)
					if (num3 == 3)
						value = value + 10f;
					else if (num3 == 2)
						value = value + 7f;
					else if (num3 == 1)
						value = value + 5f;
				else if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 2);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 3);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 6);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 4);
			
				if (num3 == 3)
					value = value + 5f;
				else if (num3 == 2)
					value = value + 3f;
				else if (num3 == 1)
					value = value + 2f;
			
				num3 = func_63(iParam0, 5);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 7);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 8);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_63(iParam0, 11);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			}
			break;
	
		case 7:
			if (iParam0 == 0)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_WALK_ST"), &num, -1);
				value = (num - Global_113810.f_2366.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 1)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_WALK_ST"), &num, -1);
				value = (num - Global_113810.f_2366.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 2)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_WALK_ST"), &num, -1);
				value = (num - Global_113810.f_2366.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 3)
			{
				value = func_69(19, iParam3) / 45f;
			}
		
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("SP0_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("SP1_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("SP2_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_113810.f_2366.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 3)
			{
				value2 = func_72(34, iParam3);
				value = value + ((SYSTEM::TO_FLOAT(value2) / 2f) * 1.5f);
				func_66(&value);
			}
			break;
	
		case 6:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("SP0_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP0_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_113810.f_2366.f_539.f_2375[iParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_113810.f_2366.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("SP1_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP1_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_113810.f_2366.f_539.f_2375[iParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_113810.f_2366.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("SP2_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP2_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_113810.f_2366.f_539.f_2375[iParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_113810.f_2366.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 3)
			{
				value3 = func_72(172, iParam3);
				value = value + (SYSTEM::TO_FLOAT(value3) / 80f);
			}
		
			if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2)
			{
				for (i = 0; i < 22; i = i + 1)
				{
					switch (func_62(i, iParam0))
					{
						case 3:
							num5 = num5 + 1;
							break;
					
						case 2:
							num6 = num6 + 1;
							break;
					
						case 1:
							num7 = num7 + 1;
							break;
					}
				}
			
				value = value + (float)num5 * 3;
				value = value + (float)num6 * 2;
				value = value + (float)num7 * 1;
			}
			else if (iParam0 == 3)
			{
				value = value + (float)func_61(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_66(&value);
			}
			break;
	}

	if (iParam1 != 0)
	{
		num8 = func_54(iParam0, iParam1, iParam3);
		value = value + (float)num8;
		value = value + (float)func_60(iParam0, iParam1, iParam3);
	}

	if (bParam2)
	{
		num9 = value - (value % (float)func_52(iParam0, iParam1));
	
		if (value % (float)func_52(iParam0, iParam1) >= 0f)
			num9 = num9 + (float)func_52(iParam0, iParam1);
	
		if (value >= num9)
			value = num9;
		else
			value = num9 - (float)func_52(iParam0, iParam1);
	}

	num2 = SYSTEM::FLOOR(value);
	num2 = func_71(num2, 0, 100);
	return num2;
}

int func_60(int iParam0, int iParam1, int iParam2) // Position - 0x24C4
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113810.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0];
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(72, iParam2);
			
				case 3:
					return func_72(74, iParam2);
			
				case 2:
					return func_72(73, iParam2);
			
				case 4:
					return func_72(75, iParam2);
			
				case 5:
					return func_72(76, iParam2);
			
				case 6:
					return func_72(77, iParam2);
			
				case 7:
					return func_72(78, iParam2);
			}
			break;
	}

	return 0;
}

int func_61(int iParam0) // Position - 0x25D1
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDF7F16323520B858(num, &num2, -1))
		return num2;

	return 0;
}

int func_62(int iParam0, int iParam1) // Position - 0x25EF
{
	return Global_113810.f_19150[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_63(int iParam0, int iParam1) // Position - 0x260B
{
	if (iParam0 < 0 || iParam0 > 2)
		return 0;

	return Global_113810.f_1991[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_64(int iParam0) // Position - 0x2639
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 86400);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 3600);
	num = num + (unk_0xE44C8536D6F264FC(iParam0) * 60);
	num = num + unk_0x77A7B5685F038D01(iParam0);
	return num;
}

int func_65(int iParam0) // Position - 0x267C
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 1440);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 60);
	num = num + unk_0xE44C8536D6F264FC(iParam0);
	return num;
}

var func_66(var uParam0) // Position - 0x26AF
{
	if (func_46())
	{
		if (func_67() < Global_262145.f_13343)
			if (*uParam0 + ((float)func_67() * Global_262145.f_13342) <= (float)Global_262145.f_13352)
				*uParam0 = *uParam0 + ((float)func_67() * Global_262145.f_13342);
	
		return *uParam0;
	}

	return *uParam0;
}

int func_67() // Position - 0x2709
{
	if (func_50(true))
		return Global_1853988[func_68() /*867*/].f_205.f_6;

	return 0;
}

int func_68() // Position - 0x272F
{
	return Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10;
}

float func_69(int iParam0, int iParam1) // Position - 0x2744
{
	var unk;
	float num;

	unk = func_70(iParam0, iParam1);

	if (unk_0x2F0966A034F5ADC6(unk, &num, -1))
		return num;

	return 0f;
}

var func_70(int iParam0, int iParam1) // Position - 0x2768
{
	return unk_0xD69CE161FE614531(1, iParam0, func_6(iParam1));
}

int func_71(int iParam0, int iParam1, int iParam2) // Position - 0x277D
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_72(int iParam0, int iParam1) // Position - 0x27A2
{
	var unk;
	int num;

	if (iParam0 != 14385)
	{
		unk = func_57(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void func_73(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x27D1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

BOOL func_74() // Position - 0x2A28
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98291.f_44 == 1;

	return false;
}

BOOL func_75(int iParam0) // Position - 0x2A44
{
	return iParam0 < 3;
}

void func_76(int iParam0, int iParam1) // Position - 0x2A50
{
	int value;
	float num;
	var unk;
	int num2;

	if (iParam0 != 0 || iParam0 != 1 || iParam0 != 2 || iParam0 != 3)
		return;

	func_73(iParam0, iParam1, &unk, &num2);

	if (unk_0x76CD105BCAC6EB9F())
		value = func_72(num2, -1);
	else
		unk_0xDF7F16323520B858(unk, &value, -1);

	switch (iParam1)
	{
		case 2:
			num = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(value) / 100f));
			unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), num, 1);
			break;
	
		case 7:
			if (unk_0x486FF5D06E9659F1(joaat("armenian3")) != 0 || unk_0x486FF5D06E9659F1(joaat("trevor3")) != 0)
			{
				Global_98096 = true;
			}
			else
			{
				num = 1f - (SYSTEM::TO_FLOAT(value) / 100f);
				unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), num);
				unk_0x92F9E3A242F41E98(unk_0x259BE71D8A81D4FA(), num);
				unk_0x048D90B19F701DC3(unk_0x259BE71D8A81D4FA(), num);
			}
			break;
	}

	return;
}

BOOL func_77(int iParam0) // Position - 0x2B3C
{
	if (Global_43377 == 15)
		return false;

	if (func_78(iParam0))
		return false;

	return true;
}

BOOL func_78(int iParam0) // Position - 0x2B5E
{
	return func_79(iParam0, Global_43377);
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x2B6F
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

void func_80() // Position - 0x2D50
{
	var unk;
	int num;

	num = 0;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (unk_0xFC8BFE4B41177C22(unk) && unk_0xD9F5E1FEFD1329E4(unk, 0) && unk_0xFD5C5BBD1FE92BB7(unk, -1, 0) == unk_0x4A8C381C258A124D() && unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(unk)))
			num = 1;
	}

	func_85(&unk, &num);
	func_84(&unk, &num);
	func_81();
	return;
}

void func_81() // Position - 0x2DEF
{
	int num;
	int value;
	int num2;

	if (!bLocal_79)
	{
		if (iLocal_57 == 3)
		{
			if (Global_2359296[func_83() /*5568*/].f_681.f_7)
			{
				iLocal_76 = func_64(func_57(148, -1));
				Global_2359296[func_83() /*5568*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_76 = Global_2359296[func_83() /*5568*/].f_681.f_6;
			}
		
			if (Global_2359296[func_83() /*5568*/].f_681.f_4 == 0)
				Global_2359296[func_83() /*5568*/].f_681.f_4 = unk_0x39D1D336459711BE();
		
			iLocal_78 = Global_2359296[func_83() /*5568*/].f_681.f_4;
			iLocal_77 = Global_2359296[func_83() /*5568*/].f_681.f_5;
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_2292[iLocal_57])
			{
				switch (iLocal_57)
				{
					case 0:
						iLocal_76 = func_64(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case 1:
						iLocal_76 = func_64(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case 2:
						iLocal_76 = func_64(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_113810.f_2366.f_539.f_2292[iLocal_57] = false;
			}
			else
			{
				iLocal_76 = Global_113810.f_2366.f_539.f_2288[iLocal_57];
			}
		
			if (Global_113810.f_2366.f_539.f_2280[iLocal_57] == 0)
				Global_113810.f_2366.f_539.f_2280[iLocal_57] = unk_0x39D1D336459711BE();
		
			iLocal_78 = Global_113810.f_2366.f_539.f_2280[iLocal_57];
			iLocal_77 = Global_113810.f_2366.f_539.f_2284[iLocal_57];
		}
	
		bLocal_79 = true;
		bLocal_80 = true;
	}
	else if (unk_0x39D1D336459711BE() - iLocal_78 > 86400)
	{
		bLocal_79 = false;
		bLocal_80 = false;
		iLocal_78 = unk_0x39D1D336459711BE();
		iLocal_77 = 0;
	
		if (iLocal_57 == 3)
			Global_2359296[func_83() /*5568*/].f_681.f_7 = 1;
		else
			Global_113810.f_2366.f_539.f_2292[iLocal_57] = true;
	}

	if (bLocal_80)
	{
		switch (iLocal_57)
		{
			case 0:
				num = func_64(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case 1:
				num = func_64(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case 2:
				num = func_64(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case 3:
				num = func_64(func_57(148, -1));
				break;
		}
	
		value = num - iLocal_76;
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_77;
	
		if (num2 > 0)
		{
			func_82(iLocal_57, 4, num2);
			iLocal_77 = iLocal_77 + num2;
		}
	
		if (num > iLocal_76 + ((unk_0x91C8345B22D52DEC() / 1000) * 60))
			bLocal_80 = false;
	}

	if (iLocal_57 == 3)
	{
		Global_2359296[func_83() /*5568*/].f_681.f_4 = iLocal_78;
		Global_2359296[func_83() /*5568*/].f_681.f_5 = iLocal_77;
	}
	else
	{
		Global_113810.f_2366.f_539.f_2280[iLocal_57] = iLocal_78;
		Global_113810.f_2366.f_539.f_2284[iLocal_57] = iLocal_77;
	}

	return;
}

void func_82(int iParam0, int iParam1, int iParam2) // Position - 0x30B1
{
	int num;
	int num2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113810.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_113810.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			num2 = 14385;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 14385)
			{
				num = func_72(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_56(num2, num, -1, 1);
			}
			break;
	}

	return;
}

int func_83() // Position - 0x319F
{
	int num;

	num = 0;
	return num;
}

void func_84(var uParam0, var uParam1) // Position - 0x31AC
{
	BOOL flag;

	if (bLocal_73)
	{
		flag = true;
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && !unk_0x3F18810075C77D41(*uParam0))
		{
			flag = false;
		
			if (unk_0xDF93B3CFAC96698F(*uParam0) >= 53f)
			{
				func_82(iLocal_57, 4, 2);
				flag = true;
			}
		}
	
		if (flag)
		{
			bLocal_73 = false;
			uLocal_74 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_75 = unk_0x7E3F74F641EE6B27();
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && unk_0xDF93B3CFAC96698F(*uParam0) < 20f && !unk_0x3F18810075C77D41(*uParam0))
	{
		if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_74 > 10000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_75, 10000)))
			bLocal_73 = true;
	}

	return;
}

void func_85(var uParam0, var uParam1) // Position - 0x3287
{
	BOOL flag;
	var unk;

	flag = false;

	if (*uParam1)
	{
		if (bLocal_65)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_67 > 1500 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_68, 1500)))
				{
					uLocal_69 = unk_0x1DD05E817C89C737();
				
					if (unk_0x76CD105BCAC6EB9F())
						uLocal_70 = unk_0x7E3F74F641EE6B27();
				
					bLocal_66 = true;
				}
			
				bLocal_65 = false;
			}
		}
	
		if (bLocal_66)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (unk_0xD2A0543EC400E1A5(*uParam0))
				{
					if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_69 > 20 || !unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_69 == 0 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_70, 20)) || unk_0x76CD105BCAC6EB9F() && unk_0xCFF17EF1F3F6FF43(unk_0x7E3F74F641EE6B27(), uLocal_70))
					{
					}
					else
					{
						func_82(iLocal_57, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&unk, unk_0x1DD05E817C89C737() - uLocal_69, 64);
					TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		}
	
		if (!bLocal_65 && !bLocal_66)
		{
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_71 > 1000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_72, 1000)))
			{
				if (unk_0x3F18810075C77D41(*uParam0))
				{
					if (!bLocal_65)
					{
						uLocal_67 = unk_0x1DD05E817C89C737();
					
						if (unk_0x76CD105BCAC6EB9F())
							uLocal_68 = unk_0x7E3F74F641EE6B27();
					
						bLocal_65 = true;
					}
				}
			}
		}
	}
	else if (bLocal_65 || bLocal_66)
	{
		flag = true;
	}

	if (flag)
	{
		uLocal_71 = unk_0x1DD05E817C89C737();
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_72 = unk_0x7E3F74F641EE6B27();
	
		bLocal_65 = false;
		bLocal_66 = false;
	}

	return;
}

BOOL func_86(int iParam0) // Position - 0x3445
{
	return Global_112895 && iParam0 != false;
}

int func_87() // Position - 0x3456
{
	func_88();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_88() // Position - 0x346F
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_90(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_89(unk_0x4A8C381C258A124D());
		
			if (func_75(num) && !func_55(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_75(Global_113810.f_2366.f_539.f_4321))
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

int func_89(var uParam0) // Position - 0x356C
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_90(i) == num)
				return i;
		}
	}

	return 145;
}

int func_90(int iParam0) // Position - 0x35A9
{
	if (func_75(iParam0))
		return func_91(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_91(int iParam0) // Position - 0x35CE
{
	return Global_2058[iParam0 /*29*/];
}

void func_92() // Position - 0x35DD
{
	char* str;
	int num;

	if (bLocal_60)
	{
		if (iLocal_61 != iLocal_57)
		{
			bLocal_60 = false;
			return;
		}
	
		str = "CHAR_DEFAULT";
	
		switch (iLocal_61)
		{
			case 0:
				str = "CHAR_MICHAEL";
				break;
		
			case 1:
				str = "CHAR_FRANKLIN";
				break;
		
			case 2:
				str = "CHAR_TREVOR";
				break;
		
			case 3:
				num = func_95(unk_0x259BE71D8A81D4FA());
			
				if (num == 0)
					return;
				else
					str = unk_0x008C0EB38E4459EE(num);
				break;
		}
	
		unk_0xCCDB0041859B85A6("PS_UPDATE" /*~1~/100*/);
		unk_0x511D14ED2DA887E1(iLocal_64);
		unk_0x0AAAE599E05E67D2(func_94(iLocal_62), func_93(iLocal_62), iLocal_63, iLocal_64 - iLocal_63, 0, str, str);
		bLocal_81 = true;
		iLocal_82 = unk_0x1DD05E817C89C737() + 5000;
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_83 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 5000);
	
		bLocal_60 = false;
	}

	return;
}

int func_93(int iParam0) // Position - 0x36A1
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_94(int iParam0) // Position - 0x3720
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /*Special capacity +*/;
	
		case 1:
			return "PSF_STAMINA" /*Stamina +*/;
	
		case 3:
			return "PSF_LUNG" /*Lung Capacity +*/;
	
		case 2:
			return "PSF_STRENGTH" /*Strength +*/;
	
		case 4:
			return "PSF_DRIVING" /*Driving +*/;
	
		case 5:
			return "PSF_FLYING" /*Flying +*/;
	
		case 6:
			return "PSF_SHOOTING" /*Shooting +*/;
	
		case 7:
			return "PSF_STEALTH" /*Stealth +*/;
	}

	return "ERROR";
}

int func_95(int iParam0) // Position - 0x37AA
{
	int num;

	num = func_98(iParam0);

	if (num == -1)
	{
		func_96(iParam0, true);
		return 0;
	}

	Global_1666485[num /*5*/].f_4 = 1;
	return Global_1666485[num /*5*/].f_2;
}

void func_96(int iParam0, BOOL bParam1) // Position - 0x37E0
{
	if (!func_19(iParam0, false, true))
		return;

	if (func_98(iParam0) != -1)
		return;

	if (Global_1666648)
		if (iParam0 == Global_1666648.f_1)
			return;

	if (func_97(iParam0))
		return;

	if (Global_1666686 >= 32)
		return;

	Global_1666653[Global_1666686] = iParam0;
	Global_1666686 = Global_1666686 + 1;
	bParam1;
	return;
}

BOOL func_97(int iParam0) // Position - 0x384C
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

int func_98(int iParam0) // Position - 0x387E
{
	int i;

	if (!func_19(iParam0, false, true))
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
		
			func_99(i);
			return -1;
		}
	}

	return -1;
}

void func_99(int iParam0) // Position - 0x38FD
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

	func_100(&Global_1666485[num /*5*/]);
	Global_1666646 = Global_1666646 - 1;
	return;
}

void func_100(var uParam0) // Position - 0x39B2
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

void func_101() // Position - 0x39DF
{
	float value;
	int num;

	if (unk_0xC5C8FC4D42BFD749() != 1)
		return;

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_105(unk_0x259BE71D8A81D4FA()))
			return;
	
		if (func_104() != 0)
			return;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (func_104() == 0)
			iLocal_52 = 1;
	else
		iLocal_52 = 0;

	if (!func_103())
		func_102();

	iLocal_54 = 0;
	iLocal_55 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_56 = unk_0x7E3F74F641EE6B27();

	uLocal_71 = unk_0x1DD05E817C89C737();

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_72 = unk_0x7E3F74F641EE6B27();

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!IS_BIT_SET(Global_2359296[func_83() /*5568*/].f_681.f_1274, 2))
		{
			value = SYSTEM::TO_FLOAT(func_72(193, -1)) / 20f;
			num = SYSTEM::FLOOR(value);
			num = func_71(num, 0, 100);
			func_82(3, 2, num);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2359296[func_83() /*5568*/].f_681.f_1274), 2);
		}
	}

	bLocal_58 = true;
	iLocal_53 = 1;
	return;
}

void func_102() // Position - 0x3AC5
{
	int i;
	var unk;
	int num;
	int j;
	int k;
	var unk2;
	var unk3;

	if (unk_0x76CD105BCAC6EB9F())
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != 0)
			{
				func_73(3, i, &unk, &num);
				func_56(num, func_54(3, i, -1), -1, 1);
			}
		}
	
		func_4(0, 1, -1, 1);
		Global_98095 = true;
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (k = 0; k < 8; k = k + 1)
			{
				if (k != 0)
				{
					func_73(j, k, &unk2, &unk3);
					unk_0x1164A75E490C27B6(unk2, func_54(j, k, -1), 1);
				}
			}
		}
	
		Global_113810.f_2366.f_539.f_2387[0] = func_54(0, 0, -1);
		Global_113810.f_2366.f_539.f_2387[1] = func_54(1, 0, -1);
		Global_113810.f_2366.f_539.f_2387[2] = func_54(2, 0, -1);
		Global_113810.f_2366.f_539.f_2354 = 1;
		Global_98095 = true;
	}

	return;
}

BOOL func_103() // Position - 0x3BB8
{
	if (unk_0x76CD105BCAC6EB9F())
		return true;

	return Global_113810.f_2366.f_539.f_2354;
}

int func_104() // Position - 0x3BDB
{
	return Global_32283;
}

BOOL func_105(int iParam0) // Position - 0x3BE6
{
	if (!func_49(iParam0))
		return false;

	return IS_BIT_SET(Global_2672524.f_1, iParam0);
}

void func_106() // Position - 0x3C05
{
	if (iLocal_53 != 0 && iLocal_52 != 2)
	{
		if (iLocal_52 == 0)
		{
			if (unk_0x76CD105BCAC6EB9F())
				iLocal_52 = 2;
		
			if (!func_103())
				iLocal_52 = 2;
		}
		else if (iLocal_52 == 1)
		{
			if (!unk_0x76CD105BCAC6EB9F() || !func_105(unk_0x259BE71D8A81D4FA()) || func_104() != 0)
				iLocal_52 = 2;
		}
	
		if (iLocal_52 == 2)
			iLocal_53 = 2;
	}

	return;
}

