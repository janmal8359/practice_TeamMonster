#include "pch.h"
#include "ui.h"

HRESULT ui::init()
{
	//IMAGEMANAGER->addImage("BG", "bgf.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	//IMAGEMANAGER->addImage("thorn", "thorn.bmp", 25, 25, true, RGB(255, 0, 255));

	//_fruitRc = RectMakeCenter(95, 930, 50, 50);

	_fruitNum = 8;
	_mapFruitNum = 8;
	_lifeNum = 4;

	return S_OK;
}

void ui::release()
{

}

void ui::update()
{

	thorn();		//가시
	life();			//라이프
	score();		//점수
	fruit();		//과일
	ladder();		//사다리
}

void ui::render()
{
	IMAGEMANAGER->render("BG", getMemDC(), 0, 0);

	char str[128];

	SetTextColor(getMemDC(), RGB(255, 255, 255));
	SetBkColor(getMemDC(), RGB(0, 0, 0));

	sprintf_s(str, "1 UP :" ,_score);
	TextOut(getMemDC(), 10, 10, str, strlen(str));

	sprintf_s(str, "TOP SCORE :", _score);
	TextOut(getMemDC(), 200, 10, str, strlen(str));
	



	if (KEYMANAGER->isToggleKey(VK_TAB))
	{

		for (int i = 0; i < 4; i++)
		{
			Rectangle(getMemDC(), _thornRc[i]);		// 가시
		}

		for (int i = 0; i < _lifeNum; i++)
		{
			Rectangle(getMemDC(), _lifeRc[i]);		// 라이프
		}

		for (int i = 0; i < _fruitNum; i++)
		{
			Rectangle(getMemDC(), _fruitRc[i]);		// 라이프
		}
		for (int i = 0; i < _mapFruitNum; i++)
		{
			Rectangle(getMemDC(), _mapFruitRc[i]);		// 라이프
		}

		for (int i = 0; i < 4; i++)
		{
			Rectangle(getMemDC(), _ladderRc[i]);			//사다리

		}
	}

	for (int i = 0; i < 4; i++)
	{
		IMAGEMANAGER->render("thorn", getMemDC(), _thornRc[i].left, _thornRc[i].top);		//가시
	}

	for (int i = 0; i < _lifeNum; ++i)
	{
		IMAGEMANAGER->render("life", getMemDC(), _lifeRc[i].left, _lifeRc[i].top);			//생명
	}

	for (int i = 0; i < _fruitNum; ++i)
	{
		IMAGEMANAGER->render("fruit", getMemDC(), _fruitRc[i].left, _fruitRc[i].top);			//과일
	}

	for (int i = 0; i < 8; ++i)
	{
		IMAGEMANAGER->render("fruit", getMemDC(), _mapFruitRc[i].left, _mapFruitRc[i].top);			//맵에 뿌려진 과일
	}

	for (int i = 0; i < 4; ++i)
	{
		IMAGEMANAGER->render("ladder", getMemDC(), _ladderRc[i].left, _ladderRc[i].top);			//사다리
	}



	/*IMAGEMANAGER->render("thorn", getMemDC(), 800, 850);
	IMAGEMANAGER->render("thorn", getMemDC(), 570, 435);
	IMAGEMANAGER->render("thorn", getMemDC(), 500, 570);
	IMAGEMANAGER->render("thorn", getMemDC(), 900, 298);*/
}

void ui::thorn()
{
	for (int i = 0; i < 4; ++i)
	{
		_thornRc[0] = RectMakeCenter(800, 850, 25, 25);		   //가시 1층
		_thornRc[1] = RectMakeCenter(570, 435, 25, 25);		   //가시 3층	
		_thornRc[2] = RectMakeCenter(500, 572, 25, 25);		   //가시 4층
		_thornRc[3] = RectMakeCenter(900, 298, 25, 25);		   //가시 5층
	}
}


void ui::life()
{

	for (int i = 0; i < _lifeNum; ++i)  //생명
	{
		_lifeRc[i] = RectMakeCenter(95 + 60*i, 930, 50, 50);
	}

}

void ui::score()
{

}

void ui::fruit()
{
	for (int i = 0; i < _fruitNum; ++i)		//과일
	{
		_fruitRc[i] = RectMakeCenter(1130, 730 - 60*i, 50, 50);		
	}

	for (int i = 0; i < 4; ++i)			//맵의 과일
	{
		_mapFruitRc[0] = RectMakeCenter(950, 290, 50, 50);
		_mapFruitRc[1] = RectMakeCenter(550, 840, 50, 50);
		_mapFruitRc[2] = RectMakeCenter(780, 425, 50, 50);
		_mapFruitRc[3] = RectMakeCenter(280, 290, 50, 50);
		_mapFruitRc[4] = RectMakeCenter(150, 425, 50, 50);
		_mapFruitRc[5] = RectMakeCenter(150, 560, 50, 50);
		_mapFruitRc[6] = RectMakeCenter(950, 560, 50, 50);
		_mapFruitRc[7] = RectMakeCenter(200, 700, 50, 50);
	}
	
}

void ui::ladder()
{
	for (int i = 0; i < 4; ++i)			//사다리
	{
		_ladderRc[0] = RectMakeCenter(500, 780, 38, 173);
		_ladderRc[1] = RectMakeCenter(800, 640, 38, 173);
		_ladderRc[2] = RectMakeCenter(340, 500, 38, 173);
		_ladderRc[3] = RectMakeCenter(480, 360, 38, 173);
	}

}
