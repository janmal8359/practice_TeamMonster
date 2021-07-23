#pragma once
#include "gameNode.h"

class ImageAnimation : public gameNode
{
private:
	image* idle;
	image* jump;
	image* move;


public:
	ImageAnimation();
	~ImageAnimation();

	void changeMove();
};

