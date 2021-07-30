#pragma once
#include "gameNode.h"

enum ENEMYTYPE
{
	A,
	B,
	C
};

class enemy : public gameNode
{
private:
	image* _enemy;
	float _x, _y;
	float _speed;
	RECT _rc;


	int _currentFrameX, _currentFrameY;
	int _count;

	bool _isTurn;

	ENEMYTYPE _eType;

public:
	enemy();
	~enemy();

	virtual HRESULT init();			
	virtual HRESULT init(float x, float y, int eType);
	virtual void release();			
	virtual void update();			
	virtual void render();			

	void move();
	void draw();

	inline RECT getRect() { return _rc; }
	int getEnemyType() { return (int)_eType; }
};

