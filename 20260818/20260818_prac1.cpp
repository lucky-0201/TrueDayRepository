#include<iostream>
using namespace std;

//攻撃関数
void damage(int *hp)
{
	*hp -= 20;
}

//回復関数
void Heal(int *hp)
{
	*hp += 30;
	if (*hp > 100)
	{
		*hp = 100;
	}
}

//メイン
int main()
{
	//変数
	int hp = 100;
	int* php = &hp;
	
	cout << "リアルHP:" << *php << endl;
	//気にしないでください
	cout << hp << endl;
	cout << php << endl;
	cout << &hp << endl;

	damage(&hp);
	cout << "ダーメジ" << endl;
	cout << "HP:" << hp << endl;

	Heal(&hp);
	cout << "うおー" << endl;
	cout << "HP:" << hp;
	
	return 0;
}