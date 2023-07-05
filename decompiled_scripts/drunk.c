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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	char* sLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	BOOL bLocal_63 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
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
	iLocal_46 = -1;
	iLocal_47 = -1;
	fLocal_50 = 1.7f;
	fLocal_51 = 0f;
	sLocal_52 = "";
	iLocal_61 = -1;

	if (unk_0x96CFB880BAC634CE(2))
		func_181();

	uLocal_41 = { uScriptParam_0 };
	func_180();
	func_179();
	func_174(iLocal_46, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_173();
	func_169();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_168(iLocal_46);
		func_167();
		func_165();
		func_158();
		func_174(iLocal_46, 0, 0);
		func_180();
		func_9();
	
		if (unk_0x76CD105BCAC6EB9F() && !unk_0x834C960822A4683F() && !func_8())
			func_1();
	}

	return;
}

void func_1() // Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}

	return;
}

void func_2() // Position - 0x127
{
	if (!func_4() && !func_3() && Global_2684819)
		Global_4718592.f_117591 = 0;

	return;
}

BOOL func_3() // Position - 0x155
{
	return Global_2683883.f_691;
}

BOOL func_4() // Position - 0x164
{
	return Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_192 != 0;
}

void func_5() // Position - 0x17B
{
	Global_2683883.f_756 = 1;
	return;
}

BOOL func_6() // Position - 0x18B
{
	return Global_2683883.f_735;
}

BOOL func_7() // Position - 0x19A
{
	return IS_BIT_SET(Global_2683883.f_2, 11);
}

BOOL func_8() // Position - 0x1AB
{
	return IS_BIT_SET(Global_2684820.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE
{
	BOOL flag;

	if (unk_0x1C2F771CDC87A3A5(uLocal_41.f_1, 0))
		func_181();

	if (bLocal_48)
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			func_181();

	func_157();
	flag = true;

	switch (iLocal_58)
	{
		case 4:
			func_156();
			return;
	
		case 5:
			func_153();
			return;
	
		case 6:
			func_151();
			return;
	
		case 7:
			func_150();
			return;
	
		case 8:
			func_149();
			return;
	
		case 9:
			func_147();
			return;
	
		case 10:
			func_146();
			func_143();
			func_142();
			return;
	
		case 11:
			func_141();
			return;
	
		case 12:
			break;
	
		default:
			flag = false;
			break;
	}

	if (!flag)
		return;

	if (!(iLocal_58 == 12))
		return;

	switch (iLocal_58.f_1)
	{
		case 1:
			if (!func_140())
			{
				func_124();
				func_143();
			}
			break;
	
		case 2:
			func_122();
			break;
	
		case 12:
			func_109();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}

	return;
}

void func_10() // Position - 0x2D9
{
	var unk;
	char* str;
	char* str2;
	int num;

	if (!IS_BIT_SET(Global_1950844.f_3, 27))
		unk_0xB1C2DC5C115FA50D(uLocal_41.f_1, 3000, 3500, 0, 1, 1, 0);

	Global_1945110 = 1;

	if (!unk_0x15CCE8886267624F())
	{
		unk_0x8F72AF14CE5AACE4(2500);
	
		while (unk_0x78ABC1D11B34F324())
		{
			SYSTEM::WAIT(0);
		}
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		func_108(&unk, false, false);
	
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			unk_0x091AB029AFE429F2(unk_0x4A8C381C258A124D(), 0, 1);
	
		while (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0xC8D49539708A80B4(unk_0x4A8C381C258A124D()) && unk_0x6BF8FE9F26BBABDE(unk_0x4A8C381C258A124D()))
		{
			SYSTEM::WAIT(0);
		}
	
		if (!unk_0xC8D49539708A80B4(unk_0x4A8C381C258A124D()))
			func_181();
	
		unk_0x8744D2E3FC95740E(&(Global_1950844.f_3), 27);
		func_93(unk_0x259BE71D8A81D4FA(), false, 57344, 0);
		Global_2635560.f_2781 = 1;
	
		if (IS_BIT_SET(Global_1950844, 15))
			unk_0x8744D2E3FC95740E(&Global_1950844, 15);
	
		if (IS_BIT_SET(Global_1950844.f_2, 6))
			unk_0x8744D2E3FC95740E(&(Global_1950844.f_2), 6);
	
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			Global_2635560.f_2782 = 1;
		else
			Global_2635560.f_2782 = 0;
	
		if (unk_0x12B42434831D668E())
			unk_0xB9AB3B8920F1AA69(0);
	
		if (func_88(true))
			func_75(0);
	
		func_73(true);
		func_181();
	}

	if (bLocal_63)
		func_181();

	str = "";
	str2.f_3 = 1064514355;
	str2.f_30 = 1148829696;
	str2.f_31 = 1148829696;
	str2.f_52 = 1148829696;
	num = 7;

	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (!func_64(126))
				num = 2;
			else
				num = 3;
			break;
	
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
					num = 4;
			
				if (func_64(59))
					num = 5;
			
				if (num == 7)
					if (!func_62())
						num = 4;
					else
						num = 5;
			}
			else
			{
				num = 6;
			}
			break;
	}

	switch (num)
	{
		case 0:
			str = "DWC_MICHAEL_mansion";
			str2 = "SAVEM_Default@";
			str2.f_1 = "M_GetOut_R";
			str2.f_2 = "M_GetOut_R_CAM";
			str2.f_5 = { -814.181f, 181.1f, 75.74f };
			str2.f_8 = { 0f, 0f, 21.1994f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 1:
			str = "DWC_MICHAEL_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "M_GetOut_countryside";
			str2.f_2 = "M_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 2:
			str = "DWC_FRANKLIN_city";
			str2 = "SWITCH@FRANKLIN@BED";
			str2.f_1 = "Sleep_GetUp_RubEyes";
			str2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			str2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			str2.f_8 = { 0f, 0f, -179.653f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 3:
			str = "DWC_FRANKLIN_hills";
			str2 = "SAVEBighouse@";
			str2.f_1 = "F_GetOut_r_bighouse";
			str2.f_2 = "F_GetOut_r_bighouse_CAM";
			str2.f_5 = { -1.049f, 524.283f, 170.064f };
			str2.f_8 = { 0f, 0f, 24f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 4:
			str = "DWC_TREVOR_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "T_GetOut_countryside";
			str2.f_2 = "T_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 5:
			str = "DWC_TREVOR_beach";
			str2 = "SAVEVeniceB@";
			str2.f_1 = "T_GetOut_r_veniceB";
			str2.f_2 = "T_GetOut_r_veniceB_CAM";
			str2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			str2.f_8 = { 0f, 0f, 36.25f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 6:
			str = "DWC_TREVOR_stripclub";
			str2 = "SAVECouch@";
			str2.f_1 = "T_GetOut_couch";
			str2.f_2 = "T_GetOut_couch_CAM";
			str2.f_5 = { 94.53f, -1289.86f, 28.27f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	}

	if (!unk_0x1C2F771CDC87A3A5(uLocal_41.f_1, 0))
		unk_0xB2BD5837A8D3CEDA(uLocal_41.f_1, str2.f_5, 1, 0, 0, 1);

	SYSTEM::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(str2.f_11), "", 16);
	str2.f_15 = -1f;
	func_12(str, &str2, "");
	func_11(126, 1);
	func_181();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x760
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

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD
{
	float num;
	int num2;
	BOOL flag;
	var unk;
	int num3;
	var unk2;
	int num4;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	int num5;
	int num6;
	char* str;
	char* str2;
	char* str3;
	int num7;
	float num8;
	float num9;
	int num10;
	int num11;
	int num12;
	float num13;
	var unk168;
	var unk171;
	float num14;
	var unk174;
	var unk175;
	var unk176;
	var unk179;
	float num15;
	var unk180;
	var unk181;
	var unk184;
	float num16;
	int num17;
	var unk187;
	var unk188;
	var unk189;
	var unk192;
	float num18;
	var unk193;
	var unk194;
	var unk197;
	float num19;
	int num20;
	BOOL flag4;
	BOOL flag5;
	int num21;

	num = 0f;
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);

	unk_0xA69DCC67B2B61AD1(uParam1->f_5, 4500f);
	unk_0x5926A824AF54BCC3(uParam1->f_5, 4500f);
	unk_0x2094BC4B6731BA68(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
	SYSTEM::WAIT(0);
	unk_0x98E393364463951A(1);
	unk_0x80813AC549A1E8AE(*uParam1);

	if (unk_0xD6F9DEE4765092A9(uParam1->f_16))
	{
	}
	else
	{
		unk_0x80813AC549A1E8AE(uParam1->f_16);
	}

	if (!unk_0x15CCE8886267624F())
		unk_0x8F72AF14CE5AACE4(0);

	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

	if (!unk_0x15CCE8886267624F())
		unk_0x8F72AF14CE5AACE4(0);

	num2 = unk_0x1DD05E817C89C737() + 20000;
	flag = false;
	uParam1->f_33 = 0;

	while (!flag && num2 > unk_0x1DD05E817C89C737())
	{
		flag = true;
		unk_0x80813AC549A1E8AE(*uParam1);
	
		if (!unk_0xE100DD4F82A51BDE(*uParam1))
			flag = false;
	
		if (!unk_0xD6F9DEE4765092A9(uParam1->f_16))
		{
			unk_0x80813AC549A1E8AE(uParam1->f_16);
		
			if (!unk_0xE100DD4F82A51BDE(uParam1->f_16))
				flag = false;
		}
	
		if (!unk_0x15CCE8886267624F())
			unk_0x8F72AF14CE5AACE4(0);
	
		SYSTEM::WAIT(0);
	}

	func_54();

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
	{
		unk_0xD1B0AF388B711EBC((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x60040CDD28AA1BC3(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, 0, 0, 0, 0, 0, 0, 0);
		unk_0x2094BC4B6731BA68(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, 1, 0, 0, 0);
	}

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("WEAPON_UNARMED"), 1);
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
	}

	unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
	unk_0x98E393364463951A(0);
	unk_0x2094BC4B6731BA68(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x337117D37E592B05();
	unk_0x6874AA782954505E();
	func_51();

	while (func_50())
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
		unk_0x10B228D2FDB7AF16(250);

	unk_0x40AC02FA167D4D0A(1);

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		num3 = unk_0x2EC137C692A52458(uParam1->f_5, uParam1->f_8, 2);
		unk_0xBF3497E24DEAD835(num3, 0);
		unk_0xA7C372501A8A3B23(num3, 0);
		unk2 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
		num4 = 4;
	
		if (uParam1->f_4 != joaat("MotionState_Idle"))
			num4 = num4 | 2;
	
		func_48(unk_0x4A8C381C258A124D(), uParam1->f_18);
		unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), num3, *uParam1, uParam1->f_1, 1000f, -1.5f, num4, 0, 1148846080, 0);
		unk_0x711F9BE10FCB4E6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xE00868707690F6A7(unk_0x259BE71D8A81D4FA(), 1);
		unk = unk_0x025281901DECB32C(unk_0x4A8C381C258A124D(), 77);
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 77, 1);
		unk_0xF9B66DAE101B699C(unk2, num3, uParam1->f_2, *uParam1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	
		if (!unk_0xD6F9DEE4765092A9(uParam1->f_16) && !unk_0xD6F9DEE4765092A9(uParam1->f_17))
			unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
	}
	else
	{
		num3 = -1;
	}

	if (!uParam1->f_25)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}

	flag2 = false;
	flag3 = false;
	unk3 = 16;

	if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_11)))
	{
		num5 = func_67();
		num6 = -1;
		str = "";
	
		switch (num5)
		{
			case 0:
				num6 = 0;
				str = "MICHAEL";
				break;
		
			case 1:
				num6 = 1;
				str = "FRANKLIN";
				break;
		
			case 2:
				num6 = 2;
				str = "TREVOR";
				break;
		
			default:
				break;
		}
	
		func_46(&unk3, num6, unk_0x4A8C381C258A124D(), str, 0, 1);
	}

	if (unk_0x5266F1D2AEF6F73A(num3))
	{
		str2 = "WalkInterruptible";
		str3 = "ForceBlendout";
	
		while (unk_0x5266F1D2AEF6F73A(num3) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!flag3)
			{
				if (!unk_0x15CCE8886267624F())
				{
					if (!unk_0xD6F9DEE4765092A9(uParam1->f_26))
					{
						unk_0xDCAFFD08A08087EB(uParam1->f_26, 0, 0);
						flag3 = true;
					}
				
					if (!unk_0xD6F9DEE4765092A9(uParam1->f_27))
					{
						if (!unk_0xD6F9DEE4765092A9(uParam1->f_28))
						{
							unk_0xBF3D28CA44F3BE2D(-1, uParam1->f_28, uParam1->f_27, 0);
							flag3 = true;
						}
					
						if (!unk_0xD6F9DEE4765092A9(uParam1->f_29))
						{
							unk_0xBF3D28CA44F3BE2D(-1, uParam1->f_29, uParam1->f_27, 0);
							flag3 = true;
						}
					}
				}
			}
		
			unk_0x43AE50D2A33F6E2A();
			unk_0x4EB223432F8FA0A0(18);
			unk_0xF64D9910FB38427C();
			func_40(0);
			num7 = unk_0x1DD05E817C89C737();
		
			if (num7 >= Global_43928 - 500)
				func_39(4000);
		
			num8 = -1f;
			num9 = -1f;
			num = unk_0xBD3B265153D3BA2D(num3);
		
			if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_11)))
				if (!flag2)
					if (num >= uParam1->f_15)
						if (func_22(&unk3, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
							flag2 = true;
		
			num10 = 0;
		
			if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(str2)))
			{
				num11 = unk_0x6C29A57AC29D7033(2, 195) - 128;
				num12 = unk_0x6C29A57AC29D7033(2, 196) - 128;
			
				if (num11 < 64 && num11 > -64 && num12 < 64 && num12 > -64)
				{
				}
				else
				{
					num10 = 1;
				}
			}
			else
			{
				num8 = -1f;
				num9 = -1f;
				num10 = 0;
				uParam1->f_3 = uParam1->f_3;
				num8 = num8;
				num9 = num9;
			}
		
			if (unk_0x3B5989D5DB08A155() == 4 && uParam1->f_52 > 0f)
			{
				if (num >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						num13 = 1.5f;
						unk168 = { unk_0x02AF3EA0F67D2329() };
						unk171 = { unk_0x83FDC027F0BEA202(unk_0x4A8C381C258A124D(), 31086, 0f, 0f, 0f) };
						num14 = unk_0xED977E2AE2CB16EE(unk168, unk171, 1);
						num13 = func_21(num13, 0.001f, num14 - 0.75f);
					
						if (num13 < 0f)
							num13 = 0.001f;
					
						func_20(&(uParam1->f_34), unk_0x4A8C381C258A124D(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
					
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x1DD05E817C89C737();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
					
						if (uParam1->f_57 == 999f)
							uParam1->f_56 = 0f;
					
						if (uParam1->f_57 == 999f)
						{
							unk176 = { unk_0x958849BB56EC0F07(2) };
							unk179 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
							num15 = unk176.f_2;
							unk180 = unk179;
							uParam1->f_57 = num15 - unk180;
						
							if (uParam1->f_57 < 360f)
								uParam1->f_57 = uParam1->f_57 + 360f;
						
							if (uParam1->f_57 > 360f)
								uParam1->f_57 = uParam1->f_57 - 360f;
						}
					
						unk174 = uParam1->f_56;
						unk175 = uParam1->f_57;
						unk_0xD815D4BD1AE9E85A(unk174, 1065353216);
						unk_0x64BB72494B9DF6DC(unk175);
						unk_0x7E08E86FBA713FE8(unk174);
						unk_0xE0A23567157E9B5E(unk175);
						unk181 = { unk_0x02AF3EA0F67D2329() };
						unk184 = { unk_0xCF141FCD0940B0A3() };
						num16 = unk_0xED977E2AE2CB16EE(unk181, unk184, 1);
						num17 = SYSTEM::ROUND(num16 * 1000f);
						uParam1->f_32 = 1;
					}
				
					if (uParam1->f_32)
					{
						unk_0x5FD79E92E62966FB();
						func_16(&(uParam1->f_34), true, true, true, false, false, 0);
					}
				}
			}
		
			if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(str3)) || num10)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
							break;
					
						case joaat("MotionState_Walk"):
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 500, 0, 1, 0, 0);
						
							if (unk_0x3B5989D5DB08A155() != 4)
							{
								if (uParam1->f_31 == 999f)
									uParam1->f_30 = 0f;
							
								if (uParam1->f_31 == 999f)
								{
									unk189 = { unk_0x958849BB56EC0F07(2) };
									unk192 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
									num18 = unk189.f_2;
									unk193 = unk192;
									uParam1->f_31 = num18 - unk193;
								
									if (uParam1->f_31 < 360f)
										uParam1->f_31 = uParam1->f_31 + 360f;
								
									if (uParam1->f_31 > 360f)
										uParam1->f_31 = uParam1->f_31 - 360f;
								}
							
								unk187 = uParam1->f_30;
								unk188 = uParam1->f_31;
								unk_0xD815D4BD1AE9E85A(unk187, 1065353216);
								unk_0x64BB72494B9DF6DC(unk188);
								unk194 = { unk_0x02AF3EA0F67D2329() };
								unk197 = { unk_0xCF141FCD0940B0A3() };
								num19 = unk_0xED977E2AE2CB16EE(unk194, unk197, 1);
								num20 = SYSTEM::ROUND(num19 * 1000f);
								unk_0xE37AF9002E782BA0(0, 1, num20, 0, 0, 0);
							}
							break;
					
						default:
							break;
					}
				
					if (unk_0x5266F1D2AEF6F73A(num3))
					{
						unk_0x83E8210E2B5723F2(num3);
						num3 = -1;
					}
				}
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
		unk_0x33B6B083EA6305A5((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);

	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());

	flag4 = unk_0xE976C85F4B1CF1A2();
	flag5 = 0;

	if (uParam1->f_32)
	{
		unk_0x5FD79E92E62966FB();
	
		if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
			flag5 = 1;
	}

	if (flag4 || flag5)
	{
		while (flag4 || flag5 && !unk_0x3555462DB47B7AB1())
		{
			flag4;
			flag5;
			num21 = 2;
			func_15(1, 26, &num21);
			func_15(1, 79, &num21);
			func_15(1, 1, &num21);
			func_15(1, 2, &num21);
			func_15(0, 22, &num21);
			func_15(0, 36, &num21);
			func_15(0, 142, &num21);
			func_15(0, 141, &num21);
			func_15(0, 140, &num21);
			func_15(0, 263, &num21);
			func_15(0, 264, &num21);
			SYSTEM::WAIT(0);
			flag4 = unk_0xE976C85F4B1CF1A2();
			flag5 = false;
		
			if (uParam1->f_32)
			{
				unk_0x5FD79E92E62966FB();
			
				if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
					flag5 = true;
			}
		}
	}

	if (!unk_0xD6F9DEE4765092A9(uParam1->f_16))
		unk_0x268BE77F77533D03(uParam1->f_16);

	unk_0x268BE77F77533D03(*uParam1);
	unk_0x85E6A1E36B5E2E4D(unk2, 0);
	func_13(&(uParam1->f_34));

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 77, unk);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	}

	sParam0 = sParam0;
	return;
}

void func_13(var uParam0) // Position - 0x11FA
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	return;
}

void func_14(var uParam0) // Position - 0x1215
{
	if (unk_0x78411E34CF90EA8C(uParam0->f_1))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);

	if (unk_0x78411E34CF90EA8C(uParam0->f_2))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_2, 0);

	if (unk_0x78411E34CF90EA8C(uParam0->f_3))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_3, 0);

	if (unk_0x78411E34CF90EA8C(uParam0->f_4))
		unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 0);

	return;
}

void func_15(int iParam0, int iParam1, var uParam2) // Position - 0x126D
{
	unk_0x66EFB3D6110055C4(iParam0, iParam1, 1);
	*uParam2 = *uParam2 + 1;
	return;
}

BOOL func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1286
{
	var unk;
	var unk4;
	var unk7;
	float value;
	float value2;
	var unk14;
	var unk17;
	var unk20;

	switch (*uParam0)
	{
		case 0:
			func_17();
		
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_5, 0))
			{
				func_14(uParam0);
				unk = { unk_0x02AF3EA0F67D2329() };
			
				if (bParam1)
					unk = { unk + (unk_0xE5741C6B6539231F(uParam0->f_5) * F2V(unk_0x0B852B0BF94A8DC1())) };
			
				unk4 = { unk_0xAD8278DAEC2CC059(uParam0->f_5, unk) };
				unk7 = { unk_0x958849BB56EC0F07(2) };
				value = { unk7 + uParam0->f_9 };
				value2 = { value - unk_0x88124E0D60FB8D11(uParam0->f_5, 2) };
				unk14 = { -SYSTEM::SIN(value.f_2) * SYSTEM::COS(value), SYSTEM::COS(value.f_2) * SYSTEM::COS(value), SYSTEM::SIN(value) };
				unk17 = { -SYSTEM::SIN(value2.f_2) * SYSTEM::COS(value2), SYSTEM::COS(value2.f_2) * SYSTEM::COS(value2), SYSTEM::SIN(value2) };
				unk20 = unk_0xB99978989A0F4E57();
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
					uParam0->f_3 = unk_0xBB209150C6081BBE(joaat("TIMED_SPLINE_CAMERA"), 0);
			
				uParam0->f_1 = unk_0xBB209150C6081BBE(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1)
					unk_0x03F10D56CCA2C055(uParam0->f_1, uParam0->f_5, unk4, 1);
				else
					unk_0x1761457F86AD0EE2(uParam0->f_1, unk);
			
				unk_0x5E5CEC33463AD803(uParam0->f_1, unk7, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_1, unk20);
				uParam0->f_2 = unk_0xBB209150C6081BBE(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1 && !bParam4)
					unk_0x03F10D56CCA2C055(uParam0->f_2, uParam0->f_5, unk4 + (unk17 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }), 1);
				else
					unk_0x1761457F86AD0EE2(uParam0->f_2, unk + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }));
			
				unk_0x5E5CEC33463AD803(uParam0->f_2, unk7, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_2, unk20);
			
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xBB209150C6081BBE(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
				
					if (bParam1 && !bParam4)
						unk_0x03F10D56CCA2C055(uParam0->f_4, uParam0->f_5, unk4 + (unk17 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }), 1);
					else
						unk_0x1761457F86AD0EE2(uParam0->f_4, unk + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }));
				
					unk_0x5E5CEC33463AD803(uParam0->f_4, unk7, 2);
					unk_0x58BDA5D9262F5D30(uParam0->f_4, unk20);
				}
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_1, 0, 2);
				
					if (iParam6 == 0)
						unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				
					unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
					unk_0x859FFC7F5DEC29DE(uParam0->f_3, iParam6);
					unk_0x4CBC5D1BC117616B(uParam0->f_3, 1);
				}
				else
				{
					unk_0xB56F35D8A770F80F(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
			
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x1DD05E817C89C737();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
	
		case 1:
			func_17();
		
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x1DD05E817C89C737() >= uParam0->f_7 + uParam0->f_16)
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xDCAFFD08A08087EB("CamPushInFranklin", 0, 0);
									break;
							
								case 0:
									unk_0xDCAFFD08A08087EB("CamPushInMichael", 0, 0);
									break;
							
								case 2:
									unk_0xDCAFFD08A08087EB("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						}
					
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
		
			if (unk_0x1DD05E817C89C737() >= uParam0->f_7 + uParam0->f_15)
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
			
				return true;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17() // Position - 0x1629
{
	unk_0xC0964AABD3C0CC7E();
	func_18();
	return;
}

void func_18() // Position - 0x1639
{
	Global_23251.f_134 = 1;
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1647
{
	uParam0->f_9 = { uParam1 };
	return;
}

void func_20(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1659
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1691
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16B8
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, false);
}

BOOL func_23(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1706
{
	Global_21846 = 0;

	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = false;
					Global_20499 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (unk_0x1F9EB85925C3ECD7())
			return 0;
	
		if (func_36(8, -1))
			return 0;
	
		Global_21921 = { Global_21915 };
		func_35();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
	
		if (Global_21851)
		{
			unk_0x8744D2E3FC95740E(&Global_8370, 20);
			unk_0x8744D2E3FC95740E(&Global_8371, 17);
			unk_0x8744D2E3FC95740E(&Global_8372, 0);
		
			if (bParam2)
			{
				func_33();
			
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20500.f_1 > 3)
					return 0;
			}
		
			if (Global_20466 == 1)
				return 0;
		
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (func_32())
					return 0;
			
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
					return 0;
			
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78689)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
						return 0;
				
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
						return 0;
				
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
						return 0;
				
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
						return 0;
				}
			}
		
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8370, 9))
					return 0;
			}
		
			func_30();
			Global_21855 = bParam2;
		}
	
		Global_21847 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_29();
		func_24();
		return 1;
	}

	if (Global_21845 == 5)
		return 0;

	if (iParam1 < Global_21847 || iParam1 == Global_21847)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}

	return 0;
}

void func_24() // Position - 0x19D4
{
	if (!func_25())
		return;

	if (Global_21851)
	{
		TEXT_LABEL_COPY(&(Global_1978312.f_1), { Global_21464 }, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}

	return;
}

BOOL func_25() // Position - 0x1A0B
{
	if (!Global_262145.f_29085)
		return false;

	if (!Global_78689)
		return false;

	if (unk_0x259BE71D8A81D4FA() == func_28())
		return false;

	if (func_26(unk_0x259BE71D8A81D4FA()))
		return false;

	if (IS_BIT_SET(Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_1, 7))
		return false;

	if (unk_0x834C960822A4683F())
		return false;

	return true;
}

BOOL func_26(int iParam0) // Position - 0x1A6E
{
	return func_27(iParam0, 20);
}

BOOL func_27(int iParam0, int iParam1) // Position - 0x1A7E
{
	return IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_28() // Position - 0x1A96
{
	return -1;
}

void func_29() // Position - 0x1A9F
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20713[i /*6*/], "", 24);
	}

	unk_0x0F15249D24BC5ADA(0);
	Global_21845 = 1;
	return;
}

void func_30() // Position - 0x1ACF
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	unk_0x8744D2E3FC95740E(&Global_8371, 16);
	return;
}

BOOL func_31() // Position - 0x1B64
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

BOOL func_32() // Position - 0x1B8B
{
	int num;
	int num2;

	if (Global_78689)
	{
		num = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &num2, 1);
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			if (num2 == joaat("WEAPON_SNIPERRIFLE") || num2 == joaat("WEAPON_HEAVYSNIPER") || num2 == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (unk_0x196704C916969409() && num == 1)
			return true;
		else
			return false;
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
			return true;
		else
			return false;

	return true;
}

void func_33() // Position - 0x1C24
{
	if (func_34(14))
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
		Global_20500 = func_67();
	
		if (Global_20500 == 145)
			Global_20500 = 3;
	
		if (Global_78689)
			Global_20500 = 3;
	
		if (Global_20500 > 3)
			Global_20500 = 3;
	}

	return;
}

BOOL func_34(int iParam0) // Position - 0x1CC6
{
	return Global_43377 == iParam0;
}

void func_35() // Position - 0x1CD4
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21134[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21134[i /*10*/].f_1), "", 24);
		Global_21134[i /*10*/].f_7 = 0;
		Global_21134[i /*10*/].f_8 = 0;
	}

	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0x1D2A
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

void func_37() // Position - 0x1D62
{
	unk_0xC78B293A5F4EACF9();
	Global_22856 = 0;

	if (unk_0xE87F28FD4128D063() || Global_20500.f_1 == 9 || Global_20499 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}

	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_21845 = 6;
		return;
	}

	return;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DB9
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;

	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}

	return;
}

void func_39(int iParam0) // Position - 0x1E0F
{
	Global_43928 = unk_0x1DD05E817C89C737() + iParam0;
	return;
}

void func_40(int iParam0) // Position - 0x1E21
{
	if (func_45())
		return;

	if (!(Global_20500.f_1 == 1))
	{
		if (func_44(0))
			func_41(iParam0);
	
		unk_0x0B0C9A0F9AAEB7F0(&Global_8371, 2);
	}

	return;
}

void func_41(int iParam0) // Position - 0x1E54
{
	if (func_45())
		return;

	if (Global_20704)
		if (func_43())
			func_42(true, true);
		else
			func_42(false, false);

	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8371, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_21845 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8370, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8370, 30);

	if (!func_31())
		Global_20500.f_1 = 3;

	return;
}

void func_42(BOOL bParam0, BOOL bParam1) // Position - 0x1EDE
{
	if (bParam0)
	{
		if (func_44(0))
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

BOOL func_43() // Position - 0x1F52
{
	return IS_BIT_SET(Global_1963795, 5);
}

BOOL func_44(int iParam0) // Position - 0x1F60
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

BOOL func_45() // Position - 0x1FB7
{
	return IS_BIT_SET(Global_1963795, 19);
}

void func_46(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1FC6
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78689)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			else
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
	
		if (!unk_0x4FAFF4BCB7633475(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				unk_0x26C12212366CBF6E(uParam2, 0);
			else
				unk_0x26C12212366CBF6E(uParam2, 1);
	}

	return;
}

void func_47(char* sParam0, int iParam1) // Position - 0x2061
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

void func_48(var uParam0, int iParam1) // Position - 0x2078
{
	if (func_49(iParam1, 1))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_0", 0f, 1f);

	if (func_49(iParam1, 2))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_1", 0f, 1f);

	if (func_49(iParam1, 4))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_2", 0f, 1f);

	if (func_49(iParam1, 8))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_3", 0f, 1f);

	if (func_49(iParam1, 16))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_4", 0f, 1f);

	if (func_49(iParam1, 32))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_5", 0f, 1f);

	if (func_49(iParam1, 64))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_6", 0f, 1f);

	if (func_49(iParam1, 128))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_7", 0f, 1f);

	if (func_49(iParam1, 256))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_8", 0f, 1f);

	if (func_49(iParam1, 512))
		unk_0x5909C9E03CEF097D(uParam0, "HOSPITAL_9", 0f, 1f);

	func_49(iParam1, 0);
	return;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x216F
{
	return iParam0 && iParam1 != false;
}

BOOL func_50() // Position - 0x217E
{
	if (Global_100833 == 13 || Global_100833 == 10 || Global_100833 == 11 || Global_100833 == 12)
		return false;

	return true;
}

void func_51() // Position - 0x21BC
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97746[i /*17*/] && !Global_97746[i /*17*/].f_1)
			if (Global_97746[i /*17*/].f_3 == 0)
				if (Global_97746[i /*17*/].f_5 != 88 && Global_97746[i /*17*/].f_5 != 89 && Global_97746[i /*17*/].f_5 != 92)
					func_52(Global_97746[i /*17*/].f_5, true);
	}

	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x2243
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94798[iParam0 /*2*/] = 1;
	else
		Global_94798[iParam0 /*2*/] = 0;

	return;
}

BOOL func_53(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x2281
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_54() // Position - 0x22C8
{
	func_55();
	func_73(true);
	return;
}

void func_55() // Position - 0x22D9
{
	int i;
	int num;
	int j;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44355[i /*5*/];
	
		if (!(num == -1))
			func_174(1, num, 1);
	}

	j = 0;

	for (j = 0; j < 5; j = j + 1)
	{
		if (Global_44329[j /*5*/] == 0)
			func_56(j);
	}

	return;
}

void func_56(int iParam0) // Position - 0x2339
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

int func_57(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x23BC
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		func_61(0);
		unk_0x2094BC4B6731BA68(uParam0, 5f, 1, 0, 0, 0);
	
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam0, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam3);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x64BB72494B9DF6DC(0f);
			}
		}
	
		unk_0x4A3280817398D754(uParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		unk_0x2094BC4B6731BA68(uParam0, 5000f, 1, 0, 0, 0);
		unk_0xBAAB54D57B40765E(uParam0, 5000f, 0);
		unk_0xA69DCC67B2B61AD1(uParam0, 5000f);
		unk_0x5926A824AF54BCC3(uParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
	
		if (!unk_0x787F8EE1F6FBDC6D())
		{
			while (!unk_0x4A3280817398D754(uParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
			
				if (SYSTEM::TIMERA() > 2000)
				{
					unk_0x98E393364463951A(0);
					return 0;
				}
			}
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!unk_0x9E2D35FA908F57B4())
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
			{
				unk_0x98E393364463951A(0);
			
				if (unk_0x787F8EE1F6FBDC6D())
					unk_0x6981C3213B841071();
			
				return 0;
			}
		}
	
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x787F8EE1F6FBDC6D())
					unk_0x6981C3213B841071();
			
				unk_0x98E393364463951A(0);
				SYSTEM::SETTIMERA(0);
				unk_0x337117D37E592B05();
			
				if (iParam5 == 1)
					unk_0x6874AA782954505E();
				else
					SYSTEM::SETTIMERA(5000);
			
				unk_0x1BBEB35757ED1961();
			}
		}
	
		while (!unk_0xEA02634993F717CE() && !func_58() && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
	
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			unk_0xB1EAADCB692D69CE(uParam0, &(uParam0.f_2), 0, 0);
			unk_0x2094BC4B6731BA68(uParam0, 5f, 1, 0, 0, 0);
		
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam0, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam3);
				}
			}
		}
	
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
		func_61(0);
		return 1;
	}

	func_61(0);
	return 0;
}

BOOL func_58() // Position - 0x25DB
{
	return !Global_77479.f_553;
}

void func_59() // Position - 0x25EB
{
	Global_77479.f_553 = 1;
	Global_77479.f_554 = 0;
	return;
}

void func_60() // Position - 0x2603
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_77479[i] = 0;
	}

	return;
}

void func_61(int iParam0) // Position - 0x2627
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_100833.f_20, 2))
			{
				unk_0x98E393364463951A(1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_100833.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_100833.f_20, 2))
		{
			unk_0x98E393364463951A(0);
			unk_0x8744D2E3FC95740E(&(Global_100833.f_20), 2);
		}
	}

	return;
}

BOOL func_62() // Position - 0x2678
{
	if (IS_BIT_SET(unk_0xC5935DFB3F39785A(0, 65535), 0))
		return true;

	return false;
}

BOOL func_63(int iParam0) // Position - 0x2696
{
	return IS_BIT_SET(Global_113810.f_7232[iParam0], 0);
}

BOOL func_64(int iParam0) // Position - 0x26AB
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113810.f_9088.f_99.f_58[iParam0];
}

int func_65() // Position - 0x26D8
{
	if (Global_40315[11] == 1)
		return 4;

	if (!func_66(21))
		return 0;

	if (!func_64(130))
		return 1;

	if (!func_64(131))
		return 2;

	if (!func_66(22))
		return 1;

	if (!func_66(49))
		return 3;

	if (!func_66(28))
		return 1;

	return 3;
}

BOOL func_66(int iParam0) // Position - 0x2756
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113810.f_9088.f_330[iParam0 /*6*/];
}

int func_67() // Position - 0x2782
{
	func_68();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_68() // Position - 0x279B
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_71(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_70(unk_0x4A8C381C258A124D());
		
			if (func_69(num) && !func_34(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_69(Global_113810.f_2366.f_539.f_4321))
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

BOOL func_69(int iParam0) // Position - 0x2898
{
	return iParam0 < 3;
}

int func_70(var uParam0) // Position - 0x28A4
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_71(i) == num)
				return i;
		}
	}

	return 145;
}

int func_71(int iParam0) // Position - 0x28E1
{
	if (func_69(iParam0))
		return func_72(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_72(int iParam0) // Position - 0x2906
{
	return Global_2058[iParam0 /*29*/];
}

void func_73(BOOL bParam0) // Position - 0x2915
{
	unk_0x9B669C0440D2AB57(0f);
	unk_0xC30B691CAD767629(0f);
	unk_0xB3CAD109683148E3(0f);
	unk_0x9AFEC71EEA2F7754(1);
	unk_0xAD0E20104A60B568(0f);
	unk_0xDB37962FDFC63FD7(1);
	unk_0xC5EE3F8EC7822462(0);

	if (unk_0xBC2EE32DE886BD08("SAFEHOUSE_STONED_MICHAEL"))
		unk_0xB43467C43086A6A1("SAFEHOUSE_STONED_MICHAEL");

	if (!unk_0xD6F9DEE4765092A9(&Global_44547))
		if (unk_0xBC2EE32DE886BD08(&Global_44547))
			unk_0xB43467C43086A6A1(&Global_44547);

	if (unk_0x78411E34CF90EA8C(Global_44535))
	{
		if (unk_0xDD87838D03B64B0A(Global_44535))
		{
			unk_0x17F06E9D89A05855(Global_44535, 0f);
			unk_0x584EE85BE0BFA70E(Global_44535, 1);
		}
	}

	if (unk_0x12B42434831D668E())
		unk_0xB9AB3B8920F1AA69(0);

	if (bParam0)
		if (unk_0x8960847E5FD7B48F() != -1 || unk_0x765B41E82372AA97() != -1)
			unk_0x80F87A4A3B930613();
		else if (unk_0x3555462DB47B7AB1())
			unk_0x80F87A4A3B930613();

	Global_44542 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44543, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44547, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44563, "", 16);
	func_74();
	return;
}

void func_74() // Position - 0x29EE
{
	Global_44534 = 0;
	Global_44535 = 0;
	Global_44536 = 0;
	Global_44537 = 30000;
	Global_44538 = 0f;
	Global_44540 = 0f;
	Global_44539 = 0f;
	Global_44541 = 1f;
	Global_44542 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44543, "", 16);
	return;
}

void func_75(int iParam0) // Position - 0x2A23
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_262145.f_18341;
			break;
	
		case 1:
			num = Global_262145.f_18331;
			break;
	
		case 2:
			num = Global_262145.f_18342;
			break;
	
		case 3:
			num = Global_262145.f_18334;
			break;
	
		case 4:
			num = Global_262145.f_18330;
			break;
	
		case 6:
			num = 3;
			break;
	
		case 7:
			num = Global_262145.f_18345;
			break;
	
		case 8:
			num = Global_262145.f_18346;
			break;
	
		case 9:
			num = Global_262145.f_18349;
			break;
	
		case 22:
			num = Global_262145.f_18350;
			break;
	
		case 23:
			num = Global_262145.f_18343;
			break;
	
		case 25:
			num = Global_262145.f_19235;
			break;
	
		case 26:
			num = Global_262145.f_19234;
			break;
	}

	if (num != 0)
		unk_0x038FC0304403CC66(func_86(func_87()), func_85(func_87()), func_84(), func_83(), iParam0, num);

	func_82(num);
	func_76(num);
	return;
}

void func_76(int iParam0) // Position - 0x2B48
{
	int num;

	num = func_81(3971, -1);
	num = num + iParam0;

	if (num < 0)
		num = 0;

	if (num > 9999)
		num = 9999;

	Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_469 = num;
	func_77(3971, num, -1, 1);
	return;
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2B94
{
	int num;

	num = func_78(iParam0, iParam2);

	if (num != 0)
		unk_0x1164A75E490C27B6(num, iParam1, iParam3);

	return;
}

int func_78(int iParam0, int iParam1) // Position - 0x2BB7
{
	return unk_0xD69CE161FE614531(0, iParam0, func_79(iParam1));
}

int func_79(int iParam0) // Position - 0x2BCC
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_80();
	
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

int func_80() // Position - 0x2C00
{
	return Global_1574918;
}

int func_81(int iParam0, int iParam1) // Position - 0x2C0C
{
	var unk;
	int num;

	if (iParam0 != 14385)
	{
		unk = func_78(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void func_82(int iParam0) // Position - 0x2C3B
{
	int num;

	num = unk_0x259BE71D8A81D4FA();
	Global_1895156[num /*609*/].f_10.f_468 = Global_1895156[num /*609*/].f_10.f_468 + iParam0;

	if (Global_1895156[num /*609*/].f_10.f_468 < -9999)
		Global_1895156[num /*609*/].f_10.f_468 = 9999;
	else if (Global_1895156[num /*609*/].f_10.f_468 > 9999)
		Global_1895156[num /*609*/].f_10.f_468 = 9999;

	return;
}

int func_83() // Position - 0x2CB5
{
	if (Global_1948440.f_3 != 0)
		return Global_1948440.f_3;

	return -1;
}

int func_84() // Position - 0x2CD1
{
	if (Global_1948440.f_2 != 0)
		return Global_1948440.f_2;

	return -1;
}

int func_85(int iParam0) // Position - 0x2CED
{
	if (iParam0 == func_28())
		return -1;

	return Global_1895156[iParam0 /*609*/].f_10.f_8[1];
}

int func_86(int iParam0) // Position - 0x2D12
{
	if (iParam0 == func_28())
		return -1;

	return Global_1895156[iParam0 /*609*/].f_10.f_8[0];
}

int func_87() // Position - 0x2D37
{
	return Global_1895156[unk_0x259BE71D8A81D4FA() /*609*/].f_10;
}

BOOL func_88(BOOL bParam0) // Position - 0x2D4C
{
	return func_89(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_89(int iParam0, BOOL bParam1) // Position - 0x2D5E
{
	return func_90(iParam0, bParam1, 1);
}

int func_90(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2D6F
{
	int num;

	if (!func_92(iParam0))
		return 0;

	if (!bParam1)
		if (func_91(iParam0, iParam2))
			return 0;

	num = Global_1895156[iParam0 /*609*/].f_10;

	if (num != func_28() && Global_1895156[num /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_91(int iParam0, int iParam1) // Position - 0x2DCC
{
	if (func_92(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10 != func_28())
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

BOOL func_92(int iParam0) // Position - 0x2E1B
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

void func_93(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x2E3D
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	BOOL flag25;
	BOOL flag26;
	var unk;
	int num2;

	if (bParam1)
		if (unk_0x828F3FAE99DA791A())
			unk_0x6FF322107B12B749(0);

	if (func_107())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!unk_0x76CD105BCAC6EB9F())
	{
		num = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, num);
	}
	else
	{
		flag = true;
		flag2 = iParam2 & 2 != 0;
		flag3 = iParam2 & 4 != 0;
		flag4 = iParam2 & 8 != 0;
		flag5 = iParam2 & 16 != 0;
		flag6 = iParam2 & 32 != 0;
		flag7 = iParam2 & 64 != 0;
		flag8 = iParam2 & 128 != 0;
		flag9 = iParam2 & 256 != 0;
		flag10 = iParam2 & 512 != 0;
		flag11 = iParam2 & 1024 != 0;
		flag12 = iParam2 & 2048 != 0;
		flag13 = iParam2 & 4096 != 0;
		flag14 = iParam2 & 8192 != 0;
		flag15 = iParam2 & 16384 != 0;
		flag16 = iParam2 & 32768 != 0;
		flag17 = iParam2 & 65536 != 0;
		flag18 = iParam2 & 131072 != 0;
		flag19 = iParam2 & 262144 != 0;
		flag20 = iParam2 & 524288 != 0;
		flag21 = iParam2 & 1048576 != 0;
		flag22 = iParam2 & 2097152 != 0;
		flag23 = iParam2 & 4194304 != 0;
		flag24 = iParam2 & 8388608 != 0;
		flag25 = iParam2 & 16777216 != 0;
	
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
			flag = false;
	
		if (!func_105())
		{
			flag26 = false;
		
			if (bParam1 == true)
				flag26 = true;
		
			if (flag16 == false && !flag21)
				flag26 = true;
		
			if (flag10 == true)
				flag26 = true;
		
			if (flag26)
				return;
		}
	
		flag18;
	
		if (unk_0x762604C40829DB72(iParam0) && unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1)
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
				return;
		
			unk = unk_0x56E414973C2A8C0E(iParam0);
		
			if (!flag20)
			{
				if (flag19 && bParam1 == false && unk_0x76CD105BCAC6EB9F())
					unk_0x6E2FA5434737D22F(1);
				else if (flag14 || !func_103(unk_0x259BE71D8A81D4FA(), 0) && !func_102() && !func_101(unk_0x259BE71D8A81D4FA()))
					unk_0x4285E11B28063EE0(unk, !flag14, 0);
			
				if (!flag14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !flag19)
						unk_0x6E2FA5434737D22F(0);
				
					Global_2657704[iParam0 /*463*/].f_254 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_98(0, 0, 0);
				
					if (flag25)
						unk_0xE3F88173F42C071B();
				}
			
				if (!func_97(unk) && !unk_0xB431D60610E7F85F(unk))
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, 1, 0);
			
				if (!unk_0xA3736D76B0E93E93(unk))
				{
					if (!flag21)
						unk_0x5D7CD709B34C90F0(unk, 0);
				
					unk_0x11C125313CB8ADA2(unk, 1);
				}
				else if (!flag21)
				{
					unk_0x5D7CD709B34C90F0(unk, 0);
				}
			
				unk_0x3F58BFCF656F0DF1(unk, 1);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
			
				if (unk_0x4CEC77F224BCD884(unk) && unk_0x69CD279BFCFE278E(unk))
					unk_0xAF8337BF5A296283(unk);
			
				unk_0x9FF00EA9A61211D2(unk, 1);
			
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_96();
					func_95();
				}
			
				if (unk_0x705A7AB2D4BC0A9B())
					!flag23;
			
				unk_0x787F8EE1F6FBDC6D();
				Global_2657704[iParam0 /*463*/].f_255 = 0;
			
				if (!flag24)
					flag3 = true;
			
				if (Global_2635560.f_2781)
					Global_2635560.f_2781 = 0;
			}
			else
			{
				if (!func_97(unk) && !unk_0xB431D60610E7F85F(unk))
				{
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, !flag15, 0);
				
					if (!unk_0xA3736D76B0E93E93(unk))
					{
						if (!flag21)
							unk_0x5D7CD709B34C90F0(unk, flag16);
					
						if (!flag16)
							unk_0x11C125313CB8ADA2(unk, 1);
					}
				
					if (func_94(*Global_4718592.f_171044))
						unk_0x5D7CD709B34C90F0(unk, 1);
				}
			
				if (Global_1575038)
					flag10 = false;
			
				if (flag10)
					unk_0x2B52F77101390E6F(iParam0, 0);
				else
					unk_0x2B52F77101390E6F(iParam0, 1);
			
				unk_0x3F58BFCF656F0DF1(unk, flag17);
			
				if (flag3)
					if (!unk_0xBFD01C2045360289(unk) && !unk_0x7F420695E3F776FB(unk, 0))
						unk_0x19626F992DC71FB9(unk);
			}
		
			num2 = 0;
		
			if (flag2)
				num2 = num2 | 2;
		
			if (flag3)
				num2 = num2 | 4;
		
			if (flag4)
				num2 = num2 | 8;
		
			if (flag5)
				num2 = num2 | 16;
		
			if (flag6)
				num2 = num2 | 32;
		
			if (flag7)
				num2 = num2 | 64;
		
			if (flag8)
				num2 = num2 | 128;
		
			if (flag9)
				num2 = num2 | 256;
		
			if (flag10)
				num2 = num2 | 512;
		
			if (flag11)
				num2 = num2 | 1024;
		
			if (flag12)
				num2 = num2 | 2048;
		
			if (flag13)
				num2 = num2 | 4096;
		
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, num2);
		}
	}

	return;
}

BOOL func_94(int iParam0) // Position - 0x32D9
{
	return iParam0 == 17;
}

void func_95() // Position - 0x32E6
{
	var unk;

	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { unk };
	return;
}

void func_96() // Position - 0x3333
{
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[unk_0x259BE71D8A81D4FA() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
	return;
}

BOOL func_97(var uParam0) // Position - 0x3371
{
	int num;

	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return true;
	}
	else
	{
		num = unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num == 0)
			return true;
	}

	return false;
}

void func_98(int iParam0, int iParam1, int iParam2) // Position - 0x33A2
{
	int num;
	int i;

	unk_0x1C2F771CDC87A3A5(iParam1, 0);

	if (iParam0 == 1)
		if (unk_0xFC8BFE4B41177C22(iParam1))
			if (unk_0x501EBB0523078750(iParam1))
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_100();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = 0; i < 8; i = i + 1)
					{
						unk_0x07938654FF332D78(i, Global_2621446.f_58[i]);
					}
				}
			
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_103(unk_0x259BE71D8A81D4FA(), 0))
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		else
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
	
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_99(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}

	return;
}

void func_99(int iParam0, int iParam1) // Position - 0x3472
{
	int num;

	num = iParam0;

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, 1);

	return;
}

void func_100() // Position - 0x348E
{
	int i;

	if (!unk_0xAD15761928FCF79C())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = unk_0xBCF87EE3DC296C2A(i);
			}
		
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_101(int iParam0) // Position - 0x34E6
{
	if (func_103(iParam0, 0))
		return true;

	if (func_102())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_102() // Position - 0x3525
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_103(int iParam0, int iParam1) // Position - 0x3533
{
	BOOL flag;

	if (!func_92(iParam0))
		return false;

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_104(-1, false) == 8;
	else
		flag = Global_1853988[iParam0 /*867*/].f_205 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(iParam0))
			flag = unk_0x1864096A95E36EBA(iParam0) == 8;

	return flag;
}

int func_104(int iParam0, BOOL bParam1) // Position - 0x358C
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_80();

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

BOOL func_105() // Position - 0x35CD
{
	if (func_106() == 0)
		return true;

	return false;
}

int func_106() // Position - 0x35E2
{
	return Global_1574632.f_18;
}

BOOL func_107() // Position - 0x35F0
{
	if (IS_BIT_SET(Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/].f_863, 2) && !(Global_2684820.f_2846.f_216 == -1))
		return true;

	return false;
}

void func_108(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3621
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

void func_109() // Position - 0x3666
{
	var unk;

	if (bLocal_48)
		return;

	uLocal_41.f_4 = 0;

	if (!func_110(Global_44355[iLocal_62 /*5*/].f_2))
		return;

	unk = unk_0xC5935DFB3F39785A(500, 3000);
	iLocal_58 = 5;
	iLocal_53.f_2 = SYSTEM::TIMERA() + unk;
	return;
}

BOOL func_110(int iParam0) // Position - 0x36A9
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;

	num = func_121();

	if (num == -2)
		return false;

	if (unk_0x4FAFF4BCB7633475(uLocal_41.f_1))
	{
		if (unk_0x7F420695E3F776FB(uLocal_41.f_1, 0) || unk_0x9D6DF8F3584AAC2B(uLocal_41.f_1))
			return false;
	
		if (unk_0x642A49B0C066F723(uLocal_41.f_1))
			return false;
	
		if (func_117(uLocal_41.f_1))
			return false;
	}

	if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0 && Global_44355[iLocal_62 /*5*/].f_3 > Global_44355[iLocal_62 /*5*/].f_4)
		return false;

	if (Global_44355[iLocal_62 /*5*/].f_4 < 9 && Global_44355[iLocal_62 /*5*/].f_4 != 0 && Global_44355[iLocal_62 /*5*/].f_4 > Global_44355[iLocal_62 /*5*/].f_3)
		return false;

	str = func_116(iParam0);

	if (unk_0xD6F9DEE4765092A9(str))
		return false;

	if (func_117(uLocal_41.f_1))
		return false;

	unk_0x73DEEAB0747FB17C(str);

	if (func_113(uLocal_41.f_1))
	{
		str2 = "MOVE_M@DRUNK@TRANSITIONS";
		str3 = "";
	
		switch (iParam0)
		{
			case 0:
				str3 = "";
				break;
		
			case 2:
				str3 = "VERY_TO_MODERATE";
				break;
		
			case 1:
				str3 = "MODERATE_TO_SLIGHTLY";
				break;
		
			default:
				break;
		}
	
		if (!unk_0xD6F9DEE4765092A9(str2) && !unk_0xD6F9DEE4765092A9(str3))
		{
			unk_0x80813AC549A1E8AE(str2);
		
			while (!unk_0xE100DD4F82A51BDE(str2))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!unk_0x4FAFF4BCB7633475(uLocal_41.f_1))
			{
				unk_0x10425721983AE158(uLocal_41.f_1, str2, str3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_52 = str3;
			}
		}
	}

	if (!unk_0x8175BC6D49412468(str))
		return false;

	if (unk_0x4FAFF4BCB7633475(uLocal_41.f_1))
		return false;

	unk_0x4669032A1DFBB449(uLocal_41.f_1, str, 0.75f);

	if (unk_0x3B5989D5DB08A155() == 4)
		unk_0x696095B298957860(uLocal_41.f_1, "move_ped_strafing_firstperson@drunk");

	unk_0xCC2D0738666FD62D(uLocal_41.f_1, 0, str, "idle", 2f, 1);
	iLocal_58.f_2 = str;
	bLocal_49 = true;
	str4 = 0;

	switch (func_70(uLocal_41.f_1))
	{
		case 0:
			str4 = "FACIALS@P_M_ZERO@BASE";
			break;
	
		case 1:
			str4 = "FACIALS@P_M_ONE@BASE";
			break;
	
		case 2:
			str4 = "FACIALS@P_M_TWO@BASE";
			break;
	
		default:
			if (unk_0x501EBB0523078750(uLocal_41.f_1))
				if (!func_111())
					str4 = "FACIALS@GEN_MALE@BASE";
				else
					str4 = "FACIALS@GEN_FEMALE@BASE";
			else if (unk_0xB98B1A5B59BC5065(uLocal_41.f_1))
				str4 = "FACIALS@GEN_MALE@BASE";
			else
				str4 = "FACIALS@GEN_FEMALE@BASE";
			break;
	}

	unk_0x2C09C6B54CFCFAF1(uLocal_41.f_1, "mood_drunk_1", str4);
	unk_0x0FB8E752BCC547A9(uLocal_41.f_1, 200, 1);
	unk_0x0FB8E752BCC547A9(uLocal_41.f_1, 46, 1);
	unk_0xC1BC1B8A5AA67C6B(uLocal_41.f_1, 0);
	unk_0x1CA08719184AFC6F(uLocal_41.f_1, 262144, 1);
	unk_0x8A19BA162BA1DE3E(uLocal_41.f_1, 1);
	return true;
}

BOOL func_111() // Position - 0x396B
{
	return func_112(unk_0x259BE71D8A81D4FA());
}

BOOL func_112(var uParam0) // Position - 0x397B
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_113(var uParam0) // Position - 0x399A
{
	Vector3 vector;

	if (unk_0x7F420695E3F776FB(uParam0, 1) || unk_0x9D6DF8F3584AAC2B(uParam0))
		return false;

	if (unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 7)
		return false;

	if (unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 7)
		return false;

	if (unk_0x65F146FF416F109F(uParam0))
		return false;

	if (unk_0x3F18810075C77D41(uParam0))
		return false;

	if (unk_0x8BF5256C439DF778(uParam0))
		return false;

	if (unk_0x7CB06BFD42FB0E24(uParam0))
		return false;

	if (Global_75816)
		return false;

	if (func_115())
		return false;

	if (uParam0 == unk_0x4A8C381C258A124D())
	{
		if (!unk_0x566C977EEAE1C0D1(unk_0x259BE71D8A81D4FA()))
			return false;
	
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			return false;
	
		if (unk_0x1C751EF63BF4D501(unk_0x259BE71D8A81D4FA()) || unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
			return false;
	
		if (func_114())
			return false;
	}

	vector = { unk_0xE5741C6B6539231F(uParam0) };

	if (SYSTEM::VMAG2(vector) >= 1f * 1f)
		return false;

	return true;
}

BOOL func_114() // Position - 0x3A9B
{
	return Global_100885.f_394 > 0;
}

BOOL func_115() // Position - 0x3AAC
{
	return unk_0x1DD05E817C89C737() <= Global_23390.f_6321 + 100;
}

char* func_116(int iParam0) // Position - 0x3AC1
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
	
		case 1:
			return "move_m@drunk@slightlydrunk";
	
		case 2:
			return "move_m@drunk@moderatedrunk";
	}

	return "";
}

BOOL func_117(int iParam0) // Position - 0x3B02
{
	int num;
	char* str;

	num = func_118(iParam0);
	str = func_116(num);

	if (unk_0xD6F9DEE4765092A9(iLocal_58.f_2))
		if (unk_0xD6F9DEE4765092A9(str))
			return true;
		else
			return false;

	return unk_0x1B79E937E91F40C3(iLocal_58.f_2, str);
}

int func_118(int iParam0) // Position - 0x3B43
{
	int num;
	int num2;

	if (iParam0 == 0)
		return -1;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return -1;

	num = func_120(iParam0);
	num2 = func_119(num);

	if (num2 == -1)
		return -1;

	return Global_44355[num2 /*5*/].f_2;
}

int func_119(int iParam0) // Position - 0x3B86
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44355[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_120(int iParam0) // Position - 0x3BB6
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44355[i /*5*/].f_1)
			return Global_44355[i /*5*/];
	}

	return -1;
}

int func_121() // Position - 0x3BF7
{
	int num;

	if (iLocal_53 == -2)
		return -2;

	if (iLocal_53 == -1)
		return -1;

	num = iLocal_53 - SYSTEM::TIMERA();

	if (num < 0)
		return -2;

	if (num > 65534)
		num = 65534;

	return num;
}

void func_122() // Position - 0x3C3D
{
	if (bLocal_48)
		return;

	if (!func_123())
	{
		iLocal_58 = 5;
		iLocal_53.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}

	iLocal_58 = 6;
	return;
}

BOOL func_123() // Position - 0x3C69
{
	var unk;
	var unk4;
	float num;

	if (uLocal_41.f_4 == 0)
		return false;

	if (unk_0x1C2F771CDC87A3A5(uLocal_41.f_4, 0))
		return false;

	unk = { unk_0xD1A6A821F5AC81DB(uLocal_41.f_1, 1) };
	unk4 = { unk_0xD1A6A821F5AC81DB(uLocal_41.f_4, 1) };
	num = unk_0xED977E2AE2CB16EE(unk, unk4, 1);
	return num < 7f;
}

void func_124() // Position - 0x3CBA
{
	int num;
	char* str;

	if (uLocal_41.f_1 == unk_0x4A8C381C258A124D())
	{
		unk_0x66EFB3D6110055C4(0, 36, 1);
	
		if (unk_0xC2BF1F6F84E31EB2(uLocal_41.f_1))
			if (Global_44355[iLocal_62 /*5*/].f_2 == 0 || Global_44355[iLocal_62 /*5*/].f_2 == 2)
				unk_0xF9358C41CC69C616(uLocal_41.f_1, 0, 0);
	
		if (unk_0xDC91B9320E14F119(uLocal_41.f_1))
			unk_0xD0B00571D4BDDC97(uLocal_41.f_1, 0);
	}

	if (iLocal_53 != -2)
	{
		if (iLocal_53 == -1)
		{
			if (Global_44355[iLocal_62 /*5*/].f_2 != 0)
				Global_44355[iLocal_62 /*5*/].f_2 = 0;
		}
		else
		{
			num = iLocal_53 - SYSTEM::TIMERA();
		
			if (num <= 0)
				num = 0;
		
			num = (num / 1000) + 1;
		
			if (Global_44355[iLocal_62 /*5*/].f_2 == 0)
			{
				if (num < 30)
				{
					Global_44355[iLocal_62 /*5*/].f_2 = 2;
				
					if (!func_110(2))
					{
						Global_44355[iLocal_62 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_44355[iLocal_62 /*5*/].f_2 == 2)
			{
				if (num < 10)
				{
					Global_44355[iLocal_62 /*5*/].f_2 = 1;
				
					if (!func_110(2))
					{
						Global_44355[iLocal_62 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_44355[iLocal_62 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!unk_0xD6F9DEE4765092A9(sLocal_52))
	{
		if (!func_113(uLocal_41.f_1))
		{
			str = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (unk_0x13CCB1AD131C1082(uLocal_41.f_1, str, sLocal_52, 3))
				unk_0x08D8528BA8E43641(uLocal_41.f_1, str, sLocal_52, -4f);
		
			sLocal_52 = "";
			return;
		}
	}

	if (Global_44355[iLocal_62 /*5*/].f_3 >= 10 || Global_44355[iLocal_62 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_44572, 9))
	{
		if (unk_0x9B5C1660CCDF7189(uLocal_41.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !IS_BIT_SET(Global_1950844.f_3, 27))
			return;
	
		if (unk_0x75E315E7679F4F24(uLocal_41.f_1))
			return;
	
		if (unk_0x7F420695E3F776FB(uLocal_41.f_1, 1))
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_41.f_1 == unk_0x4A8C381C258A124D() && func_139(unk_0x259BE71D8A81D4FA()) && Global_262145.f_24533)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_41.f_1 == unk_0x4A8C381C258A124D() && func_138())
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && unk_0x834C960822A4683F() && func_137())
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && unk_0x834C960822A4683F() && func_136())
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (*Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_133(unk_0x259BE71D8A81D4FA()))
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_41.f_1 == unk_0x4A8C381C258A124D() && func_132(unk_0x259BE71D8A81D4FA()) && Global_262145.f_27220)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_41.f_1 == unk_0x4A8C381C258A124D() && func_129(unk_0x259BE71D8A81D4FA()) && Global_262145.f_27253)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_41.f_1 == unk_0x4A8C381C258A124D() && func_125(unk_0x259BE71D8A81D4FA()) == 15)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0x76CD105BCAC6EB9F() && uLocal_41.f_1 == unk_0x4A8C381C258A124D() && Global_75816 && !Global_44328)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		
			return;
		}
	
		iLocal_58.f_1 = 3;
		return;
	}

	if (!bLocal_49)
		return;

	if (!func_117(uLocal_41.f_1))
		return;

	return;
}

int func_125(int iParam0) // Position - 0x41F3
{
	if (func_128(iParam0) == 243)
		return func_126(iParam0);

	return -1;
}

int func_126(int iParam0) // Position - 0x4210
{
	if (func_127(iParam0, false))
		return Global_1895156[iParam0 /*609*/].f_10.f_182;

	return -1;
}

BOOL func_127(int iParam0, BOOL bParam1) // Position - 0x4233
{
	if (func_92(iParam0))
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || bParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1)
			return true;

	return false;
}

int func_128(int iParam0) // Position - 0x4277
{
	if (func_92(iParam0))
		if (func_127(iParam0, false))
			return Global_1895156[iParam0 /*609*/].f_10.f_33;

	return -1;
}

BOOL func_129(int iParam0) // Position - 0x42A3
{
	if (iParam0 != func_28())
		if (func_131(iParam0, true, true))
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
				return func_130(Global_2657704[iParam0 /*463*/].f_321.f_7) == 15;

	return false;
}

int func_130(int iParam0) // Position - 0x42EA
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

BOOL func_131(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x479E
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

BOOL func_132(int iParam0) // Position - 0x47FE
{
	if (iParam0 != func_28())
		if (func_131(iParam0, true, true))
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
				return func_130(Global_2657704[iParam0 /*463*/].f_321.f_7) == 14;

	return false;
}

BOOL func_133(int iParam0) // Position - 0x4845
{
	return func_134(func_135(iParam0));
}

BOOL func_134(int iParam0) // Position - 0x4857
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_135(int iParam0) // Position - 0x4889
{
	if (func_128(iParam0) == 256)
		return func_126(iParam0);

	return -1;
}

BOOL func_136() // Position - 0x48A7
{
	return Global_2683883.f_24;
}

BOOL func_137() // Position - 0x48B5
{
	return Global_2683883.f_21;
}

BOOL func_138() // Position - 0x48C3
{
	return Global_2764793;
}

BOOL func_139(int iParam0) // Position - 0x48CF
{
	if (iParam0 != func_28())
		if (func_131(iParam0, true, true))
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
				return func_130(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;

	return false;
}

BOOL func_140() // Position - 0x4916
{
	int num;

	if (!unk_0x27E68848F0E5D7D9(uLocal_41.f_1))
		return false;

	num = 0;
	num = unk_0x6EF03BE64E058E2F(uLocal_41.f_1, 0);

	if (!unk_0xD9F5E1FEFD1329E4(num, 0))
		return false;

	if (!(unk_0xFD5C5BBD1FE92BB7(num, -1, 0) == uLocal_41.f_1))
		return false;

	uLocal_41.f_4 = num;
	iLocal_58 = 7;
	return true;
}

void func_141() // Position - 0x496A
{
	if (!unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
	{
		iLocal_58 = 4;
		return;
	}

	return;
}

void func_142() // Position - 0x4985
{
	var unk;
	float num;
	var unk2;
	var unk5;
	var unk8;

	if (!bLocal_48)
		return;

	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		return;

	if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		return;

	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		return;

	unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	num = unk_0xDF93B3CFAC96698F(unk);

	if (num < 5f)
		return;

	unk2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	unk5 = { unk2 - { 3f, 30f, 30f } };
	unk8 = { unk2 + { 3f, 30f, 30f } };

	if (!unk_0x00CC36CA06DD06AD(unk5, unk8) && !unk_0x59A8C2AB2084CAF7(unk5, unk8))
		return;

	unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
	func_11(73, 1);
	return;
}

void func_143() // Position - 0x4A54
{
	var unk;
	var unk2;
	var unk3;
	float num;
	int num2;

	unk = uLocal_41.f_1;

	if (unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
	{
		unk2 = unk_0x6EF03BE64E058E2F(uLocal_41.f_1, 0);
		unk3 = unk_0xFD5C5BBD1FE92BB7(unk2, -1, 0);
	
		if (!(unk3 == uLocal_41.f_1))
			return;
	
		if (unk_0x76CD105BCAC6EB9F() && !unk_0x1B1A446EFA398EB5(unk2))
			return;
	
		unk = unk2;
	}
	else if (!(unk_0x4A8C381C258A124D() == uLocal_41.f_1))
	{
		return;
	}
	else if (!(unk_0x3B5989D5DB08A155() == 4))
	{
		fLocal_51 = 0f;
		func_145(unk, 0f);
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_53.f_4)
	{
		func_145(unk, fLocal_51);
		return;
	}

	if (unk_0x0101C509A6E67F99(unk))
		iLocal_53.f_4 = SYSTEM::TIMERA() + 2000;
	else
		iLocal_53.f_4 = SYSTEM::TIMERA() + 1000;

	num = unk_0xDF93B3CFAC96698F(unk);

	if (num < 0.04f)
	{
		fLocal_51 = 0f;
		func_145(unk, 0f);
		return;
	}

	if (iLocal_53.f_1 == -1)
	{
		fLocal_51 = func_144(unk, 0.13f, 0.06f);
	}
	else
	{
		num2 = iLocal_53.f_1 - SYSTEM::TIMERA();
	
		if (num2 < 5000)
			fLocal_51 = 0f;
		else if (num2 < 15000)
			fLocal_51 = func_144(unk, 0.05f, 0.02f);
		else if (num2 < 30000)
			fLocal_51 = func_144(unk, 0.07f, 0.03f);
		else if (num2 < 45000)
			fLocal_51 = func_144(unk, 0.09f, 0.04f);
		else if (num2 < 600000)
			fLocal_51 = func_144(unk, 0.1f, 0.05f);
		else
			fLocal_51 = func_144(unk, 0.13f, 0.06f);
	}

	func_145(unk, fLocal_51);
	return;
}

float func_144(var uParam0, float fParam1, float fParam2) // Position - 0x4BF6
{
	float num;
	var unk;
	var unk2;

	num = unk_0xD2AA6F822D3A55D2(-fParam1, fParam1);
	unk = unk_0xD2AA6F822D3A55D2(0f, fParam2);

	if (num < 0f)
		num = num - unk;
	else
		num = num + unk;

	if (unk_0x0101C509A6E67F99(uParam0))
	{
		if (unk_0x6F21822F60DC0945(unk_0xBD545F8729E9F413(uParam0)))
			num = num * 4.5f;
		else
			num = num * 3f;
	}
	else
	{
		unk2 = unk_0x4B423FAA24E8ABF0(uParam0);
	
		if (unk_0x78B050AFBA6D1517(unk2))
			num = num * 1.5f;
		else
			num = num * 0.5f;
	}

	num = func_21(num, -1f, 1f);
	return num;
}

void func_145(var uParam0, float fParam1) // Position - 0x4C8A
{
	if (unk_0x76CD105BCAC6EB9F() && !unk_0x1B1A446EFA398EB5(uParam0))
		return;

	if (unk_0x0101C509A6E67F99(uParam0))
		unk_0xD4D1973154415E9B(unk_0xBD545F8729E9F413(uParam0), fParam1);
	else if (unk_0x55B80B6E7AB61270(uParam0))
		unk_0xDEABDA7736297FEB(unk_0xE93EDE86BBB66532(uParam0), fParam1);

	return;
}

void func_146() // Position - 0x4CD5
{
	var unk;

	if (!unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
	{
		iLocal_58 = 4;
		return;
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Global_44355[iLocal_62 /*5*/].f_3 >= 10 || Global_44355[iLocal_62 /*5*/].f_4 >= 15)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
		
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
		}
	}

	if (bLocal_48)
		return;

	unk = unk_0x6EF03BE64E058E2F(uLocal_41.f_1, 0);

	if (!unk_0xD9F5E1FEFD1329E4(unk, 0))
	{
		unk_0x092B9247AF00F5CF(uLocal_41.f_1, 0, 0);
		iLocal_58 = 11;
		return;
	}

	return;
}

void func_147() // Position - 0x4D79
{
	int num;
	var unk;
	var unk2;

	if (SYSTEM::TIMERA() <= iLocal_53.f_3)
		return;

	num = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));

	if (!(num == 7))
	{
		iLocal_53.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
	{
		iLocal_58 = 4;
		iLocal_53.f_3 = -2;
		return;
	}

	unk = unk_0x6EF03BE64E058E2F(uLocal_41.f_1, 0);
	unk2 = unk_0xFD5C5BBD1FE92BB7(unk, -1, 0);

	if (unk2 == uLocal_41.f_1)
	{
		func_148();
		iLocal_53.f_3 = -2;
		return;
	}

	unk_0x7A55A25242FBE562(uLocal_41.f_1, unk, 0);
	iLocal_58 = 9;
	iLocal_53.f_3 = SYSTEM::TIMERA() + 1000;
	return;
}

void func_148() // Position - 0x4E14
{
	if (iLocal_58 == 10)
		return;

	iLocal_58 = 10;

	if (iLocal_46 == -1)
		return;

	func_174(iLocal_46, 2, 5);
	iLocal_53.f_4 = SYSTEM::TIMERA();
	fLocal_51 = 0f;
	return;
}

void func_149() // Position - 0x4E46
{
	if (unk_0x27E68848F0E5D7D9(uLocal_41.f_1))
	{
		iLocal_58 = 10;
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_53.f_3)
		return;

	iLocal_58 = 4;
	iLocal_53.f_3 = -2;
	return;
}

void func_150() // Position - 0x4E78
{
	int num;
	BOOL flag;
	var unk;
	int num2;

	!bLocal_48;
	num = 0;
	flag = false;

	if (flag || unk_0x27E68848F0E5D7D9(uLocal_41.f_1))
	{
		!bLocal_48;
		num = unk_0x6EF03BE64E058E2F(uLocal_41.f_1, 0);
	
		if (!(num == uLocal_41.f_4))
		{
			!bLocal_48;
		
			if (!bLocal_48)
			{
				!bLocal_48;
				unk_0x092B9247AF00F5CF(uLocal_41.f_1, 0, 0);
				iLocal_58 = 11;
				return;
			}
		
			uLocal_41.f_4 = num;
		}
	
		if (flag)
		{
			!bLocal_48;
			func_148();
			return;
		}
	
		if (!bLocal_48)
		{
			!bLocal_48;
			func_148();
			return;
		}
	
		!bLocal_48;
		unk = unk_0xFD5C5BBD1FE92BB7(uLocal_41.f_4, -1, 0);
	
		if (unk == uLocal_41.f_1)
		{
			func_148();
			return;
		}
	
		unk_0x7A55A25242FBE562(uLocal_41.f_1, num, 0);
		iLocal_58 = 9;
		iLocal_53.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!func_123())
	{
		unk_0x974022927CB47E68(uLocal_41.f_1);
		iLocal_58 = 4;
		return;
	}

	if (!bLocal_48)
	{
		num2 = unk_0x9B5C1660CCDF7189(uLocal_41.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num2 == 7)
		{
			if (!unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
			{
				unk_0x974022927CB47E68(uLocal_41.f_1);
				iLocal_58 = 4;
				return;
			}
		}
	}

	return;
}

void func_151() // Position - 0x4F94
{
	var unk;
	var unk4;
	float num;
	int num2;
	int num3;
	BOOL flag;

	if (bLocal_48)
		return;

	if (uLocal_41.f_4 == 0)
	{
		iLocal_58 = 4;
		return;
	}

	if (!unk_0xD9F5E1FEFD1329E4(uLocal_41.f_4, 0))
	{
		uLocal_41.f_4 = 0;
		iLocal_58 = 4;
		return;
	}

	unk = { unk_0xD1A6A821F5AC81DB(uLocal_41.f_1, 1) };
	unk4 = { unk_0xD1A6A821F5AC81DB(uLocal_41.f_4, 1) };
	num = unk_0xED977E2AE2CB16EE(unk, unk4, 1);

	if (num > 3f)
	{
		if (!func_110(Global_44355[iLocal_62 /*5*/].f_2))
		{
			iLocal_58 = 12;
			return;
		}
	
		iLocal_58 = 5;
		iLocal_53.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}

	num2 = unk_0x2EEC0612337D20CE(uLocal_41.f_4);
	num3 = 0;
	flag = true;
	num3 = 1;

	while (flag)
	{
		if (num3 < num2)
		{
			if (unk_0xC39AE5D390581AD5(uLocal_41.f_4, num3, 0))
				flag = false;
			else
				num3 = num3 + 1;
		}
		else
		{
			flag = false;
			num3 = -1;
		}
	}

	if (num3 == -1)
	{
		if (num3 == -1)
		{
			iLocal_58 = 4;
			return;
		}
	}

	func_152();
	unk_0xEBA229B2E0BB05E0(uLocal_41.f_1, uLocal_41.f_4, -1, num3, 1073741824, 1, 0);
	iLocal_58 = 7;
	return;
}

void func_152() // Position - 0x5097
{
	if (!unk_0xFC8BFE4B41177C22(uLocal_41.f_1))
		return;

	if (!unk_0x4FAFF4BCB7633475(uLocal_41.f_1))
	{
		unk_0x4A46A67DB6AC487D(uLocal_41.f_1, 1048576000);
		unk_0x529EC998DD2C51F8(uLocal_41.f_1);
		unk_0x384E72D362B96929(uLocal_41.f_1, 0, -1056964608);
		iLocal_58.f_2 = "";
		unk_0x490EA3A0CF334F58(uLocal_41.f_1);
		unk_0x0FB8E752BCC547A9(uLocal_41.f_1, 200, 0);
		unk_0x0FB8E752BCC547A9(uLocal_41.f_1, 46, 0);
		unk_0xC1BC1B8A5AA67C6B(uLocal_41.f_1, 1);
		unk_0x1CA08719184AFC6F(uLocal_41.f_1, 262144, 0);
		unk_0x8A19BA162BA1DE3E(uLocal_41.f_1, 0);
	}

	if (!bLocal_49)
		return;

	bLocal_49 = false;
	return;
}

void func_153() // Position - 0x512C
{
	if (SYSTEM::TIMERA() < iLocal_53.f_2)
	{
		func_124();
		return;
	}

	func_154();
	iLocal_53.f_2 = -2;
	iLocal_58 = 12;
	return;
}

int func_154() // Position - 0x5156
{
	if (!func_117(uLocal_41.f_1))
		return 0;

	if (!bLocal_49)
		return 0;

	func_155(uLocal_41.f_1);
	iLocal_58.f_2 = "";
	Global_2794162.f_4644 = 1;
	return 1;
}

void func_155(var uParam0) // Position - 0x518F
{
	unk_0x4A46A67DB6AC487D(uParam0, 1048576000);
	unk_0x384E72D362B96929(uParam0, 0, -1056964608);
	unk_0x0FB8E752BCC547A9(uParam0, 200, 0);
	unk_0xC1BC1B8A5AA67C6B(uParam0, 1);
	unk_0x1CA08719184AFC6F(uParam0, 262144, 0);
	unk_0x8A19BA162BA1DE3E(uParam0, 0);
	return;
}

void func_156() // Position - 0x51D0
{
	int num;

	if (iLocal_53 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_53 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
	}

	if (unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
	{
		iLocal_58 = 10;
		return;
	}

	if (func_117(uLocal_41.f_1))
	{
		iLocal_58 = 12;
		return;
	}

	if (iLocal_53 == -2)
		return;

	if (!func_110(Global_44355[iLocal_62 /*5*/].f_2))
		return;

	iLocal_58 = 12;
	return;
}

void func_157() // Position - 0x52A6
{
	return;
}

void func_158() // Position - 0x52AE
{
	int num;
	int i;

	num = 6;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44436[i /*6*/].f_2;
	
		if (!(num == 6))
		{
			if (Global_44436[i /*6*/].f_1 == iLocal_46)
			{
				func_160(i);
				func_159(i);
			}
			else if (Global_44436[i /*6*/].f_1 == 2)
			{
				if (!(iLocal_47 == -1))
					if (iLocal_47 == Global_44436[i /*6*/])
						func_160(i);
			}
		}
	}

	return;
}

void func_159(int iParam0) // Position - 0x5326
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44436[iParam0 /*6*/] = -1;
	Global_44436[iParam0 /*6*/].f_1 = -1;
	Global_44436[iParam0 /*6*/].f_2 = 6;
	Global_44436[iParam0 /*6*/].f_3 = 0;
	Global_44436[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_160(int iParam0) // Position - 0x5373
{
	int num;

	num = Global_44436[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 1:
			func_181();
			break;
	
		case 2:
			func_164(Global_44436[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_163(Global_44436[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_162();
			break;
	
		case 5:
			func_161();
			break;
	
		case 0:
			break;
	
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_161() // Position - 0x53F5
{
	iLocal_58.f_1 = 2;
	return;
}

void func_162() // Position - 0x5402
{
	int num;

	Global_44355[iLocal_62 /*5*/].f_4 = Global_44355[iLocal_62 /*5*/].f_4 + 1;

	if (iLocal_53 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_4 < 9 && Global_44355[iLocal_62 /*5*/].f_4 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_53 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
	
		if (!func_117(uLocal_41.f_1))
			func_110(Global_44355[iLocal_62 /*5*/].f_2);
	}

	return;
}

void func_163(var uParam0) // Position - 0x54C2
{
	int num;

	Global_44355[iLocal_62 /*5*/].f_3 = Global_44355[iLocal_62 /*5*/].f_3 + uParam0;

	if (iLocal_53 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_53 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
	
		if (!func_117(uLocal_41.f_1))
			func_110(Global_44355[iLocal_62 /*5*/].f_2);
	}

	return;
}

void func_164(var uParam0) // Position - 0x5582
{
	uLocal_41.f_3 = uLocal_41.f_3 + uParam0;
	uLocal_41.f_2 = uLocal_41.f_2 + uParam0;
	iLocal_53.f_1 = iLocal_53.f_1 + uParam0;
	iLocal_53 = iLocal_53 + uParam0;
	return;
}

void func_165() // Position - 0x55B2
{
	int num;

	if (!bLocal_48)
	{
		iLocal_61 = -1;
		return;
	}

	if (iLocal_61 < 0)
	{
		iLocal_61 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
		return;
	}

	num = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());

	if (num != iLocal_61)
	{
		if (num > iLocal_61)
			func_166();
	
		iLocal_61 = num;
		return;
	}

	return;
}

void func_166() // Position - 0x55FC
{
	return;
}

void func_167() // Position - 0x5604
{
	if (!(iLocal_53 == -1))
	{
		if (!(iLocal_53 == -2))
		{
			if (SYSTEM::TIMERA() >= iLocal_53)
			{
				func_152();
				iLocal_53 = -2;
				iLocal_58 = 12;
			}
		}
	
		if (SYSTEM::TIMERA() > iLocal_53.f_1)
			func_181();
	}

	return;
}

void func_168(int iParam0) // Position - 0x5643
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44436[i /*6*/])
			func_159(i);
	}

	return;
}

void func_169() // Position - 0x5673
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	iLocal_58 = 4;

	if (!unk_0x1C2F771CDC87A3A5(uLocal_41.f_1, 0))
		if (unk_0x27E68848F0E5D7D9(uLocal_41.f_1))
			iLocal_58 = 10;

	if (bLocal_48)
	{
		func_172();
		func_11(71, 1);
	
		if (unk_0x76CD105BCAC6EB9F())
		{
			num = func_81(2059, -1);
			num2 = ((num / 10) + 1) * 10;
		
			if (num + 1 >= num2)
				func_170(num2);
		
			func_77(2059, num + 1, -1, 1);
			bLocal_63 = true;
		}
		else
		{
			num3 = 0;
			num4 = 0;
			num5 = 0;
			unk_0xDF7F16323520B858(joaat("SP0_SP_NUM_TIMES_DRUNK"), &num3, -1);
			unk_0xDF7F16323520B858(joaat("SP1_SP_NUM_TIMES_DRUNK"), &num4, -1);
			unk_0xDF7F16323520B858(joaat("SP2_SP_NUM_TIMES_DRUNK"), &num5, -1);
			num6 = num3 + num4 + num5;
			num7 = ((num6 / 10) + 1) * 10;
		
			if (num6 + 1 >= num7)
				func_170(num7);
		
			switch (func_67())
			{
				case 0:
					unk_0x1164A75E490C27B6(joaat("SP0_SP_NUM_TIMES_DRUNK"), num3 + 1, 1);
					break;
			
				case 1:
					unk_0x1164A75E490C27B6(joaat("SP1_SP_NUM_TIMES_DRUNK"), num4 + 1, 1);
					break;
			
				case 2:
					unk_0x1164A75E490C27B6(joaat("SP2_SP_NUM_TIMES_DRUNK"), num5 + 1, 1);
					break;
			}
		}
	
		iLocal_58.f_1 = 1;
		return;
	}

	iLocal_58.f_1 = 12;

	if (iLocal_53 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		num8 = iLocal_53 - SYSTEM::TIMERA();
	
		if (num8 <= 0)
			num8 = 0;
	
		num8 = (num8 / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	
		if (num8 < 30)
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
	
		if (num8 < 10)
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
	}

	return;
}

void func_170(int iParam0) // Position - 0x5821
{
	int num;

	num = func_171(81);
	Global_2645174[num /*83*/] = 81;
	Global_2645174[num /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645174[num /*83*/].f_18[0 /*16*/], "", 64);
	return;
}

int func_171(int iParam0) // Position - 0x5858
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645174[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645174[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_172() // Position - 0x58A5
{
	return;
}

void func_173() // Position - 0x58AD
{
	iLocal_53 = uLocal_41.f_2;
	iLocal_53.f_1 = uLocal_41.f_3;
	iLocal_53.f_2 = -2;
	iLocal_53.f_3 = -2;
	return;
}

void func_174(int iParam0, int iParam1, int iParam2) // Position - 0x58D1
{
	func_175(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x58E6
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_177(iParam0, iParam1, iParam2))
		return;

	num = func_176();

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

int func_176() // Position - 0x5968
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

BOOL func_177(int iParam0, int iParam1, int iParam2) // Position - 0x5999
{
	if (func_178(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_178(int iParam0, int iParam1, int iParam2) // Position - 0x59B4
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

void func_179() // Position - 0x5A00
{
	int num;

	bLocal_48 = false;

	if (uLocal_41.f_1 == unk_0x4A8C381C258A124D())
	{
		bLocal_48 = true;
		Global_44568 = 1;
		Global_44570 = Global_44570 + 1;
	}

	if (!unk_0x1C2F771CDC87A3A5(uLocal_41.f_1, 0))
	{
		num = func_70(uLocal_41.f_1);
	
		switch (num)
		{
			case 17:
				unk_0x397CF4F4C8B17365(uLocal_41.f_1, "AMANDA_DRUNK");
				break;
		
			case 19:
				unk_0x397CF4F4C8B17365(uLocal_41.f_1, "LAMAR_DRUNK");
				break;
		}
	}

	return;
}

void func_180() // Position - 0x5A6D
{
	if (!(iLocal_46 == -1))
		return;

	iLocal_46 = func_120(uLocal_41.f_1);

	if (iLocal_46 == -1)
		return;

	iLocal_62 = func_119(iLocal_46);
	return;
}

void func_181() // Position - 0x5A9B
{
	int num;

	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0x1C2F771CDC87A3A5(uLocal_41.f_1, 0))
		{
			num = func_70(uLocal_41.f_1);
		
			if (Global_44355[iLocal_62 /*5*/].f_4 > 0)
			{
				switch (num)
				{
					case 0:
						func_183(uLocal_41.f_1, "POST_STONED", 24);
						break;
				
					case 1:
						func_183(uLocal_41.f_1, "POST_STONED", 24);
						break;
				
					case 2:
						func_183(uLocal_41.f_1, "POST_STONED", 24);
						break;
				}
			}
		
			switch (num)
			{
				case 17:
					unk_0x397CF4F4C8B17365(uLocal_41.f_1, "AMANDA_NORMAL");
					break;
			
				case 19:
					unk_0x397CF4F4C8B17365(uLocal_41.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}

	func_152();

	if (bLocal_48)
		Global_44568 = 0;

	func_182();
	unk_0x268BE77F77533D03(func_116(0));
	unk_0x268BE77F77533D03(func_116(2));
	unk_0x268BE77F77533D03(func_116(1));
	Global_1945110 = 0;

	if (unk_0x486FF5D06E9659F1(joaat("appemail")) > 0)
		func_41(0);

	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_182() // Position - 0x5B9F
{
	var unk;
	var unk2;
	var unk3;

	if (unk_0x1C2F771CDC87A3A5(uLocal_41.f_1, 0))
		return;

	unk = uLocal_41.f_1;

	if (unk_0x7F420695E3F776FB(uLocal_41.f_1, 0))
	{
		unk2 = unk_0x6EF03BE64E058E2F(uLocal_41.f_1, 0);
		unk3 = unk_0xFD5C5BBD1FE92BB7(unk2, -1, 0);
	
		if (!(uLocal_41.f_1 == unk3))
			return;
	
		unk = unk2;
	}
	else if (!(unk_0x3B5989D5DB08A155() == 4) || !(unk_0x4A8C381C258A124D() == uLocal_41.f_1))
	{
		return;
	}

	fLocal_51 = 0f;
	func_145(unk, 0f);
	return;
}

void func_183(var uParam0, char* sParam1, int iParam2) // Position - 0x5C19
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_184(iParam2), 1);
	return;
}

char* func_184(int iParam0) // Position - 0x5C30
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

