#pragma once
#include "gameNode.h"
#include "stateManager.h"
#include "run.h"
#include "jump.h"
#include "idle.h"
//#include "climb.h"
//#include "die.h"


//UNSAFE ������ ���������� �����ϴ� ����
#pragma warning(disable:4996)

class ponpoko : public gameNode
{
private:
	stateManager* _stateManager;

	run* _run;
	jump* _jump;
	idle* _idle;
	//climb* _climb;
	//die* _die;

public:

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();


	void setValue(stateManager* stateManager);
	stateManager* getState() { return _stateManager; }

	// ���µ鸶�� �ϳ��� ����
	void setRun() { setValue(_run); }
	void setJump() { setValue(_jump); }
	void setIdle() { setValue(_idle); }
	//void setClimb() { setValue(_climb); }
	//void setDie() { setValue(_die); }
};

