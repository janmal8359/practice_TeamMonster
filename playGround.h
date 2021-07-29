#pragma once
#include "gameNode.h"
#include "soundTest.h"
#include "storage.h"
#include "ponpoko.h"
#include "enemyManager.h"
#include "ui.h"
#include "gameManager.h"

class playGround : public gameNode
{
private:
	storage* _st;
	ponpoko* _ponpoko;
	enemyManager* _en;
	gameManager* _gm;

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//초기화 함수
	virtual void release();			//메모리 해제 함슈
	virtual void update();			//연산하는 함수
	virtual void render();			//그리기 함수

};

