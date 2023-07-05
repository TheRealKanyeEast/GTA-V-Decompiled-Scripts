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
#endregion

void main() // Position - 0x0
{
	int num;
	BOOL flag;

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
	num = -1;
	flag = false;

	if (unk_0x96CFB880BAC634CE(3))
		func_5();

	while (true)
	{
		if (!flag)
		{
			switch (func_1(unk_0x4A8C381C258A124D()))
			{
				case 1:
					if (unk_0xB3157976738FC0C0("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						flag = true;
					}
					break;
			
				case 2:
					if (unk_0xB3157976738FC0C0("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						flag = true;
					}
					break;
			
				default:
					if (unk_0xB3157976738FC0C0("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						flag = true;
					}
					break;
			}
		}
		else if (num == -1)
		{
			num = unk_0x1DD05E817C89C737();
		}
		else if (unk_0x1DD05E817C89C737() > num + 8000)
		{
			func_5();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

int func_1(var uParam0) // Position - 0xD2
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_2(i) == num)
				return i;
		}
	}

	return 145;
}

int func_2(int iParam0) // Position - 0x10F
{
	if (func_4(iParam0))
		return func_3(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_3(int iParam0) // Position - 0x134
{
	return Global_2058[iParam0 /*29*/];
}

BOOL func_4(int iParam0) // Position - 0x143
{
	return iParam0 < 3;
}

void func_5() // Position - 0x14F
{
	unk_0x22A76EDE2316E9A1();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

