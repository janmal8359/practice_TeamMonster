#pragma once
#include "gameNode.h"
#include "soundTest.h"
#include "storage.h"
#include "enemyManager.h"

class playGround : public gameNode
{
private:
	storage* _st;
	enemyManager* _en;

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

};

