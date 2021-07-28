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

	collision();
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
		case 0:
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2 , 500, 0);
			_vMinion.push_back(bug);
		}

		break;
		case 1:
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2, 400, 1);
			_vMinion.push_back(bug);
		}

		break;

		case 2:
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2, 300, 2);
			_vMinion.push_back(bug);
		}

		break;
		}
		num++;
	}
}

void enemyManager::collision()
{
}
