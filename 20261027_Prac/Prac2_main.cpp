#include<iostream>
#include"Prac2_Enemy.h"
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;

const int HP_MAX = 70;
const int HP_MIN = 30;
const int INDEX = 3;
const int DAMEGE_MIN = 20;
const int DAMEGE_MAX = 70;

int main(void)
{
	srand((unsigned int)time(NULL));

	vector<Prac2_Enemy>enemys;

	cout << "現在HP" << endl;
	for (int i = 0;i < INDEX;i++)
	{
		int value = rand() % HP_MAX + HP_MIN;
		enemys.push_back(Prac2_Enemy(value));
	}

	for (const Prac2_Enemy &enemy:enemys)
	{
		enemy.ShowStatus();
	}
	cout << "攻撃する敵を選択してください" << endl;
	
	int choice;
	cin >> choice;

	int damage = rand() % DAMEGE_MAX+ DAMEGE_MIN;
	cout << "ダメージ：" << damage << endl;

	enemys[choice - 1].Damege(damage);
	

	cout << "ダメージ後のHP" << endl;

	int i = 0;
	for (Prac2_Enemy &enemy:enemys)
	{
		if (enemys[i].GetHp() <= 0)
		{
			enemys.erase(enemys.begin() + 1);
		}
		
		i++;
	}
	


	cout << "現在HP" << endl;
	for (const Prac2_Enemy& enemy : enemys)
	{
		enemy.ShowStatus();
	}

	cout << "敵の数は、" << enemys.size() << endl;

	return 0;
}