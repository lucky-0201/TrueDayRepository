#include "Enemy.h"
#include<iostream>

using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp ;
}

Enemy::~Enemy() {};

void Enemy::ShowHP()const
{
	cout << "Enemy@HPF" << hp << endl;
}