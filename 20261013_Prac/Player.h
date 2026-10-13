#pragma once
#include"Character.h"

using namespace std;

class Player:public Character
{
private:


public:
	Player(string name);

	void Attack()override;
};

