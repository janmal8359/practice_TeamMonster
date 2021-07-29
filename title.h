/*#pragma once
#include "gameNode.h"

class title : public gameNode
{
private:
	RECT _player[8];

	float _time;

	int _index[8];
	int _x, _y;

	bool _isTitle;
	bool _isFinish;


public:
	title();
	~title();

	HRESULT init();
	void release();
	void update();
	void render();
};
*/

#pragma once
#include "gameNode.h"

struct titlePlayer
{
	RECT rc;
	int currentX, currentY;
	bool isArrive;
};

class title : public gameNode
{
private:
	titlePlayer _tPlayer[8];

	float _time;
	int _x, _y;

	bool _isTitle;
	bool _isFinish;


public:
	title();
	~title();

	HRESULT init();
	void release();
	void update();
	void render();
};

