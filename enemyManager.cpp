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
		case 0://ÆÄ¶õ»ö
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2 - 200 , 555, 0);
			_vMinion.push_back(bug);
		}

		break;
		case 1://Èò»ö
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2, 830, 1);
			_vMinion.push_back(bug);
		}

		break;

		case 2://³ì»ö
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
}

void enemyManager::snakeCollision()
{
}


