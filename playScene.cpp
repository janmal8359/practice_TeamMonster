#include "pch.h"
#include "playScene.h"

HRESULT playScene::init()
{
	// 플레이어 할당


	return S_OK;
}

void playScene::release()
{
}

void playScene::update()
{
	// 플레이어 업데이트 함수
}

void playScene::render()
{
	IMAGEMANAGER->findImage("background")->render(getMemDC(), 0, 0);

	// 플레이어 렌더 함수
}
