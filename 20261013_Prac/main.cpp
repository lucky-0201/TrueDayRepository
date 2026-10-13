#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"BattleManager.h"
#include"Wizard.h"


using namespace std;

int main(void)
{
	//コンストラクタ
	Player player("勇者");
	Enemy enemy("魔物");
	Boss boss("魔王");
	Wizard wiard("魔法使い");

	
	BattleManager bat;

	bat.StartBattle(&player);

	bat.StartBattle(&wiard);

	bat.StartBattle(&enemy);

	bat.StartBattle(&boss);
	return 0;
}