#include "pch.h"
#include "playGround.h"


playGround::playGround()
{
}


playGround::~playGround()
{
	//爽汐坦軒研 馬切. 嬢辞 察軒 馬切. 
}

//穣汽戚闘 砺什闘 焼焼焼焼!
//朕行 砺什闘ししししししししししししししししししししししししししししししししししししししし

//段奄鉢澗 食奄拭陥 背虞!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	// 爽汐 戚廃紺 脊艦陥
	SCENEMANAGER->addScene("什展樟", new soundTest);
	SCENEMANAGER->changeScene("什展樟");

	SOUNDMANAGER->init();
	return S_OK;
}

//五乞軒 背薦澗 食奄陥 背虞!!!!
void playGround::release()
{
	gameNode::release();
}

//尻至坦軒澗 食奄陥亜!
void playGround::update()
{
	gameNode::update();

	SCENEMANAGER->update();
	SOUNDMANAGER->update();
}

//食奄陥 益形操虞!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============是拭澗 薦降 闇球軒走 原虞 ============
	
	IMAGEMANAGER->render("壕井", getMemDC(), 0, 0);


	SCENEMANAGER->render();

	//TIMEMANAGER->render(getMemDC());

	//=============== 購拭亀 闇級走原虞 ================
	_backBuffer->render(getHDC(), 0, 0);

}

