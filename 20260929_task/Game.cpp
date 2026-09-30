#include <iostream>
#include "Game.h"
using namespace std;

void Game::gameStart()
{
	
	cout << "============================================\n";
	cout << "ゲームスタート\n" << endl;
	cout << "============================================\n";
	player.InputHand();
	player.Showhand();
	cpu.cpuHand();
	cpu.cpuShowHand();
	jug.jugement(&player,&cpu);
}