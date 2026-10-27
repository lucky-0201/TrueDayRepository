#include<iostream>
#include"Enemy.h"
#include<vector>

using namespace std;

int main(void)
{
	/*Enemy enemy1(100);
	Enemy enemy2(200);*/

	/*enemy1.ShowStatus();
	enemy2.ShowStatus();*/

	vector<Enemy>enemys;

	enemys.push_back(Enemy(100));
	enemys.push_back(Enemy(200));
	enemys.push_back(Enemy(250));
	enemys.push_back(Enemy(400));
	enemys.push_back(Enemy(1000));
	enemys.push_back(Enemy(2000));


	//“o˜^‚µ‚½“à—e‚ðŒ©‚Ä‚Ý‚Ü‚µ‚å‚¤
	for (const Enemy&enemy:enemys)
	{
		enemy.ShowStatus();
	}

	cout << "“G‚Ì”‚ÍA" << enemys.size() << endl;

	return 0;
}