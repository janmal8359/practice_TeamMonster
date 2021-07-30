#pragma once
#include "gameNode.h"

#define ACCEL 0.06f
#define JUMPPOWER 0.06f
#define GRAVITY 0.08f

class ponpoko;

enum Dir
{
	LEFT,
	RIGHT
};

class stateManager : public gameNode
{
protected:
	animation* _aniL, *_aniR;		// ���⺰ �ִϸ��̼�

	image* _img;
	int _dir;
	bool _isPonkokoMoveX, _isPonkokoMoveY;

	float _xSpeed = ACCEL;
	float _ySpeed, _g = GRAVITY;
	bool _isJump;
	bool _isHit;

	RECT _rc;
	float _x, _y;

	//�ʱ��� ���¹ޱ� ���� ����
	ponpoko* _p;

public:
	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	virtual void move() {};
	virtual void aniChange() {};

	virtual void setState(ponpoko* state) { _p = state; }

	//���� ������ ���� ������, ������
	virtual bool getIsJump() { return _isJump; }
	virtual void setIsJump(bool isJump) { _isJump = isJump; }

	// �Ҵ��� �̹����� ���� ������, ������
	virtual RECT getRect() { return _rc; };
	virtual void setRect(RECT rc) { _rc = rc; }

	virtual float getX() { return _x; };
	virtual void setX(float x) { _x = x; }

	virtual float getY() { return _y; };
	virtual void setY(float y) { _y = y; }

	virtual int getDir() { return _dir; }
	virtual void setDir(int dir) { _dir = dir; }
	
	//����
	virtual float getYSpeed() { return _ySpeed; };
	virtual void setYSpeed(float ySpeed) { _ySpeed = ySpeed; }

	

	
};

