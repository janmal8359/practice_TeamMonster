#include "pch.h"
#include "playScene.h"

HRESULT playScene::init()
{
	// 플레이어 할당
	_ponpoko = new ponpoko;
	_ponpoko->init();

	_em = new enemyManager;
	_em->init();
	_em->setMinion();

	_ui = new ui;
	_ui->init();

	return S_OK;
}

void playScene::release()
{
}

void playScene::update()
{
	// 플레이어 업데이트 함수
	_ponpoko->update();
	_em->update();
	_ui->update();
}

void playScene::render()
{
	IMAGEMANAGER->findImage("background")->render(getMemDC(), 0, 0);

	// 플레이어 렌더 함수
	_ponpoko->render();
	_em->render();
	_ui->render();
}
