#include "Inumaki.h"
#include<iostream>

using namespace std;

void Inumaki::ShowStatus()
{
	cout << "狗巻　棘" << endl;

	HP = 90;
	Cursed_Ene = 70;

	cout << "体力：" << HP << endl;
	cout << "呪力：" << Cursed_Ene << endl;
}

void Inumaki::UseTechnique()
{
	cout << "呪言：つぶれろ!!" << endl;
}