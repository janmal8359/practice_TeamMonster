#include "pch.h"
#include "run.h"
#include "ponpoko.h"


HRESULT run::init()
{

	_img = IMAGEMANAGER->findImage("ponpoko_run");

	_aniL = new animation;
	_aniL->init(_img->getWidth(), _img->getHeight(), _img->getWidth() / 7, _img->getHeight() / 2);
	_aniL->setPlayFrame(0, 6, false, true);
	_aniL->setFPS(1);

	_aniR = new animation;
	_aniR->init(_img->getWidth(), _img->getHeight(), _img->getWidth() / 7, _img->getHeight() / 2);
	_aniR->setPlayFrame(7, 13, false, true);
	_aniR->setFPS(1);

	_x = 200;
	_y = 700;
	_rc = RectMakeCenter(_x, _y, _img->getWidth(), _img->getHeight());

	return S_OK;
}

void run::release()
{
	gameNode::release();
}

void run::update()
{
	move();

	_aniL->frameUpdate(TIMEMANAGER->getElapsedTime() * 10);
	_aniR->frameUpdate(TIMEMANAGER->getElapsedTime() * 10);

	_rc = RectMakeCenter(_x, _y, _img->getWidth()/7, _img->getHeight()/2);
}

void run::render()
{
	if (_dir == LEFT)   _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniL);
	if (_dir == RIGHT)  _img->aniRender(getMemDC(), _rc.left, _rc.top, _aniR);
}

void run::move()
{
	// 점프 상태로 변경
	if (KEYMANAGER->isOnceKeyDown(VK_UP) && !_isJump) {
		_aniL->stop();
		_aniR->stop();

		_isJump = true;
		_p->setJump();
	}

	// 키는 한쪽만 눌리게 만들어야지 (다른쪽 안눌렸을 경우 || 눌렸지만 같은 방향인 경우엔 OK
	// 속도 설정
	if (!KEYMANAGER->isStayKeyDown(VK_RIGHT) || _dir == LEFT) {
		
		if (KEYMANAGER->isStayKeyDown(VK_LEFT)) {
			_dir = LEFT;
			_aniL->resume();
			_x -= 5;
		}

	}

	if (!KEYMANAGER->isStayKeyDown(VK_LEFT) || _dir == RIGHT) {

		if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) {
			_aniR->resume();
			_dir = RIGHT;
			_x += 5;
		}
	}
}
