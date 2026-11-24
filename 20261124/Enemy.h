#pragma once
#include<iostream>
#include<string>

using namespace std;

class Enemy
{
private:
	std::string name;
	int hp;


public:
	Enemy(const std::string &name);

	~Enemy();

	int GetHp()const;

	void Draw()const;

	void Damage(int damage);


};

