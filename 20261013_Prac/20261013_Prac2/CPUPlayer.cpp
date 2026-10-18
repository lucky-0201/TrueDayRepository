#include "CPUPlayer.h"
#include"Config.h"

#include<iostream>

CPUPlayer::CPUPlayer(const string &name):Player(name)
{

}

int CPUPlayer::ChoiceAction(int card,int pileChips)
{
	if (card <= 10 ||
		pileChips >= 3 ||
		HasAdjacentCard(card))
	{
		cout << GetName() << "はカードをとります\n";
		return Config::CHOICE_MIN;
	}

	cout << GetName() << "は次へ回します\n";
	return Config::CHOICE_MAX;
}