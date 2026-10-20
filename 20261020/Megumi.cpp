#include "Megumi.h"
#include<iostream>

using namespace std;

void Megumi::ShowStatus()
{
	cout << "伏黒　恵" << endl;

	HP = 100;
	Cursed_Ene = 80;
	cout << "体力：" << HP << endl;
	cout << "呪力：" << Cursed_Ene << endl;
}

void Megumi::UseTechnique()
{
	cout << "式神：八握剣異戒神将魔虚羅を召喚した！" << endl;
}