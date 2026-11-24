#include "Enemy.h"

using namespace std;

Enemy::Enemy(const string &name):name(name),hp(100)
{
	cout <<  name << "が出現しました\n";
}

Enemy::~Enemy()
{
	cout << name << "が破棄されました\n" ;
}

int Enemy::GetHp() const
{
	return hp;
}

void Enemy::Draw()const
{
	cout <<  "名前：" << name << "\n";
	cout << "HP:"  << hp << "\n";
}

void Enemy::Damage(int damage)
{
	hp -= damage;

	if (hp <= 0)
	{
		hp = 0;
	}

	cout << name << "は" << damage << "のダメージを受けました\n";
	cout << "残りHP:" << hp << "\n";
}