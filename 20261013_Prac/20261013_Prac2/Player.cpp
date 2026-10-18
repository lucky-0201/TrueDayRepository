#include "Player.h"
#include"Config.h"
#include<iostream>

Player::Player(const string &playername)
{
	name = playername;
	chips = Config::CHIPS;
	cardcount = 0;
}

Player::~Player(){ }

const string& Player::GetName() const
{
	return name;
}

int Player::GetChips() const
{
	return chips;
}

int Player::GetCardCount() const
{
	return cardcount;
}

int Player::GetCard(int index)const
{
	if (index < 0 || index >= cardcount)
	{
		return -1;
	}

	return crads[index];
}

bool Player::HasChips() const
{
	return chips > 0;
}

bool Player::PayChip()
{
	if (chips <= 0)
	{
		return false;
	}

	chips--;
	return true;
}

void Player::ReceiveChips(int amount)
{
	if (amount > 0)
	{
		chips += amount;
	}
}

void Player::TakeCard(int card)
{
	if (cardcount < Config::MAX_OLL_CARD)
	{
		crads[cardcount] = card;
		cardcount++;
	}
}

bool Player::HasAdjacentCard(int card)const
{
	for (int i = 0;i < cardcount;i++)
	{
		if (crads[i] == card - 1 ||
			crads[i] == card + 1)
		{
			return true;
		}
	}

	return false;
}

int Player::CalculateScore()const
{
	int sortedCards[Config::MAX_OLL_CARD];

	for (int i = 0;i < cardcount;i++)
	{
		sortedCards[i] = crads[i];
	}

	for (int i = 1;i < cardcount;i++)
	{
		int key = sortedCards[i];
		int j = i - 1;

		while (j >= 0 && sortedCards[j] > key)
		{
			sortedCards[j + 1] = sortedCards[j];
			j--;
		}

		sortedCards[j + 1] = key;
	}

	int Score = 0;

	for (int i = 0;i< cardcount;i++)
	{
		if (i == 0||
			sortedCards[i] != sortedCards[i -1]+1)
		{
			Score += sortedCards[i];
		}
	}

	Score -= chips;

	return Score;
}

void Player::ShowCards() const
{
	cout << name << "のカード:";

	if (cardcount == 0)
	{
		cout << "なし\n";
	}

	for (int i = 0;i<cardcount;i++)
	{
		cout << crads[i] << " ";
	}

	cout << "\n";
}