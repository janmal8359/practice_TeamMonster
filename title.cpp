/*#include "pch.h"
#include "title.h"

title::title()
{
}

title::~title()
{
}

HRESULT title::init()
{
	_isTitle = true;

	_time = TIMEMANAGER->getWorldTime();

	for (int i = 0; i < 8; i++)
	{
		_player[i].left = 1050;
		_player[i].top = 600;
	}

	return S_OK;
}

void title::release()
{
}

void title::update()
{
	if (_isTitle && TIMEMANAGER->getWorldTime() >= _time + 3.f)
	{
		_isTitle = false;
		_time = TIMEMANAGER->getWorldTime();
	}

	if (!_isTitle)
	{
		if (_player[0].left >= 320)
		{
			_player[0].left -= 3;
			_player[0].right -= 3;

			for (int i = 1; i < 8; i++)
			{
				if (i == 4 && _player[i - 1].left < _player[i].left - 140)
				{
					_player[i].left -= 3;
					_player[i].right -= 3;
				}
				else if (i != 4 && _player[i - 1].left < _player[i].left - 80)
				{
					_player[i].left -= 3;
					_player[i].right -= 3;
				}
			}

			if (TIMEMANAGER->getWorldTime() >= _time + 0.5f)
			{
				_time = TIMEMANAGER->getWorldTime();

				if (_x == 1 && !_isFinish)
				{
					_x = 0;
				}

				else _x++;
			}
		}
		else
		{
			if (TIMEMANAGER->getWorldTime() >= _time + 0.5f)
			{
				_time = TIMEMANAGER->getWorldTime();

				_isFinish = true;

				if (_y == 1)
				{
					_x = 2;
					_y = 0;
				}

				else
				{
					_x = 0;
					_y++;
				}
			}
		}
	}
}

void title::render()
{
	if (_isTitle)
	{
		IMAGEMANAGER->findImage("title0")->render(getMemDC(), 0, 0);
	}
	else if (!_isTitle)
	{
		IMAGEMANAGER->findImage("title1")->render(getMemDC(), 0, 0);

		for (int i = 0; i < 8; i++)
		{
			IMAGEMANAGER->findImage("titlePlayer")->frameRender(getMemDC(), _player[i].left, _player[i].top, _x, _y);
			//else IMAGEMANAGER->findImage("titlePlayer")->frameRender(getMemDC(), _player[i].left, _player[i].top, _x, _y);
		}
	}
}
*/

#include "pch.h"
#include "title.h"

title::title()
{
}

title::~title()
{
}

HRESULT title::init()
{
	_isTitle = true;

	_time = TIMEMANAGER->getWorldTime();

	for (int i = 0; i < 8; i++)
	{
		_tPlayer[i].rc.left = 1050;
		_tPlayer[i].rc.top = 600;

		_tPlayer[i].currentX = 0;
		_tPlayer[i].currentY = 0;
		_tPlayer[i].isArrive = false;
	}

	_ui = new ui;
	_ui->init();

	return S_OK;
}

void title::release()
{
}

void title::update()
{
	if (_isTitle && TIMEMANAGER->getWorldTime() >= _time + 3.f)
	{
		_isTitle = false;
		_time = TIMEMANAGER->getWorldTime();
	}

	if (!_isTitle)
	{
		if (_tPlayer[7].rc.left <= 930)
		{
			_tPlayer[7].isArrive = true;

			for (int i = 6; i >= 0; i--)
			{
				if (i == 3 && _tPlayer[i + 1].rc.left > _tPlayer[i].rc.left + 140)
				{
					_tPlayer[i].isArrive = true;
				}
				else if (i != 3 && _tPlayer[i + 1].rc.left > _tPlayer[i].rc.left + 80)
				{
					_tPlayer[i].isArrive = true;
				}
			}
		}

		for (int i = 0; i < 8; i++)
		{
			if (_tPlayer[i].isArrive == false)
			{
				_tPlayer[i].rc.left -= 3;
				_tPlayer[i].rc.right -= 3;
			}
		}

		for (int i = 0; i < 8; i++)
		{

			if (TIMEMANAGER->getWorldTime() >= _time + 0.5f)
			{
				if (_tPlayer[i].currentX == 1 && !_isFinish)
				{
					_tPlayer[i].currentX = 0;
				}

				else _tPlayer[i].currentX++;

			}
		}

		if (TIMEMANAGER->getWorldTime() >= _time + 0.5f)
		{
			if (_y == 1)
			{
				_x = 2;
				_y = 0;
			}

			else
			{
				_x = 0;
				_y++;
			}
		}
	}

	if (TIMEMANAGER->getWorldTime() >= _time + 0.5f && !_isTitle) _time = TIMEMANAGER->getWorldTime();

	_ui->update();
}

void title::render()
{
	if (_isTitle)
	{
		IMAGEMANAGER->findImage("title0")->render(getMemDC(), 0, 0);
	}
	else if (!_isTitle)
	{
		IMAGEMANAGER->findImage("title1")->render(getMemDC(), 0, 0);

		for (int i = 0; i < 8; i++)
		{
			if (!_tPlayer[i].isArrive) IMAGEMANAGER->findImage("titlePlayer")->frameRender(getMemDC(), _tPlayer[i].rc.left, _tPlayer[i].rc.top, _tPlayer[i].currentX, _tPlayer[i].currentY);
			else IMAGEMANAGER->findImage("titlePlayer")->frameRender(getMemDC(), _tPlayer[i].rc.left, _tPlayer[i].rc.top, _x, _y);
		}
	}

	_ui->render();
}
