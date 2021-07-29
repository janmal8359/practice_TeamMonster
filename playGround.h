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

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

};

