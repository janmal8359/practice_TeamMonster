#include "pch.h"
#include "playScene.h"

HRESULT playScene::init()
{
	// �÷��̾� �Ҵ�


	return S_OK;
}

void playScene::release()
{
}

void playScene::update()
{
	// �÷��̾� ������Ʈ �Լ�
}

void playScene::render()
{
	IMAGEMANAGER->findImage("background")->render(getMemDC(), 0, 0);

	// �÷��̾� ���� �Լ�
}
