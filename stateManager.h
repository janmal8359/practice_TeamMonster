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
	animation* _aniL, *_aniR;		// 방향별 애니메이션

	image* _img;
	int _dir;
	bool _isPonkokoMoveX, _isPonkokoMoveY;

	float _xSpeed = ACCEL;
	float _ySpeed, _g = GRAVITY;
	bool _isJump;
	bool _isHit;

	RECT _rc;
	float _x, _y;

	//너구리 상태받기 위한 변수
	ponpoko* _p;

public:
	virtual HRESULT init();			//초기화 함수
	virtual void release();			//메모리 해제 함슈
	virtual void update();			//연산하는 함수
	virtual void render();			//그리기 함수

	virtual void move() {};
	virtual void aniChange() {};

	virtual void setState(ponpoko* state) { _p = state; }

	//점프 유무를 위한 설정자, 접근자
	virtual bool getIsJump() { return _isJump; }
	virtual void setIsJump(bool isJump) { _isJump = isJump; }

	// 소닉의 이미지를 위한 설정자, 접근자
	virtual RECT getRect() { return _rc; };
	virtual void setRect(RECT rc) { _rc = rc; }

	virtual float getX() { return _x; };
	virtual void setX(float x) { _x = x; }

	virtual float getY() { return _y; };
	virtual void setY(float y) { _y = y; }

	virtual int getDir() { return _dir; }
	virtual void setDir(int dir) { _dir = dir; }
	
	//점프
	virtual float getYSpeed() { return _ySpeed; };
	virtual void setYSpeed(float ySpeed) { _ySpeed = ySpeed; }

	

	
};

