#include "pch.h"
#include "playGround.h"

#define STR 128


playGround::playGround()
{
}


playGround::~playGround()
{
}

//������Ʈ �׽�Ʈ �ƾƾƾ�!
//Ŀ�� �׽�Ʈ
// git desttop Test

//�ʱ�ȭ�� ���⿡�� �ض�!!!
HRESULT playGround::init()
{

	gameNode::init(true);

	_ponpoko = new ponpoko;
	_ponpoko->init();
	_st = new storage;
	_st->init();

	_en = new enemyManager;
	_en->init();
	_en->setMinion();

	SCENEMANAGER->addScene("UI", new ui);
	SCENEMANAGER->changeScene("UI");

	return S_OK;
}

//�޸� ������ ����� �ض�!!!!
void playGround::release()
{
	gameNode::release();
}

//����ó���� ����ٰ�!
void playGround::update()
{
	gameNode::update();

	_en->update();
	SCENEMANAGER->update();

}

//����� �׷����!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============������ ���� �ǵ帮�� ���� ============

	_ponpoko->render();

	IMAGEMANAGER->findImage("STAGE_backGround")->render(getMemDC(), 0, 0);
	
	SCENEMANAGER->render();

	_en->render();

	//=============== �ؿ��� �ǵ������� ================
	_backBuffer->render(getHDC(), 0, 0);

}

