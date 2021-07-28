#pragma once
#include "gameNode.h"
#include "soundTest.h"
#include "storage.h"

class playGround : public gameNode
{
private:
	storage* _st;
	image* _bg;


public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

};

