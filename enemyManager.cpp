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
	int num = RND->getInt(3);

	for (int i = 0; i < 3; i++)
	{
		switch (num)
		{
		case 0:
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2 , 300, 1);
			_vMinion.push_back(bug);
		}

		break;
		case 1:
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2, 200, 2);
			_vMinion.push_back(bug);
		}

		break;

		case 2:
		{
			enemy* bug;
			bug = new minion;
			bug->init(WINSIZEX / 2, 100, 3);
			_vMinion.push_back(bug);
		}

		break;
		}
	}
}

void enemyManager::collision()
{
}
