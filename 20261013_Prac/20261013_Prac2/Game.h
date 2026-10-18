#pragma once
#include "Player.h"
#include "HumanPlayer.h"
#include "CPUPlayer.h"
#include "CardManager.h"

class Game
{
private:
    CardManager cardManager;

    HumanPlayer human;
    CPUPlayer cpu1;
    CPUPlayer cpu2;

    Player* players[Config::PLAYER_COUNT];

public:
    Game();

    void Initialize();
    void Run();
    void ShowResults();
};