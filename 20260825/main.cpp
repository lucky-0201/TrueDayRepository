#include<iostream>
#include"Dog.h"

using namespace std;

int main(void)
{
	cout << "Œ¢‚Ì–¼‘O‚ðŒˆ‚ß‚Ä‚­‚¾‚³‚¢\n";

	string dogName;

	cin >> dogName;

	Dog dog;

	dog.Name(dogName);
	dog.ShowProfile();

	return 0;
}