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

	_st = new storage;
	_st->init();

	_eType = (ENEMYTYPE)eType;
	_turn = false;
	_currentFrameX = _currentFrameY = 0;
	_count = 0;

	if (_eType == A)
	{
		_enemy = IMAGEMANAGER->findImage("ENEMY_enemy1");
	}

	if (_eType == B)
	{
		_enemy = IMAGEMANAGER->findImage("ENEMY_enemy2");
	}

	if (_eType == C)
	{
		_enemy = IMAGEMANAGER->findImage("ENEMY_enemy3");
	}

	_x = x;
	_y = y;
	_speed = 2;
	_rc = RectMakeCenter(_x, _y, 128, 128);

	return S_OK;
}

void enemy::release()
{
}

void enemy::update()
{
	move();
}

void enemy::render()
{
	draw();
}

void enemy::move()
{

	if (_rc.left > 70 && !_turn)
	{
		_currentFrameY = 0;

		_count++;
		
		_x -= _speed;

		if (_count % 3 == 0)
		{
			if (_currentFrameX >= _enemy->getMaxFrameX()) _currentFrameX = 0;

			_enemy->setFrameX(_currentFrameX);
			_currentFrameX++;

			_count = 0;
		}

	}
	else if (_rc.left <= 70)
	{
		_turn = true;
	}
	if (_rc.right < WINSIZEX - 150 && _turn)
	{
		_currentFrameY = 1;

		_count++;

		_x += _speed;

		if (_count % 3 == 0)
		{
			if (_currentFrameX >= _enemy->getMaxFrameX()) _currentFrameX = 0;

			_enemy->setFrameX(_currentFrameX);
			_currentFrameX++;

			_count = 0;
		}
	}
	else if (_rc.left <= WINSIZEX - 150)
	{
		_turn = false;
	}

	_rc = RectMakeCenter(_x, _y, 128, 128);
}

void enemy::draw()
{
	_enemy->frameRender(getMemDC(), _rc.left, _rc.top, _currentFrameX, _currentFrameY);
}
