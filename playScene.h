#pragma once
#include "gameNode.h"
#include "ui.h"
#include "ponpoko.h"
#include "enemyManager.h"

class playScene : public gameNode
{
private:
	ponpoko* _ponpoko;
	enemyManager* _em;
	ui* _ui;

public:
	HRESULT init();
	void release();
	void update();
	void render();


};

// 플레이어 생성