#pragma once

class Sorcerer
{
protected:

	int HP = 0;
	int Cursed_Ene = 0;

public:

	

	virtual void ShowStatus();

	virtual void UseTechnique()= 0;
};

