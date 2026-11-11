#include "Enemy.h"

Enemy::Enemy(int health) : hp(health)
{
}

void Enemy::TakeDamage(int damage)
{
	if (!IsAlive())
	{
		return;
	}

	hp -= damage;

	if (hp < 0) { hp = 0; }
}

int Enemy::GetHp() const
{
	return hp;
}

bool Enemy::IsAlive() const
{
	return hp > 0;
}