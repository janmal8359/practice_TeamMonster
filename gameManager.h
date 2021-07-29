#pragma once
#include "gameNode.h"
#include "title.h"
#include "playScene.h"
#include "storage.h"

class gameManager : public gameNode
{
private:
	int _credit;

	storage* _st;

	bool _isPlay;


public:
	HRESULT init();
	void release();
	void update();
	void render();

	int getCredit() { return _credit; }
};

// UI ����