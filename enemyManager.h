#pragma once
#include "gameNode.h"
#include "minion.h"
#include "snake.h"
#include "playScene.h"
#include <vector>

class ponpoko;

class enemyManager : public gameNode
{
private:
	typedef vector<enemy*>				vEnemy;
	typedef vector<enemy*>::iterator	viEnemy;

private:
	vEnemy		_vMinion;
	viEnemy		_viMinion;

	snake* _snk;
	ponpoko* _ponpoko;

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

	void setPlayerMemoryAddressLink(ponpoko* ponpoko) { _ponpoko = ponpoko; }

	vector<enemy*> getVMinion() { return _vMinion; }
	vector<enemy*>::iterator getVIMinion() { return _viMinion; }
};

