#include "pch.h"
#include "gameManager.h"

HRESULT gameManager::init()
{
	_credit = 0;

	_st = new storage;
	_st->init();

	_ui = new ui;
	_ui->init();

	_isPlay = false;

	SCENEMANAGER->addScene("너구리 타이틀", new title);
	SCENEMANAGER->addScene("플레이", new playScene);

	SCENEMANAGER->changeScene("너구리 타이틀");

	_ponpoko = new ponpoko;
	_ponpoko->init();
	
	_en = new enemyManager;
	_en->init();
	_en->setMinion();
	_en->setPlayerMemoryAddressLink(_ponpoko);

	return S_OK;
}

void gameManager::release()
{
}

void gameManager::update()
{
	SCENEMANAGER->update();
	_en->update();

	if (KEYMANAGER->isOnceKeyDown('1'))
	{
		_credit++;
	}

	if (_credit >= 1 && !_isPlay)
	{
		_isPlay = true;

		Sleep(1000);

		// 크레딧이 하나라도 들어오면 플레이씬으로 전환
		SCENEMANAGER->changeScene("플레이");
	}
	_ui->update();
}

void gameManager::render()
{
	SCENEMANAGER->render();
	_ponpoko->render();

	_en->render();

	_ui->render();


	char str[128];

	sprintf_s(str, "credit : %d", _credit);
	TextOut(getMemDC(), 10, 10, str, strlen(str));
}
