#pragma once
#include "gameNode.h"
#include "soundTest.h"
#include "gameManager.h"
#include "stateManager.h"

class playGround : public gameNode
{
private:
	gameManager* _gm;


	stateManager* _stateManager;

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

};

