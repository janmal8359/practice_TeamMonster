#include "pch.h"
#include "playGround.h"

#define STR 128


playGround::playGround()
{
}


playGround::~playGround()
{
}

//업데이트 테스트 아아아아!
//커밋 테스트
// git desttop Test

//초기화는 여기에다 해라!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	_gm = new gameManager;
	_gm->init();
	IMAGEMANAGER->addImage("맵테스트", "IMG/mapT.bmp", 1280, 964, true, RGB(255, 0, 255));

	_ponpoko = new ponpoko;
	_ponpoko->init();

	_pc = new pixelCol;
	_pc->init();

	//_st = new storage;
	//_st->init();

	//SCENEMANAGER->addScene("UI", new ui);
	//SCENEMANAGER->changeScene("UI");

	return S_OK;
}

//메모리 해제는 여기다 해라!!!!
void playGround::release()
{
	gameNode::release();
}

//연산처리는 여기다가!
void playGround::update()
{
	gameNode::update();

	_gm->update();

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

	//SCENEMANAGER->update();
	//SOUNDMANAGER->update();
}

//여기다 그려줘라!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============위에는 제발 건드리지 마라 ============

	IMAGEMANAGER->findImage("STAGE_backGround")->render(getMemDC(), 0, 0);
	
	_gm->render();
	_pc->render();
	_ponpoko->render();

	//=============== 밑에도 건들지마라 ================
	_backBuffer->render(getHDC(), 0, 0);

}

