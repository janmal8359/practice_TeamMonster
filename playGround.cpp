#include "pch.h"
#include "playGround.h"

#define STR 128


playGround::playGround()
{
}


playGround::~playGround()
{
	//�ּ�ó���� ����. � ���� ����. 
	//    adwdvvvsc
	// git Desktop push
	// dsfwfdsf
}

//������Ʈ �׽�Ʈ �ƾƾƾ�!
//Ŀ�� �׽�Ʈ
// git desttop Test

//�ʱ�ȭ�� ���⿡�� �ض�!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	st = new storage;
	st->init();

	SCENEMANAGER->addScene("�ʱ��� Ÿ��Ʋ", new title);
	SCENEMANAGER->changeScene("�ʱ��� Ÿ��Ʋ");


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

	SCENEMANAGER->update();
}

//����� �׷����!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============������ ���� �ǵ帮�� ���� ============
	
	SCENEMANAGER->render();

	//TIMEMANAGER->render(getMemDC());

	//=============== �ؿ��� �ǵ������� ================
	_backBuffer->render(getHDC(), 0, 0);

}

