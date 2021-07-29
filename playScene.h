#pragma once
#include "gameNode.h"


class playScene : public gameNode
{
private:


public:
	HRESULT init();
	void release();
	void update();
	void render();


};

// 플레이어 생성