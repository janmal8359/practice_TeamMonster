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

	//SCENEMANAGER->update();
	//SOUNDMANAGER->update();
}

//����� �׷����!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============������ ���� �ǵ帮�� ���� ============
	
	//IMAGEMANAGER->render("���", getMemDC(), 0, 0);


	//SCENEMANAGER->render();

	//TIMEMANAGER->render(getMemDC());

	//=============== �ؿ��� �ǵ������� ================
	_backBuffer->render(getHDC(), 0, 0);

}

