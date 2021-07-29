#include "pch.h"
#include "playScene.h"

HRESULT playScene::init()
{
	// �÷��̾� �Ҵ�
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
	// �÷��̾� ������Ʈ �Լ�
	_ponpoko->update();
	_em->update();
	_ui->update();
}

void playScene::render()
{
	IMAGEMANAGER->findImage("background")->render(getMemDC(), 0, 0);

	// �÷��̾� ���� �Լ�
	_ponpoko->render();
	_em->render();
	_ui->render();
}
