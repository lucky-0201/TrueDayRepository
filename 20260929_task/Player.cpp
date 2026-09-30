#include<iostream>
#include "Player.h"
#include"Config.h"

using namespace std;

void Player::InputHand()
{
	while (true)
	{
		cin >> hand;
		if (hand > MIN_HAND || hand < MAX_HAND)
		{
			break;
		}
		cout << "入力に誤りがあります\n";
	}
}

void Player::Showhand()
{
	switch(hand)
	{
	case gu:
		cout << "グー\n";
		break;
	case tyoki:
		cout << "チョキ\n";
		break;
	case pa:
		cout << "パー\n";
		break;
	}
}

int Player::AngelHand()
{
	return hand;
}