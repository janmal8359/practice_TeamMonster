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

	_gm = new gameManager;
	_gm->init();

	//_st = new storage;
	//_st->init();

	//SCENEMANAGER->addScene("UI", new ui);
	//SCENEMANAGER->changeScene("UI");

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

	_gm->update();

	//SCENEMANAGER->update();
	//SOUNDMANAGER->update();
}

//����� �׷����!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============������ ���� �ǵ帮�� ���� ============

	IMAGEMANAGER->findImage("STAGE_backGround")->render(getMemDC(), 0, 0);
	
	_gm->render();

	//=============== �ؿ��� �ǵ������� ================
	_backBuffer->render(getHDC(), 0, 0);

}

