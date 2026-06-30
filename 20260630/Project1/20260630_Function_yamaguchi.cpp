#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_yaamguchi.h"
using namespace std;

//入力関数
int InputCheck(int min,int max)
{
	int Input;

	while (true)
	{
		cin >> Input;
		if (min > Input|| max < Input)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}
}

//ゲーム関数
void Game()
{
	int player;
	int CPU;



}