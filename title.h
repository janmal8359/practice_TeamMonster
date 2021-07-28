#pragma once
#include "gameNode.h"

class title : public gameNode
{
private:
	bool _isTitle;
	float _time;

	RECT _player[8];
	int _index[8];
	int _y;

	bool _isFinish;


public:
	title();
	~title();

	HRESULT init();
	void release();
	void update();
	void render();



};

