#pragma once
#include"Config.h"

#include<vector>
#include<string>

using namespace std;

class Player
{
private:
	string name;
	int chips;
	int crads[Config::MAX_OLL_CARD];
	int cardcount;

public:
    Player(const std::string& playerName);
    virtual ~Player();

    virtual int ChoiceAction(int card, int pileChips) = 0;

    const std::string& GetName() const;
    int GetChips() const;
    int GetCardCount() const;
    int GetCard(int index) const;

    bool HasChips() const;
    bool PayChip();
    void ReceiveChips(int amount);
    void TakeCard(int card);

    bool HasAdjacentCard(int card) const;
    int CalculateScore() const;
    void ShowCards() const;











};

