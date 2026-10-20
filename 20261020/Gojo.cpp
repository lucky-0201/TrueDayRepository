#include "Gojo.h"
#include<iostream>

using namespace std;

void Gojo::ShowStatus()
{
	cout << "五条　悟" << endl;

	HP = 999;
	Cursed_Ene = 999;

	cout << "体力：" << HP << endl;
	cout << "呪力：" << Cursed_Ene << endl;
}

void Gojo::UseTechnique()
{
	cout << "領域展開：無量空処" << endl;
}