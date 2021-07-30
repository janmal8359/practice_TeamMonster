#include "pch.h"
#include "enemyManager.h"

enemyManager::enemyManager()
{
}

enemyManager::~enemyManager()
{
}

HRESULT enemyManager::init()
{

	_snk = new snake;
	_snk->init();

	return S_OK;
}

void enemyManager::release()
{
}

void enemyManager::update()
{
	for (_viMinion = _vMinion.begin(); _viMinion != _vMinion.end(); ++_viMinion)
	{
		(*_viMinion)->update();
	}

	enemyCollision();
}

void enemyManager::render()
{
	for (_viMinion = _vMinion.begin(); _viMinion != _vMinion.end(); ++_viMinion)
	{
		(*_viMinion)->render();
	}

}

void enemyManager::setMinion()
{
	int num = 0;
	
	for (int i = 0; i < 3; i++)
	{
		switch (num)
		{
		case 0://파란색
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2 - 200 , 555, 0);
			_vMinion.push_back(bug);
		}

		break;
		case 1://흰색
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2, 830, 1);
			_vMinion.push_back(bug);
		}

		break;

		case 2://녹색
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2 + 200, 280, 2);
			_vMinion.push_back(bug);
		}

		break;
		}
		num++;
	}
}

void enemyManager::setSnake()
{
}

void enemyManager::enemyCollision()
{
	for (int i = 0; i <getVMinion().size(); i++)
	{
		RECT temp;
		RECT PL = _ponpoko->getState()->getRect();
		RECT EN = getVMinion()[i]->getRect();

		if (IntersectRect(&temp, &EN, &PL))
		{
			SCENEMANAGER->changeScene("너구리 타이틀");
		}

	}
}

void enemyManager::snakeCollision()
{
}


