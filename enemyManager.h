#pragma once
#include "gameNode.h"
#include "minion.h"
#include "snake.h"
#include <vector>

class enemyManager : public gameNode
{
private:
	typedef vector<enemy*>				vEnemy;
	typedef vector<enemy*>::iterator	viEnemy;

private:
	vEnemy		_vMinion;
	viEnemy		_viMinion;

	snake* _snk;

public:
	enemyManager();
	~enemyManager();

	HRESULT init();
	void release();
	void update();
	void render();

	void setMinion();
	void setSnake();

	void enemyCollision();
	void snakeCollision();

	vector<enemy*> getVMinion() { return _vMinion; }
	vector<enemy*>::iterator getVIMinion() { return _viMinion; }
};

