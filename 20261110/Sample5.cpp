#include<iostream>

using namespace std;

class Character
{
private:
	int hp;
public:
	Character();

	void TakeDamage(int damage);
	void ShowStatus();
};

class Player:public Character{};

class Enemy:public Character{};

Character::Character():hp(100){}

void Character::TakeDamage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}

void Character::ShowStatus()
{
	cout << "HPF" << hp << endl;
}


int main(void)
{
	//Player player;
	/*Enemy enemy;

	Character* target = &enemy;*/

	/*target->TakeDamage(30);

	enemy.ShowStatus();*/

	/*Enemy* enemy = new Enemy();

	enemy->TakeDamage(30);
	enemy->ShowStatus();

	delete enemy;
	enemy = nullptr;*/

	//Enemy‚ğ¶¬‚µ‚ÄŠÇ—
	unique_ptr<Enemy> enemy = make_unique<Enemy>();

	enemy->TakeDamage(60);

	cout << "“G‚ÌHPF\n";

	enemy->ShowStatus();

	return 0;
}