#pragma once
#include "gameNode.h"
#include "title.h"
#include "playScene.h"
#include "storage.h"
#include "ui.h"
#include "ponpoko.h"
#include "enemyManager.h"

class gameManager : public gameNode
{
private:
	int _credit;

	storage* _st;
	ui* _ui;
	ponpoko* _ponpoko;
	enemyManager* _en;

	bool _isPlay;


public:
	HRESULT init();
	void release();
	void update();
	void render();

	int getCredit() { return _credit; }
};

// UI ¼³Á¤