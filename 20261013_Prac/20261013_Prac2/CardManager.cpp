#include "CardManager.h"

#include<iostream>
#include<ctime>
#include<cstdlib>

CardManager::CardManager()
{
	for (int i = 0;i < Config::USE_CARD;i++)
	{
		deck[i] = 0;
	}
}

void CardManager::CreateDeck()
{
	int allCards[Config::MAX_OLL_CARD];

	for (int i = 0;i < Config::MAX_OLL_CARD;i++)
	{
		allCards[i] = Config::MIN_CARD + 1;
	}

	srand((unsigned int)time(NULL));

	for (int i = Config::MAX_OLL_CARD - 1;i > 0;i--)
	{
		int j = rand() % (i + 1);

		int temp = allCards[i];
		allCards[i] = allCards[j];
		allCards[j] = temp;

	}

	for (int i = 0;i < Config::USE_CARD;i++)
	{
		deck[i] = allCards[i];
	}
}

void CardManager::Shuffle()
{
	for (int i = Config::USE_CARD - 1;i > 0;i--)
	{
		int j = rand() % (i + 1);

		int temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

int CardManager::GetCard(int index) const
{
	if (index < 0 || index >= Config::USE_CARD)
	{
		return -1;
	}

	return deck[index];
}