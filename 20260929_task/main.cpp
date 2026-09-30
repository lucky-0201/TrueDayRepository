#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Game.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	Game game;
	
	game.gameStart();
	
	
	return 0;
}