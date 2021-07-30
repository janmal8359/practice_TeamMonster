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

	_eType = (ENEMYTYPE)eType;
	_isTurn = false;
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
	_speed = 1.5;
	_rc = RectMakeCenter(_x, _y, _enemy->getFrameWidth(), _enemy->getFrameHeight());

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

	if (_rc.left > 70 && !_isTurn)
	{
		_currentFrameY = 0;

		_count++;
		
		_x -= _speed;

		if (_count % 10 == 0)
		{
			if (_currentFrameX >= _enemy->getMaxFrameX()) _currentFrameX = 0;

			_enemy->setFrameX(_currentFrameX);
			_currentFrameX++;

			_count = 0;
		}

	}
	else if (_rc.left <= 70)
	{
		_isTurn = true;
	}
	if (_rc.right < WINSIZEX - 150 && _isTurn)
	{
		_currentFrameY = 1;

		_count++;

		_x += _speed;

		if (_count % 10 == 0)
		{
			/*
			if (_currentFrameX >= _enemy->getMaxFrameX()) _currentFrameX = 0;
			*/
			
			if (_currentFrameX == 0) _currentFrameX = 1;
			else if (_currentFrameX == 1) _currentFrameX = 0;

			_enemy->setFrameX(_currentFrameX);
			//_currentFrameX++;

			_count = 0;
		}
	}
	else if (_rc.left <= WINSIZEX - 150)
	{
		_isTurn = false;
	}

	_rc = RectMakeCenter(_x, _y, _enemy->getFrameWidth(), _enemy->getFrameHeight());
}

void enemy::draw()
{
	_enemy->frameRender(getMemDC(), _rc.left, _rc.top, _currentFrameX, _currentFrameY);
}
