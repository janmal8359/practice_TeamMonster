#include "pch.h"
#include "pixelCol.h"


HRESULT pixelCol::init()
{
	_ground = IMAGEMANAGER->findImage("맵테스트");

	// 렉트 중앙
	_x = (_rc.right + _rc.left) / 2;
	_y = (_rc.top + _rc.bottom) / 2;

	// 볼의 아래쪽
	_probeY = _rc.bottom;

	return S_OK;
}

void pixelCol::release()
{

}

void pixelCol::update()
{
	// 렉트 중앙
	_x = (_rc.right + _rc.left) / 2;
	_y = (_rc.top + _rc.bottom) / 2;

	// 볼의 아래쪽
	_probeY = _rc.bottom;

	// 점프 상황에서
	if (!_isJump) {
		for (int i = _y; i <= _probeY; ++i)
		{
			COLORREF color = GetPixel(_ground->getMemDC(), _x, i);

			r = GetRValue(color);
			g = GetGValue(color);
			b = GetBValue(color);

			if (!(r == 255 && g == 0 && b == 255))
			{
				_y = i - (_rc.bottom - _rc.top) / 2;
				break;
			}
			else
			{
				_y += 0.2f;
				_isJump = true;
			}
		} 
	}
	else if (_isJump) {
		for (int i = _probeY - 1; i <= _probeY+1; ++i)
		{
			COLORREF color = GetPixel(_ground->getMemDC(), _x, i);

			r = GetRValue(color);
			g = GetGValue(color);
			b = GetBValue(color);

			if (!(r == 255 && g == 0 && b == 255))
			{
				_y = i - (_rc.bottom - _rc.top / 2);
				_isJump = false;
				break;
			}
			else
				_isJump = true;
		}
	}

	// 히트 상황에서
	/*
	if (_s->getState()->getIsHit()) {
		for (int i = _y; i <= _probeY; ++i)
		{
			COLORREF color;
			if (!_isBoss) color = GetPixel(_ground->getMemDC(), _bx + _x, i + _by);
			else color = GetPixel(_bossGround->getMemDC(), _x, i);

			r = GetRValue(color);
			g = GetGValue(color);
			b = GetBValue(color);

			if ((r == 0 && g == 0 && b == 255))
			{
				_y = (i - (_rc.bottom - _rc.top) / 2);
				_s->getState()->setIsHit(false);
				break;
			}
		}
	}*/

	//확인용
	_rc = RectMakeCenter(_x, _y, (_rc.right - _rc.left), _rc.bottom - _rc.top);

}


void pixelCol::render()
{
	_ground->render(getMemDC());
}