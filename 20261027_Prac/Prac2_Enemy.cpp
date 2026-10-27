#include "Prac2_Enemy.h"
#include<iostream>

using namespace std;

Prac2_Enemy::Prac2_Enemy(int hp)
{
	this->hp = hp;
	
}

Prac2_Enemy::~Prac2_Enemy()
{

}

void Prac2_Enemy::Damege(int damage)
{
	hp -=  damage;
}

void Prac2_Enemy::ShowStatus()const
{
	cout << "Enemy HP:" << hp << endl;
}

int Prac2_Enemy::GetHp() const
{
	return hp;
}