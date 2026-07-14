#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_yamaguchi.h"
using namespace std;

int InputCheck(int max,int min,int Number)
{
	int Input;
	cout << "配られた数字を入力してください" << endl;
	while (true)
	{
		cin >> Input;

		for(int i;i < SELECT_NUMBER;i++)
		{

		}
		if (Input < min || max < Input)
		{
			cout << "Why?" << endl;
		}
		else
		{
			break;
		}
	}
	

	return Input;
}

void GetCard(int &Number)
{
	for (int i = 0; i < 10; i++)
	{
		Number = rand() % RUNDAM_NUMBER;
		cout << "あなたの手札：" << Number << "です。\n";
	}
}

void Game()
{

	//
	int player;
	int CPU;
	int HighScore = 3;
	int LowScore = 1; 
	int Number = 0;
	int playerScore = 0;
	int CPUScore = 0;
	int Round = 0;

	//
	srand((unsigned int)time(NULL));

	cout << "=============== Player Get Number==================" << endl;
	GetCard(Number);
	while (true)
	{
		player = InputCheck(MAX, MIN, SELECT_NUMBER);

		CPU = rand() % RUNDAM_NUMBER;
		if (player > CPU)
		{
			cout << "playerScore+" << HighScore << endl;
			playerScore += HighScore;
			Round++;
		}
		else if (player < CPU)
		{
			cout << "CpuScore+" << HighScore << endl;
			CPUScore += HighScore;
			Round++;
		}
		else if (player == CPU)
		{
			cout << "playerScore+"<< LowScore << endl;
			cout << "cpuScore+"<< LowScore << endl;
			playerScore += LowScore;
			CPUScore += LowScore;
			Round++;
		}

		if (Round == 7)
		{
			cout << "プレイヤースコア：" << playerScore << endl;
			cout << "CPUスコア" << CPUScore << endl;
			


			if (playerScore > CPUScore)
			{
				cout << "player Win" << endl;
			}
			else if (playerScore < CPU)
			{
				cout << "CPU Win" << endl;
			}
			break;
		}
	}
	
}