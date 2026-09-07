#include "ScoreManager.h"
#include<iostream>
using namespace std;

//コンストラクタ(初期化)
//デストラクタ(終了時)
ScoreManager::ScoreManager()
{
	CurrentScore = 0;
	HighScore = 0;
}

//スコアの加算
void ScoreManager::addPoints(int points)
{
	CurrentScore += points;
}

//スコアリセット
void ScoreManager::resetScore()
{
	CurrentScore += 0;
}

//ハイスコア更新
void ScoreManager::UpdateHighScore()
{
	if (CurrentScore > HighScore)
	{
		HighScore = CurrentScore;
	}
}

//スコアの表示
void ScoreManager::DisPlayScore()
{
	cout << "現在のスコア:" << CurrentScore << endl;
	cout << "ハイスコア:" << HighScore << endl;
}