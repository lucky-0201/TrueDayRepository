#include "HumanPlayer.h"

#include<iostream>

using namespace std;

HumanPlayer::HumanPlayer(const string& name): Player(name){}

int HumanPlayer::ChoiceAction(int card,int pileChips)
{

	while (true)
	{
		cout << " 公開カード： " << card << endl;

		cout << " 置かれたチップ： " << pileChips << endl;

		cout << " 所持チップ： " << GetChips() << endl;
		
		
		cout << "１：カードをとる\n";
		cout << "２：チップをハラ手次へ回す\n";
		cout << "選択\n";
		
		int choice;

		cout << "数字を入力してください" << endl;
		cout << " 1:カードを取る　2:カードを取らない " << endl;

		cin >> choice;

		if (choice > Config::CHOICE_MIN || choice < Config::CHOICE_MAX)
		{
			cout << "入力に誤りがあります。再度入力してください" << endl;
		}
		else
		{
			break;
		}

		if (choice == Config::CHOICE_MIN)
		{
			return Config::CHOICE_MIN;
		}
		else if (choice == Config::CHOICE_MAX)
		{
			if (!HasChips())
			{
				cout << " チップがないため、カードをとります " << endl;

				return Config::CHOICE_MIN;
			}

			return Config::CHOICE_MAX;
		}


	}
}