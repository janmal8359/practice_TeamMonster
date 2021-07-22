#include "pch.h"
#include "progressBar.h"


progressBar::progressBar()
{
}


progressBar::~progressBar()
{
}

HRESULT progressBar::init(int x, int y, int width, int height, string backBar, string topBar)
{
	_x = x;
	_y = y;

	_back = backBar;
	_top = topBar;

	_rcProgress = RectMake(x, y, width, height);

	//_progressBarTop = IMAGEMANAGER->addImage("frontBar", "hpBarTop.bmp", width, height, true, RGB(255, 0, 255));
	//_progressBarBottom = IMAGEMANAGER->addImage("backBar", "hpBarBottom.bmp", width, height, true, RGB(255, 0, 255));

	//_volumeBarBottom = IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255));
	//_volumeBarTop = IMAGEMANAGER->addImage("volumeFront", "resources/bmp/volumeBarFront.bmp", 381, 4, true, RGB(255, 0, 255));

	_volumeBarBottom = IMAGEMANAGER->findImage(_back);
	_volumeBarTop = IMAGEMANAGER->findImage(_top);


	_width = _volumeBarTop->getWidth();

	return S_OK;
}

void progressBar::release()
{
}

void progressBar::update()
{
	//_rcProgress = RectMakeCenter(_x, _y, _volumeBarTop->getWidth(),
	//	_volumeBarTop->getHeight());
	_rcProgress = RectMake(_x, _y, _volumeBarTop->getWidth(),
		_volumeBarTop->getHeight() * 3);
}

void progressBar::render()
{
	//IMAGEMANAGER->render(_back, getMemDC(),
	//	_rcProgress.left + _volumeBarBottom->getWidth() / 2,
	//	_y + _volumeBarBottom->getHeight() / 2, 0, 0,
	//	_volumeBarBottom->getWidth(), _volumeBarBottom->getHeight());
	//
	//IMAGEMANAGER->render(_top, getMemDC(), 
	//	_rcProgress.left + _volumeBarBottom->getWidth() / 2,
	//	_y + _volumeBarBottom->getHeight() / 2, 0, 0,
	//	_width, _volumeBarBottom->getHeight());

	IMAGEMANAGER->render(_back, getMemDC(),
		_rcProgress.left,
		_y, 0, 0,
		_volumeBarBottom->getWidth(), _volumeBarBottom->getHeight());

	IMAGEMANAGER->render(_top, getMemDC(),
		_rcProgress.left,
		_y, 0, 0,
		_width, _volumeBarBottom->getHeight());
}

//게이지 조절하는 함수
void progressBar::setGauge(float currentGauge, float maxGauge)
{
	//이해 안가신다면 외우셔도 좋습니다 *-_-*
	_width = (currentGauge / maxGauge) * _volumeBarBottom->getWidth();

}
