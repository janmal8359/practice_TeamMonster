#pragma once
#include "gameNode.h"
#include "storage.h"

enum ENEMYTYPE
{
	A,
	B,
	C
};

class enemy : public storage
{
private:
	storage* _em;
	float _x, _y;
	int _speed;
	RECT _rc;
	
	bool _trun;

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

	inline RECT getRect() { return _rc; }
	int getEnemyType() { return _eType; }
};

