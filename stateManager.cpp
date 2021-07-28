#include "pch.h"
#include "stateManager.h"

HRESULT stateManager::init()
{
	gameNode::init();



	return S_OK;
}

void stateManager::release()
{
	gameNode::release();
}

void stateManager::update()
{
	gameNode::update();
}

void stateManager::render()
{
	// gameNode::render();
}
