#pragma once
#include "gameNode.h"

class progressBar : public gameNode
{
private:
	RECT _rcProgress;
	int _x, _y;
	float _width;

	image* _progressBarTop;
	image* _progressBarBottom;

	image* _volumeBarTop;
	image* _volumeBarBottom;

	image* _timeBarTop;
	image* _timeBarBottom;

	string _back;
	string _top;

public:
	progressBar();
	~progressBar();

	HRESULT init(int x, int y, int width, int height, string backBar, string topBar);
	void release();
	void update();
	void render();

	void setGauge(float currentGauge, float maxGauge);

	void setX(int x) { _x = x; }
	void setY(int y) { _y = y; }

	RECT getRect() { return _rcProgress; }
};

