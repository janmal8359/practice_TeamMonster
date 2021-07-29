#pragma once
#include "gameNode.h"
#include "soundTest.h"
#include "gameManager.h"
#include "storage.h"
#include "ponpoko.h"
#include "pixelCol.h"

class playGround : public gameNode
{
private:
	gameManager* _gm;

	ponpoko* _ponpoko;
	pixelCol *_pc;

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

};

