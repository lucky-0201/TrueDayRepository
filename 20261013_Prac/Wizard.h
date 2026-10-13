#pragma once
#include"Character.h"

using namespace std;

class Wizard:public Character
{
public:
	Wizard(string name);

	void Attack()override;

};

