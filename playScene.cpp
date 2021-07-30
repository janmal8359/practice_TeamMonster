#include "pch.h"
#include "playScene.h"
#include "enemyManager.h"

HRESULT playScene::init()
{
	// �÷��̾� �Ҵ�
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
	// �÷��̾� ������Ʈ �Լ�

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

	_em->update();
	_ui->update();
}

void playScene::render()
{
	//IMAGEMANAGER->findImage("background")->render(getMemDC(), 0, 0);

	// �÷��̾� ���� �Լ�
	_pc->render();
	_ponpoko->render();
	_em->render();
	_ui->render();
}
