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
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_43 = { uScriptParam_0.f_1[0 /*3*/] };
	func_23();
	unk_0x96CFB880BAC634CE(11);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x173751E886F8E9AB())
		{
			if (func_3(3))
			{
				switch (iLocal_41)
				{
					case 0:
						if (iLocal_42 == 1)
							iLocal_41 = 1;
						else
							func_2();
						break;
				
					case 1:
						if (iLocal_49 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}

	return;
}

void func_1() // Position - 0xE7
{
	if (SYSTEM::TIMERB() > 7000)
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_43, 10f, 10f, 10f, 0, 1, 0) && !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_43, 3f, 3f, 3f, 0, 1, 0))
		{
			SYSTEM::SETTIMERB(0);
			uLocal_46 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			unk_0xB5396F1FB088FE38(&uLocal_52);
			unk_0xCD76801E1106CABE(0, uLocal_46, 0);
			unk_0x10425721983AE158(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_52);
		
			if (!unk_0x1C2F771CDC87A3A5(uLocal_50, 0))
				unk_0x4BD42B0527065BB6(uLocal_50, uLocal_52);
		
			unk_0xD0557B139A542F12(&uLocal_52);
		}
	
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_43, 3f, 3f, 3f, 0, 1, 0))
		{
			uLocal_46 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			SYSTEM::SETTIMERB(0);
			unk_0xB5396F1FB088FE38(&uLocal_52);
			unk_0xCD76801E1106CABE(0, uLocal_46, 0);
			unk_0x10425721983AE158(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_52);
		
			if (!unk_0x1C2F771CDC87A3A5(uLocal_50, 0))
				unk_0x4BD42B0527065BB6(uLocal_50, uLocal_52);
		
			unk_0xD0557B139A542F12(&uLocal_52);
		}
	}

	return;
}

void func_2() // Position - 0x1FD
{
	iLocal_49 = unk_0xC5935DFB3F39785A(0, 2);

	if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_43, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0xEC9DAA34BBB4658C(joaat("A_F_M_BevHills_02"));
		unk_0xEC9DAA34BBB4658C(joaat("G_M_Y_MexGoon_02"));
	
		while (!unk_0x6252BC0DD8A320DB(joaat("A_F_M_BevHills_02")) || !unk_0x6252BC0DD8A320DB(joaat("G_M_Y_MexGoon_02")))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0x80813AC549A1E8AE("amb@BUSKER");
	
		while (!unk_0xE100DD4F82A51BDE("amb@BUSKER"))
		{
			SYSTEM::WAIT(0);
		}
	
		uLocal_46.f_2 = uLocal_43.f_2 - 1f;
		uLocal_50 = unk_0xB1DBFEB95C0EFB88(19, joaat("G_M_Y_MexGoon_02"), uLocal_43, uLocal_43.f_1, uLocal_46.f_2, 0f, 1, 1);
	
		if (!unk_0x1C2F771CDC87A3A5(uLocal_50, 0))
		{
			unk_0xB5396F1FB088FE38(&uLocal_52);
			unk_0xCD76801E1106CABE(0, uLocal_46, 0);
			unk_0x10425721983AE158(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_52);
			unk_0x4BD42B0527065BB6(uLocal_50, uLocal_52);
			unk_0xD0557B139A542F12(&uLocal_52);
		}
	
		if (iLocal_49 == 1)
		{
			uLocal_46 = { unk_0x0D1381B6E0F3987D(uLocal_50, 3.8f, 0.8f, 0f) };
			uLocal_51 = unk_0xB1DBFEB95C0EFB88(5, joaat("A_F_M_BevHills_02"), uLocal_46, 0f, 1, 1);
		
			if (!unk_0x1C2F771CDC87A3A5(uLocal_51, 0))
				unk_0xCD76801E1106CABE(uLocal_51, uLocal_43, 0);
		}
	
		iLocal_42 = 1;
	}

	return;
}

BOOL func_3(int iParam0) // Position - 0x331
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_22(6) || func_22(7))
				return true;
			else
				return func_3(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (func_20(5))
				if (func_4(4))
					return true;
			break;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x3A3
{
	int num;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				num = func_15();
			
				if (!func_14(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_13() || Global_112857 || Global_32286 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_13() || Global_32286 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_13() || Global_112857 || Global_32286 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_113810.f_7691.f_919[num] == 5 || Global_43924 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_13() || Global_112857 || Global_32286 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_13() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || func_11(8, -1) || func_7() || func_6() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5())
							return false;
					
						if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3 && unk_0x6D231A0D52134FC1() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
							if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_13() || Global_32286 || func_12() || func_11(8, -1) || func_9() || func_8() || func_7() || Global_113810.f_7691.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_13() || func_9() || Global_112857 || Global_32286 || func_12() || Global_44569 || func_11(8, -1) || func_8() || func_6() || func_7() || Global_113810.f_7691.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_13() || Global_112857 || Global_32286 || func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7())
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

BOOL func_5() // Position - 0xAC0
{
	return Global_100872.f_1;
}

BOOL func_6() // Position - 0xACE
{
	if (Global_97735 != -1)
		return IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);

	return false;
}

BOOL func_7() // Position - 0xAF1
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_8() // Position - 0xB0B
{
	if (Global_78950)
		return true;
	else if (Global_63479 && !Global_63485)
		return true;

	return false;
}

BOOL func_9() // Position - 0xB35
{
	return Global_100885.f_394 > 0;
}

BOOL func_10() // Position - 0xB46
{
	return Global_100885.f_393 > 0;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0xB57
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

BOOL func_12() // Position - 0xB8F
{
	return Global_1575063;
}

BOOL func_13() // Position - 0xB9B
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98291.f_44 == 1;

	return false;
}

BOOL func_14(int iParam0) // Position - 0xBB7
{
	return iParam0 < 3;
}

int func_15() // Position - 0xBC3
{
	func_16();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_16() // Position - 0xBDC
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_18(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_17(unk_0x4A8C381C258A124D());
		
			if (func_14(num) && !func_22(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_14(Global_113810.f_2366.f_539.f_4321))
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

int func_17(var uParam0) // Position - 0xCD9
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_18(i) == num)
				return i;
		}
	}

	return 145;
}

int func_18(int iParam0) // Position - 0xD16
{
	if (func_14(iParam0))
		return func_19(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_19(int iParam0) // Position - 0xD3B
{
	return Global_2058[iParam0 /*29*/];
}

BOOL func_20(int iParam0) // Position - 0xD4A
{
	return func_21(iParam0, Global_43377);
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xD5B
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

BOOL func_22(int iParam0) // Position - 0xF3C
{
	return Global_43377 == iParam0;
}

void func_23() // Position - 0xF4A
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

