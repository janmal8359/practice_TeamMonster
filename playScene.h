#pragma once
#include "gameNode.h"
#include "ui.h"
#include "ponpoko.h"
#include "pixelCol.h"
#include "enemyManager.h"

//class enemyManager;

class playScene : public gameNode
{
private:
	ponpoko* _ponpoko;
	pixelCol* _pc;
	enemyManager* _em;
	ui* _ui;

public:
	HRESULT init();
	void release();
	void update();
	void render();
};

// 플레이어 생성