#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_yamaguchi.h"
using namespace std;

//“ü—ÍŠÖ”
void InputCheck(int Input[])
{

	cout << "CPU‚Æ‚Ì‘ÎíƒQ[ƒ€‚Æ‚µ‚Ä3‚Â‚Ì”š‚ğ“–‚Ä‚Ü‚µ‚å‚¤\n";
	while (true)
	{
		for (int i = 0; i < NUMBER; i++)
		{
			cout << i + 1 << "s–Ú" << endl;
			cin >> Input[i];
		}
		if (Input[0] == Input[1]||
			Input[0] == Input[2] ||
			Input[1] == Input[2])
		{
			cout << "“¯‚¶”š‚Í‚Q‰ñ“ü—Í‚Å‚«‚Ü‚¹‚ñ" << endl;
		}
		else
		{
			break;
		}

	}
}

//CPU“ü—ÍŠÖ”
void CPUinput(int Number[])
{
	while (true)
	{
		for (int i = 0; i < NUMBER; i++)
		{
			Number[i] = rand() % MAX;
		}
		if (Number[0] == Number[1] ||
			Number[0] == Number[2] ||
			Number[1] == Number[2])
		{

		}
		else
		{
			break;
		}
	}
}

//Šî€”šŠÖ”
void BaseNumbersFunction(int Number[])
{
	while (true)
	{
		for (int i= 0;i < NUMBER;i++)
		{
			Number[i] = rand() % MAX;
		}
		if (Number[0] == Number[1] ||
			Number[0] == Number[2] || 
			Number[1] == Number[2])
		{

		}
		else
		{
			break;
		}
	}
}

//”»’èŠÖ”
void Judg(int num[],int baseNumber[],bool &Delib)
{

	int Hit = 0;
	for (int i= 0;i < NUMBER;i++)
	{
		if (num[i] == baseNumber[i])
		{
			cout << num[i] << ":";
			cout << "[Hit]" << endl;
			Hit++;
		}
		else
		{
			cout << num[i] <<":";
			cout <<  "[Miss]\n";
		}

		if (Hit == 3)
		{
			Delib = true;
		}
	}

	
}

//ƒQƒJƒ“
void Game()
{

	//—”‰Šú‰»
	srand((unsigned int)time(NULL));

	int BaseNumber[NUMBER];
	int player[NUMBER];
	int cpu[NUMBER];
	

	BaseNumbersFunction(BaseNumber);

	while(true)
	{
		bool Dekideration = false;
		cout << "=========== PlayerTurn =================" << endl;
		InputCheck(player);

		Judg(player,BaseNumber,Dekideration);
		
		if (Dekideration  == true)
		{
			cout << "Player Win\n";
			break;
		}
		cout << "============ CPU Turn =============================" << endl;
		CPUinput(cpu);
		Judg(cpu, BaseNumber,Dekideration);

		if (Dekideration == true)
		{
			cout << "CPU Win";
			break;
		}
		
	}
}