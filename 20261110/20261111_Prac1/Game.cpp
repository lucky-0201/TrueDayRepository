#include "Game.h"
#include"Enemy.h"
#include<iostream>
#include <limits>

void Game::CreateEnemies()
{
	for (int i = 0; i < 3; ++i)
	{
		enemies.push_back(std::make_unique<Enemy>(100));
	}
}

void Game::DrawEnemies() const
{
	std::cout << "\n----- 敵のHP -----\n" << std::endl;

	for (size_t i = 0; i < enemies.size(); ++i)
	{
		std::cout << "敵" << i + 1 << ": " << enemies[i]->GetHp();
		if (!enemies[i]->IsAlive())
		{
			std::cout << " (撃破)";

		}
		std::cout << " \n";
	}
}

void Game::AttackEnemies(int targetNumber)
{
	targetNumber -= 1;
	if (targetNumber < 0 || targetNumber > static_cast<int>(enemies.size()))
	{
		std::cout << "無効なターゲット番号です。\n";
		return;
	}
	enemies[targetNumber]->TakeDamage(30);
	std::cout << "敵" << targetNumber + 1 << "に30のダメージを与えました。\n";
}

bool Game::IsAllEnemiesDefeated() const
{
	for (const auto& enemy : enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}
	return true;
}

void Game::Run()
{
	CreateEnemies();
	while (true)
	{
		DrawEnemies();
		if (IsAllEnemiesDefeated())
		{
			std::cout << "すべての敵を撃破しました！\n";
			break;
		}
		int targetNumber;
		std::cout << "攻撃する敵の番号を入力してください (1-" << enemies.size() << "): ";
		std::cin >> targetNumber;
		if (std::cin.fail())
		{
			std::cin.clear(); // エラー状態をクリア
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 入力バッファをクリア
			std::cout << "無効な入力です。数字を入力してください。\n";
			continue;
		}
		AttackEnemies(targetNumber);
	}
}