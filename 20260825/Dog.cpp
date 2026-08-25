#include"Dog.h"
#include<iostream>
using namespace std;

void Dog::Name(string name)
{
	_name = name;
}

void Dog::ShowProfile()
{
	cout << "Œ¢‚Ì–¼‘O‚Í" << _name << "‚Å‚·";
}