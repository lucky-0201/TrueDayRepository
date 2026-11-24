#include "Enemy.h"

#include<iostream>

using namespace std;

Enemy::Enemy(const string &name):name(name),hp(100)
{
	

	cout << name << "が生成されました" << endl;
}

Enemy::~Enemy()
{
	cout << name << "が破棄されました" << endl;
}

void Enemy::Draw()const
{
	cout << "名前：" << name << endl;
	cout << "HP：" << hp <<  endl;
}

void Enemy::TakeDamage(int damage)
{
	hp -= damage;

	if (hp <= 0)
	{
		hp = 0;
	}

	cout << name << "は" << damage << "のダメージを受けました\n";
	cout << "残りHP:" << hp << "\n";
}

int Enemy::GetHp()const
{
	return hp;
}