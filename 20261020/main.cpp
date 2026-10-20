#include<iostream>
#include"Charactor.h"
#include"Enemy.h"
#include"Player.h"

using namespace std;

int main(void)
{
	//Charactor charactor;

	Player player;
	Enemy enemy;

	/*player.ShowStatus();
	enemy.ShowStatus();

	player.Attack();
	enemy.Attack();*/

	Charactor* charactors[2] = { &player,&enemy };

	for (int i = 0;i < 2;i++)
	{
		charactors[i]->ShowStatus();
		charactors[i]->Attack();
	}

	return 0;
}

