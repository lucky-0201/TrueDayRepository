#include "Game.h"
#include <iostream>

Game::Game(): human("人間"),cpu1("CPU1"),cpu2("CPU2")
{
    players[0] = &human;
    players[1] = &cpu1;
    players[2] = &cpu2;
}

void Game::Initialize()
{
    cardManager.CreateDeck();
    cardManager.Shuffle();

    std::cout << "ゲシェンクを開始します！\n";
}

void Game::Run()
{
    int currentPlayer = 0;
    int deckIndex = 0;
    int pileChips = 0;

    while (deckIndex < Config::USE_CARD)
    {
        int card = cardManager.GetCard(deckIndex);

        std::cout << "\n====================\n";
        std::cout << "公開カード: " << card << "\n";
        std::cout << "カード上のチップ: " << pileChips << "\n";

        Player* player = players[currentPlayer];

        std::cout << "手番: " << player->GetName() << "\n";

        int action;

        if (!player->HasChips())
        {
            std::cout << "チップがないためカードを取ります。\n";
            action = Config::CHOICE_MIN;
        }
        else
        {
            action = player->ChoiceAction(card, pileChips);
        }

        if (action == Config::CHOICE_MAX)
        {
            if (player->PayChip())
            {
                pileChips++;
            }

            currentPlayer =
                (currentPlayer + 1) % Config::PLAYER_COUNT;
        }
        else
        {
           
            player->TakeCard(card);
            player->ReceiveChips(pileChips);

            std::cout << player->GetName()
                << " がカード " << card
                << " とチップ " << pileChips
                << " 枚を獲得しました。\n";

            pileChips = 0;
            deckIndex++;

            
        }
    }

    ShowResults();
}

void Game::ShowResults()
{
    std::cout << "\n========== ゲーム終了 ==========\n";

    int bestScore = 0;

    for (int i = 0; i < Config::PLAYER_COUNT; i++)
    {
        Player* player = players[i];

        std::cout << "\nプレイヤー: "
            << player->GetName() << "\n";

        player->ShowCards();

        std::cout << "残りチップ: "
            << player->GetChips() << "\n";

        int score = player->CalculateScore();

        std::cout << "最終得点: " << score << "\n";

        if (i == 0 || score < bestScore)
        {
            bestScore = score;
        }
    }

    std::cout << "\n========== 勝敗判定 ==========\n";

    for (int i = 0; i < Config::PLAYER_COUNT; i++)
    {
        if (players[i]->CalculateScore() == bestScore)
        {
            std::cout << players[i]->GetName()
                << " の勝利！\n";
        }
    }
}