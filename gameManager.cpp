#include "pch.h"
#include "gameManager.h"

HRESULT gameManager::init()
{
	_credit = 0;

	_st = new storage;
	_st->init();

	_isPlay = false;

	SCENEMANAGER->addScene("너구리 타이틀", new title);
	SCENEMANAGER->addScene("플레이", new playScene);

	SCENEMANAGER->changeScene("너구리 타이틀");

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

		// 크레딧이 하나라도 들어오면 플레이씬으로 전환
		SCENEMANAGER->changeScene("플레이");
	}
}

void gameManager::render()
{
	SCENEMANAGER->render();


	char str[128];

	sprintf_s(str, "credit : %d", _credit);
	TextOut(getMemDC(), 10, 10, str, strlen(str));
}
