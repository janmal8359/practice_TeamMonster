#pragma once
#include "gameNode.h"
#include "progressBar.h"

#define BUTTONMAX 14
#define MUSICMAX 5

enum music
{
	첫줄,
	우리사랑한동안,
	한여름밤의꿀,
	오도,
	버터
};

struct UI
{
	image* img;
	RECT rc;
};

class soundTest : public gameNode
{
private:

	bool _isShuffle;
	bool _isPlay;
	bool _isPlaying;
	bool _isLoop;

	int _listNum;
	int _lastNum;
	int _nextNum;

	unsigned int _totalTime;
	unsigned int _currentTime;

	image* _album[MUSICMAX];
	UI _button[BUTTONMAX];
	music _name;

	string _music[MUSICMAX];
	float _volume;

	progressBar* _volumeBar;
	progressBar* _timeBar;


public:
	soundTest();
	~soundTest();

	virtual HRESULT init();			//초기화 함수
	virtual void release();			//메모리 해제 함슈
	virtual void update();			//연산하는 함수
	virtual void render();			//그리기 함수

	void setImage();
	void renderImage();
	void makeRect();
	void collision();
	void selectMusic();
	void setXY(image* img, float x, float y);

	// function
	void Play();
	void Pause();
	void Next();
	void Back();
	void Shuffle();
	void Loop();
	void setVolume();
	void setTime();
	void ChangeAlbum();
	void changeButton();
	void nextMusic();

};

