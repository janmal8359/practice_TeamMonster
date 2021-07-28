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

	_st = new storage;

	_st->init();


	SCENEMANAGER->addScene("UI", new ui);
	SCENEMANAGER->changeScene("UI");



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

	SCENEMANAGER->update();
	//SOUNDMANAGER->update();

}

//여기다 그려줘라!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============위에는 제발 건드리지 마라 ============
	

	SCENEMANAGER->render();

	//TIMEMANAGER->render(getMemDC());

	//=============== 밑에도 건들지마라 ================
	_backBuffer->render(getHDC(), 0, 0);

}

