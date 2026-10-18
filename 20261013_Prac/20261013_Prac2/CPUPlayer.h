#pragma once
#include"Player.h"

#include<string>

class CPUPlayer:public Player
{
public:
	CPUPlayer(const string &name);

	int ChoiceAction(int card,int pileChips) override;
};

