#include "pch.h"
#include "idle.h"
#include "ponpoko.h"

HRESULT idle::init()
{

	_img = IMAGEMANAGER->findImage("ponpoko_idle");

	_aniL = new animation;
	_aniL->init(_img->getWidth(), _img->getHeight(), _img->getWidth(), _img->getHeight());
	_aniL->setDefPlayFrame(false, false);
	_aniL->setFPS(1);

	_aniR = new animation;
	_aniR->init(_img->getWidth(), _img->getHeight(), _img->getWidth(), _img->getHeight());
	_aniR->setDefPlayFrame(false, false);
	_aniR->setFPS(1);

	//처음 시작이 IDLE이니까 여기에 초기화
	_x = 50;
	_y = WINSIZEY / 2;
	_rc = RectMakeCenter(_x, _y, _img->getFrameWidth(), _img->getFrameHeight());

	return S_OK;
}

void idle::release()
{
	gameNode::release();
}

void idle::update()
{
	_aniL->frameUpdate(TIMEMANAGER->getElapsedTime() * 0.5f);
	_aniR->frameUpdate(TIMEMANAGER->getElapsedTime() * 0.5f);

	_rc = RectMakeCenter(_x, _y, _img->getFrameWidth(), _img->getFrameHeight());
}

void idle::render()
{
	if (_dir == LEFT)   _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniL);
	if (_dir == RIGHT)  _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniR);
}