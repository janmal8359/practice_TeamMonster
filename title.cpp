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
		_player[i].left = 1050;
		_player[i].top = 650;
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

				for (int i = 0; i < 8; i++)
				{
					if (_index[i] == 1 && !_isFinish)
					{
						_index[i] = 0;
					}

					else _index[i]++;

				}

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
					_y = 0;
				}

				else _y++;
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
			if (!_isFinish) IMAGEMANAGER->findImage("titlePlayer")->frameRender(getMemDC(), _player[i].left, _player[i].top, _index[i], 0);
			else IMAGEMANAGER->findImage("titlePlayer")->frameRender(getMemDC(), _player[i].left, _player[i].top, 2, _y);
		}
	}
}
