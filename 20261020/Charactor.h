#pragma once
class Charactor
{
public:
	int hp = 100;

	//‹¤’Ê‚Ìˆ—	
	virtual void ShowStatus();

	//”h¶ƒNƒ‰ƒX‚ÉÀ‘•‚·‚é
	virtual void Attack() = 0;

};

