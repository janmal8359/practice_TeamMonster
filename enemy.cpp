#include "pch.h"
#include "enemy.h"

enemy::enemy()
{
}

enemy::~enemy()
{
}

HRESULT enemy::init()
{
	return S_OK;
}

HRESULT enemy::init(float x, float y, int eType)
{
	gameNode::init(true);

	_em = new storage;
	_em->init();

	_eType = (ENEMYTYPE)eType;
	_trun = false;

	if (_eType == 0)
	{
		IMAGEMANAGER->findImage("ENEMY_enemy1");
	}

	if (_eType == 1)
	{
		IMAGEMANAGER->findImage("ENEMY_enemy2");
	}

	if (_eType == 2)
	{
		IMAGEMANAGER->findImage("ENEMY_enemy3");
	}

	_x = x;
	_y = y;
	_speed = 5;
	_rc = RectMakeCenter(_x, _y, _em->getWidth(), _em->getHeight());

	return S_OK;
}

void enemy::release()
{
}

void enemy::update()
{
}

void enemy::render()
{
}

void enemy::move()
{
}
