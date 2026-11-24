#pragma once

#include<iostream>
#include<string>

using namespace std;

class Enemy
{
private:
	
	string name;
	int hp;


public:
	Enemy(const string &name);
	~Enemy();

	int GetHp()const;

	void Draw()const;

	void TakeDamage(int damage);





};

