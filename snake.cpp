#include "pch.h"
#include "snake.h"

snake::snake()
{
}

snake::~snake()
{
}

HRESULT snake::init()
{
	return S_OK;
}

HRESULT snake::init(float x, float y)
{
	_isTurn = false;
	_isComing = false;
	_currentFrameX = _currentFrameY = 0;
	_count = 0;

	_x = x;
	_y = y;
	_speed = 1;
	_rc = RectMakeCenter(_x, _y, _snake->getFrameWidth(), _snake->getFrameHeight());

	return S_OK;
}

void snake::release()
{
}

void snake::update()
{
	move();
}

void snake::render()
{
	draw();
}

void snake::move()
{

	if (_isComing)
	{
		if (_rc.left > 70 && !_isTurn)
		{
			_currentFrameY = 0;

			_count++;

			_x -= _speed;

			if (_count % 3 == 0)
			{
				if (_currentFrameX >= _snake->getMaxFrameX()) _currentFrameX = 0;

				_snake->setFrameX(_currentFrameX);
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

			if (_count % 3 == 0)
			{
				if (_currentFrameX >= _snake->getMaxFrameX()) _currentFrameX = 0;

				_snake->setFrameX(_currentFrameX);
				_currentFrameX++;

				_count = 0;
			}
		}
		else if (_rc.left <= WINSIZEX - 150)
		{
			_isTurn = false;
		}

		_rc = RectMakeCenter(_x, _y, _snake->getFrameWidth(), _snake->getFrameHeight());
	}

}

void snake::draw()
{
	_snake->frameRender(getMemDC(), _rc.left, _rc.top, _currentFrameX, _currentFrameY);
}
