#include<iostream>
#include"ScoreManager.h"
using namespace std;

int main(void)
{
	//ScoreManagerクラスをオブジェクト化（インスタンス）
	ScoreManager Score;

	cout << "ゲームスタート" << endl;
	
	Score.DisPlayScore();

	//１００ポイント獲得
	cout << "100ポイント獲得しました" << endl;

	Score.addPoints(100);
	Score.DisPlayScore();
	//５０ポイント獲得
	cout << "50ポイント獲得しました" << endl;

	Score.addPoints(50);
	Score.DisPlayScore();

	//ハイスコア更新
	cout << endl;
	cout << "ハイスコア更新" << endl;

	Score.UpdateHighScore();
	Score.DisPlayScore();

	cout << endl;
	cout << "ゲーム終了" << endl;

	Score.resetScore();
	Score.DisPlayScore();

	return 0;
}