#pragma once
#include "gameNode.h"
#include "minion.h"
#include <vector>

class enemyManager : public gameNode
{
private:
	typedef vector<enemy*>				vEnemy;
	typedef vector<enemy*>::iterator	viEnemy;

private:
	vEnemy		_vMinion;
	viEnemy		_viMinion;

public:
	enemyManager();
	~enemyManager();

	HRESULT init();
	void release();
	void update();
	void render();

	void setMinion();

	void collision();

	vector<enemy*> getVMinion() { return _vMinion; }
	vector<enemy*>::iterator getVIMinion() { return _viMinion; }
};

