#include "EnemySample4.h"
#include<iostream>

using namespace std;

EnemySample4::EnemySample4():hp(100){}

void EnemySample4::TakeDamage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}

void EnemySample4::ShowStatus()const
{
	cout << "“G‚ÌHPF" << hp << endl;
}