#include "Judge.h"
#include<iostream>
#include"Config.h"
using namespace std;


void Judge::jugement(Player *player,CPU *cpu)
{
	int playerHand = player->AngelHand();
	int cpuHand = cpu->DemonHand();

	int God_juge = playerHand - cpuHand;
	//0,1,2

	if (God_juge == -1 || God_juge == -2)
	{
		cout << "Player Win" << endl;
	}
	if (God_juge == 0)
	{
		cout << "Draw" << endl;
	}
	else
	{
		cout << "CPU Win" << endl;
	}
}