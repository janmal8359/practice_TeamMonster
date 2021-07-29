#pragma once
#include "gameNode.h"

class snake : public gameNode
{
private:
	image* _snake;

	float _x, _y;
	int _speed;
	RECT _rc;

	int _currentFrameX, _currentFrameY;
	int _count;

	bool _isTurn;
	bool _isComing;

public:
	snake();
	~snake();

	virtual HRESULT init();
	virtual HRESULT init(float x, float y);
	virtual void release();
	virtual void update();
	virtual void render();

	void move();
	void draw();

	bool getSnakComing() { return _isComing; }
	void setSnakComing(bool com) { _isComing = com; }
	inline RECT getRect() { return _rc; }
};

