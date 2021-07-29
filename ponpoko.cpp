#include "pch.h"
#include "ponpoko.h"

HRESULT ponpoko::init()
{
	_run = new run;
	_run->init();

	_jump = new jump;
	_jump->init();

	//_climb = new climb;
	//_climb->init();
	
	_idle = new idle;
	_idle->init(); 

	_stateManager = _run;
	_stateManager->init();

	//_rc = RectMakeCenter(_x, _y, _image->getFrameWidth(), _image->getFrameHeight());

	return S_OK;
}

void ponpoko::release()
{
	gameNode::release();
}

void ponpoko::update()
{
	gameNode::update();
	_stateManager->update();
}

void ponpoko::render()
{
	_stateManager->render();
}

void ponpoko::setValue(stateManager* stateManager)
{
	//stateManager->setCoin(_stateManager->getCoin());
	stateManager->setRect(_stateManager->getRect());
	stateManager->setX(_stateManager->getX());
	stateManager->setY(_stateManager->getY());
	stateManager->setDir(_stateManager->getDir());
	stateManager->setIsJump(_stateManager->getIsJump());
	//stateManager->setIsPonpokoMoveY(_stateManager->getIsPonpokoMoveY());
	//stateManager->setIsHit(_stateManager->getIsHit());
	_stateManager = stateManager;
}