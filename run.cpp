#include "pch.h"
#include "run.h"
#include "ponpoko.h"


HRESULT run::init()
{

	_img = IMAGEMANAGER->findImage("ponpoko_run");

	return S_OK;
}

void run::release()
{
	gameNode::release();
}

void run::update()
{
	move();

	_rc = RectMakeCenter(_x, _y, _img->getFrameWidth(), _img->getFrameHeight());
}

void run::render()
{
	if (_dir == LEFT)   _img->render(getMemDC(), _rc.left, _rc.top);
	if (_dir == RIGHT)  _img->render(getMemDC(), _rc.left, _rc.top);
}

void run::move()
{
	// 점프 상태로 변경
	if (KEYMANAGER->isStayKeyDown(VK_UP)) {
	
	//	_s->setJump();
	}

	// 키는 한쪽만 눌리게 만들어야지 (다른쪽 안눌렸을 경우 || 눌렸지만 같은 방향인 경우엔 OK
	// 속도 설정
	if (!KEYMANAGER->isStayKeyDown(VK_RIGHT) || _dir == LEFT) {
		

		if (KEYMANAGER->isStayKeyDown(VK_LEFT)) {
			_img->setFrameY(0);
			_dir = LEFT;
			_x -= 5;
		}

	}

	if (!KEYMANAGER->isStayKeyDown(VK_LEFT) || _dir == RIGHT) {

		if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) {
			_img->setFrameY(1);
			_dir = RIGHT;
			_x += 5;
		}
	}
}
