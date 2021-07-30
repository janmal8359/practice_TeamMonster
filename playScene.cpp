#include "pch.h"
#include "playScene.h"
#include "enemyManager.h"

HRESULT playScene::init()
{
	// 플레이어 할당
	_ponpoko = new ponpoko;
	_ponpoko->init();

	_pc = new pixelCol;
	_pc->init();

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

	//점프 픽셀 충돌
	_pc->setIsJump(_ponpoko->getState()->getIsJump());

	//너구리 상태변경 설정자
	_ponpoko->getState()->setState(_ponpoko);
	_pc->setState(_ponpoko);

	// 픽셀충돌 하기 위한 렉트,중심좌표 설정자
	_pc->setRect(_ponpoko->getState()->getRect());
	_pc->update();

	// 픽셀충돌 -> 점프상태 (점프유무)
	if (_ponpoko->getState()->getYSpeed() < 0)
		_ponpoko->getState()->setIsJump(_pc->getIsJump());

	// 픽셀충돌에서 계산 중심좌표 값을 다시 소닉에게 넘기기
	_ponpoko->getState()->setX(_pc->getX());
	_ponpoko->getState()->setY(_pc->getY());
	_ponpoko->update();

	_em->update();
	_ui->update();
}

void playScene::render()
{
	//IMAGEMANAGER->findImage("background")->render(getMemDC(), 0, 0);

	// 플레이어 렌더 함수
	_pc->render();
	_ponpoko->render();
	_em->render();
	_ui->render();
}
