#include "pch.h"
#include "idle.h"
#include "ponpoko.h"
#include "ui.h"

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
	_x = 200;
	_y = 700;
	_rc = RectMakeCenter(_x, _y, _img->getWidth(), _img->getHeight());

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

	_rc = RectMakeCenter(_x, _y, _img->getWidth(), _img->getHeight());
}

void idle::render()
{
	if (_dir == LEFT)   _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniL);
	if (_dir == RIGHT)  _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniR);
}

void idle::move()
{
	if (KEYMANAGER->isStayKeyDown(VK_LEFT)) {
		_dir = LEFT;
		_aniL->stop();

		if (KEYMANAGER->isOnceKeyDown(VK_UP)&& !_isJump && !_ui->getLadder()) {
			_isJump = true;
			_p->setJump();
		}
		else _p->setRun();
	}
	else if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) {
		_dir = RIGHT;
		_aniR->stop();

		if (KEYMANAGER->isOnceKeyDown(VK_UP) && !_isJump && !_ui->getLadder()) {
			_isJump = true;
			_p->setJump();
		}
		else _p->setRun();
	}
	else if (KEYMANAGER->isOnceKeyDown(VK_UP) && !_isJump && !_ui->getLadder()) {
		_aniL->stop();
		_aniR->stop();

		_isJump = true;
		_p->setJump();
	}
}