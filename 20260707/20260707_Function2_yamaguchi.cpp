#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_yamaguchi.h"
using namespace std;

//
int InputCheck(int min, int max)
{
	int Input;
	cout << "CPUとの対戦ゲームとして3つの数字を当てましょう。" << endl;
	while (true)
	{
		cin >> Input;
		if (Input < min || max <Input)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}


	return Input;
}
void P_Array()
{
	int P_ary[NUMBER];
	for (int i = 0; i < 3; i++)
	{
		P_ary[i] = rand() % 10;

		cout << P_ary[i];
	}
}

void C_Array()
{
	int C_ary[NUMBER];
	for (int i = 0; i < 3; i++)
	{
		C_ary[i] = rand() % 10;

		cout << C_ary[i];
	}
}
void Game()
{
	//変数
	int playerChoice;
	int playerC;
	int CpuC;
	int i;

	
	

	cout << "あなたの数字は以下の通りです。" << endl;
	P_Array();
	cout << "\n";

	for (int j = 0;j < NUMBER;j++)
	{
		playerChoice = InputCheck(MIN,MAX);

	}
	cout << "CPUの数字は" << endl;
	C_Array();

	//if (playerChoice == )
	{
		cout << "Hit" << endl;
	} 
	
}