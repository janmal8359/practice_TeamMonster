#include "pch.h"
#include "gameManager.h"

HRESULT gameManager::init()
{
	_credit = 0;

	_st = new storage;
	_st->init();

	_isPlay = false;

	SCENEMANAGER->addScene("�ʱ��� Ÿ��Ʋ", new title);
	SCENEMANAGER->addScene("�÷���", new playScene);

	SCENEMANAGER->changeScene("�ʱ��� Ÿ��Ʋ");

	return S_OK;
}

void gameManager::release()
{
}

void gameManager::update()
{
	SCENEMANAGER->update();

	if (KEYMANAGER->isOnceKeyDown('1'))
	{
		_credit++;
	}

	if (_credit >= 1 && !_isPlay)
	{
		_isPlay = true;

		// ũ������ �ϳ��� ������ �÷��̾����� ��ȯ
		SCENEMANAGER->changeScene("�÷���");
	}
}

void gameManager::render()
{
	SCENEMANAGER->render();


	char str[128];

	sprintf_s(str, "credit : %d", _credit);
	TextOut(getMemDC(), 10, 10, str, strlen(str));
}
