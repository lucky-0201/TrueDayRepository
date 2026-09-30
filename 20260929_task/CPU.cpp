#include "CPU.h"
#include<iostream>
#include"Config.h"
using namespace std;

void CPU::cpuHand()
{
	hand = rand() % MAX_HAND;
}

void CPU::cpuShowHand()
{
	switch (hand)
	{
	case gu:
		cout << "グー\n";
		break;
	case tyoki:
		cout << "チョキ\n";
		break;
	case pa:
		cout << "パー\n";
		break;
	}
}

int CPU::DemonHand()
{
	return hand;
}