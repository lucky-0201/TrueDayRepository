#pragma once
#include"Player.h"
#include"CPU.h"


class Game
{
public:

	Game();

	void gameStart();


private :
	Player player;
	CPU cpu;
};

