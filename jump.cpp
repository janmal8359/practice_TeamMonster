#include "pch.h"
#include "jump.h"
#include "ponpoko.h"

HRESULT jump::init()
{
	_img = IMAGEMANAGER->findImage("ponpoko_jump");

	_aniL = new animation;
	_aniL->init(_img->getWidth(), _img->getHeight(), _img->getWidth()/ 2, _img->getHeight()/2);
	_aniL->setPlayFrame(0, 1, false, true);
	_aniL->setFPS(1);

	_aniR = new animation;
	_aniL->init(_img->getWidth(), _img->getHeight(), _img->getWidth() / 2, _img->getHeight() / 2);
	_aniR->setPlayFrame(2, 3, false, true);
	_aniR->setFPS(1);

	_isJump = false;


	return S_OK;
}

void jump::release()
{
}

void jump::update()
{
	move();

	_aniL->frameUpdate(TIMEMANAGER->getElapsedTime() * 20);
	_aniR->frameUpdate(TIMEMANAGER->getElapsedTime() * 20);

	_rc = RectMakeCenter(_x, _y, _img->getWidth()/2, _img->getHeight()/2);

}

void jump::render()
{
	if (_dir == LEFT)   _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniL);
	if (_dir == RIGHT)  _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniR);
}

void jump::move()
{
	//���� ����
	if (_isJump) {
		if (_dir == LEFT) _aniL->resume();
		if (_dir == RIGHT) _aniR->resume();

		_y += 5;

	}
	else if (!_isJump) {
		_aniL->stop();
		_aniR->stop();

		_p->setIdle();
	}


	// �¿� �̵�
	if (!KEYMANAGER->isStayKeyDown(VK_RIGHT) || _dir == LEFT) {

		if (KEYMANAGER->isStayKeyDown(VK_LEFT)) {
			_dir = LEFT;
		
		}

	}

	if (!KEYMANAGER->isStayKeyDown(VK_LEFT) || _dir == RIGHT) {
		if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) {
			_dir = RIGHT;
		}
	}
}


