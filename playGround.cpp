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

	IMAGEMANAGER->addImage("���׽�Ʈ", "IMG/mapT.bmp", 1280, 964, true, RGB(255, 0, 255));

	_ponpoko = new ponpoko;
	_ponpoko->init();

	_pc = new pixelCol;
	_pc->init();

	//_st = new storage;
	//_st->init();


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

	//���� �ȼ� �浹
	_pc->setIsJump(_ponpoko->getState()->getIsJump());

	//�ʱ��� ���º��� ������
	_ponpoko->getState()->setState(_ponpoko);
	_pc->setState(_ponpoko);

	// �ȼ��浹 �ϱ� ���� ��Ʈ,�߽���ǥ ������
	_pc->setRect(_ponpoko->getState()->getRect());
	_pc->update();

	// �ȼ��浹 -> �������� (��������)
	if (_ponpoko->getState()->getYSpeed() < 0)
		_ponpoko->getState()->setIsJump(_pc->getIsJump());

	// �ȼ��浹���� ��� �߽���ǥ ���� �ٽ� �Ҵп��� �ѱ��
	_ponpoko->getState()->setX(_pc->getX());
	_ponpoko->getState()->setY(_pc->getY());
	_ponpoko->update();

	//SCENEMANAGER->update();
	//SOUNDMANAGER->update();
}

//����� �׷����!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============������ ���� �ǵ帮�� ���� ============

	_pc->render();
	_ponpoko->render();

	//=============== �ؿ��� �ǵ������� ================
	_backBuffer->render(getHDC(), 0, 0);

}

