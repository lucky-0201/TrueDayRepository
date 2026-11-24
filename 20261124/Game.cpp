#include "Game.h"
#include"Enemy.h"

#include<iostream>
#include<memory>

using namespace std;

void Game::Pointer()
{
	cout << "\n======通常のポインタ=======\n";

	//オブジェクト
	//Enemy* enemy1 = new Enemy("スライム");
	Enemy enemy1("スライム");
	Enemy enemy2("ドラゴン");

	//オブジェクトのアドレスを取得
	Enemy* target = &enemy1;

	//ポインタを使って操作
	target->Draw();

	cout << endl;

	//ターゲットをenemy2に切り替えた
	target = &enemy2;
	target->Draw();
	target->Damage(50);



}

void Game::Unipue()
{
	cout << "\n======ユニーク=======\n";

	//Enemy生成
	unique_ptr<Enemy>enemy1 = make_unique<Enemy>("ゴブリン");

	enemy1->Draw();

	//uniqueの時はエラーを吐く
	// unique_ptr<Enemy> enemy2 = enemy1;

	//所有権を移動
	unique_ptr<Enemy>enemy2 = move(enemy1);//一つしかないのでmoveで継承

	cout << "所有権を移動させました" << endl;

	if (enemy1 == nullptr)
	{
		cout << "enemy1は空っぽです" << endl;
	}

	enemy2->Draw();
	enemy2->Damage(70);

}

void Game::Shared()
{
	cout << "\n======複数=======\n";

	shared_ptr<Enemy>enemy1 = make_unique<Enemy>("オーク");
	cout << "所有者数 " << enemy1.use_count() << endl;

	//所有権を共通する
	shared_ptr<Enemy>enemy2 = enemy1;//複数のためSharedは可能
	cout << "所有者数 " << enemy2.use_count() << endl;


	enemy1->Damage(20);
	enemy2->Draw();

	//Enemyを削除
	enemy2.reset();


	cout << "所有者数" << enemy1.use_count() << endl;;

}

void Game::Run()
{
	//Pointer();
	//Unipue();
	Shared();
}