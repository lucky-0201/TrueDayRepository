#pragma once
#include"Player.h"

#include<string>

class HumanPlayer:public Player
{
public:
	HumanPlayer(const string &name);

	int ChoiceAction(int card,int pileChips) override;
};

