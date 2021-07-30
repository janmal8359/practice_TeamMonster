#pragma once
#include "gameNode.h"
#include "ponpoko.h"
#include "pixelCol.h"
#include "enemyManager.h"
#include "stateManager.h"

class playScene : public gameNode
{
private:

	ponpoko* _ponpoko;
	pixelCol* _pc;
	enemyManager* _em;
	stateManager* _stateManager;

public:
	HRESULT init();
	void release();
	void update();
	void render();

	ponpoko* getPonpoko() { return _ponpoko; }

};

// 플레이어 생성