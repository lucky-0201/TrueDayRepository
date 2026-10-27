#pragma once
class Prac2_Enemy
{
private:
	int hp;
	int damage;
public:

	Prac2_Enemy(int hp);
	~Prac2_Enemy();

	void Damege(int damage);

	void ShowStatus()const;

	int GetHp()const;

};

