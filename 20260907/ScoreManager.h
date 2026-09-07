#pragma once
class ScoreManager
{
private:
	//メンバ変数
	int CurrentScore;//現在のスコア
	int HighScore;   //ハイスコア

public:
	//コンストラクタ
	ScoreManager();

	//メンバ関数
	void addPoints(int points);
	void resetScore();
	void UpdateHighScore();
	void DisPlayScore();
};

