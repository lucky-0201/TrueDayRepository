
#pragma once
#include<memory>
#include<vector>
#include"Enemy.h"
class Enemy;

class Game
{
private:
	std::vector<std::unique_ptr<Enemy>> enemies;

	void CreateEnemies();

	void DrawEnemies() const;

	void AttackEnemies(int targetNumber);

	bool IsAllEnemiesDefeated() const;


public:
	void Run();

};

