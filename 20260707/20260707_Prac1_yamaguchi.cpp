#include<iostream>
using namespace std;

void ShowArray(int ayr[], int index);
void AddArray(int ary[], int index);

int main()
{
	int ary[10];

	ShowArray(ary,10);
	AddArray(ary,10);
	
	return 0;
}

//í«â¡ä÷êî
void AddArray(int ary[], int index)
{
	for (int i = 0; i < 10; i++)
	{
		if ( ary[i] % 2 == 0)
		{
			cout << "even" << endl;
			cout << ary[i] << endl;
 		}
		else
		{
			cout << "odd" << endl;
			cout << ary[i] << endl;
		}
	}
}

//ï\é¶ä÷êî
void ShowArray(int ary[],int index)
{
	for (int i = 0; i < index; i++)
	{
		cin >> ary[i];
	}
}