#pragma once
#include"Config.h"

class CardManager
{
private:
	int deck[Config::USE_CARD];

public:
	CardManager();

	void CreateDeck();

	void Shuffle();

	int GetCard(int index)const;
};

