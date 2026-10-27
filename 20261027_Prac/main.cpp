#include<iostream>
#include"Enemy.h"
#include<vector>
#include<ctime>
#include<cstdlib>


using namespace std;

int main(void)
{
	/*Enemy enemy1(100);
	Enemy enemy2(200);*/

	/*enemy1.ShowStatus();
	enemy2.ShowStatus();*/

	srand((unsigned int)time(NULL));

	vector<Enemy>enemys;

	
	
	for (int i = 0;i < 3;i++)
	{
		enemys.push_back(Enemy(rand()%71 + 30));
	}

	//“o˜^‚µ‚½“à—e‚ðŒ©‚Ä‚Ý‚Ü‚µ‚å‚¤
	for (const Enemy&enemy:enemys)
	{
		enemy.ShowHP();
	}

	cout << "“G‚Ì”‚ÍA" << enemys.size() << endl;

	return 0;
}