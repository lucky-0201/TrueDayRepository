#include<iostream>
#include"Sorcerer.h"
#include"Gojo.h"
#include"Inumaki.h"
#include"Megumi.h"

using namespace std;

int main(void)
{

	Megumi megumi;
	Inumaki inumaki;
	Gojo gojo;

	Sorcerer* sorcerer[3] = { &megumi,&inumaki,&gojo };

	for (int i = 0;i < 3;i++)
	{
		sorcerer[i]->ShowStatus();
		sorcerer[i]->UseTechnique();
		cout << endl;
	}

	return 0;
}