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

	_rc = RectMakeCenter(_x, _y, _img->getFrameWidth(), _img->getFrameHeight());

}

void jump::render()
{
	if (_dir == LEFT)   _img->render(getMemDC(), _rc.left, _rc.top);
	if (_dir == RIGHT)  _img->render(getMemDC(), _rc.left, _rc.top);
}

void jump::move()
{

	// 점프 구현
	if (_isJump) {
	//	if (_dir == LEFT) 
	//	if (_dir == RIGHT) 
	}
	else if (!_isJump) {
	
	

		//_s->setIdle();
	}


	// 좌우 이동
	if (!KEYMANAGER->isStayKeyDown(VK_RIGHT) || _dir == LEFT) {

		if (KEYMANAGER->isStayKeyDown(VK_LEFT)) {
			_img->setFrameY(0);
			_dir = LEFT;
		
		}

	}

	if (!KEYMANAGER->isStayKeyDown(VK_LEFT) || _dir == RIGHT) {
		if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) {
			_img->setFrameY(1);
			_dir = RIGHT;
		}
	}
}


