#pragma once
#include "stateManager.h"
#define JUMPPOWER 12.0f
#define GRAVITy 0.08f

class jump : public stateManager
{
private:

public:
	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	virtual void move();
};