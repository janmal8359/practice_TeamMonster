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
	// ���� ���·� ����
	if (KEYMANAGER->isStayKeyDown(VK_UP)) {
	
	//	_s->setJump();
	}

	// Ű�� ���ʸ� ������ �������� (�ٸ��� �ȴ����� ��� || �������� ���� ������ ��쿣 OK
	// �ӵ� ����
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
