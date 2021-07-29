#include "pch.h"
#include "ponpoko.h"

HRESULT ponpoko::init()
{
	IMAGEMANAGER->addFrameImage("ponpoko_idle", "IMG/idle.bmp", 70, 70, 1, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("ponpoko_run", "IMG/run.bmp", 490, 140, 7, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("ponpoko_climb", "IMG/climb.bmp", 210, 70, 3, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("ponpoko_jump", "IMG/jump.bmp", 140, 140, 2, 2, true, RGB(255, 0, 255));

	
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