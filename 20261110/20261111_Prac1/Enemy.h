#pragma once
class Enemy
{
private:
	int hp;

public:

	Enemy(int health);

	void TakeDamage(int damage);

	int GetHp() const;

	bool IsAlive() const;

};