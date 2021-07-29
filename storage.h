#pragma once
#include "gameNode.h"

class storage : public gameNode
{
public:
	storage();
	~storage();

	virtual HRESULT init();
};

