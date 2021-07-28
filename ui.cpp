#include "pch.h"
#include "ui.h"

HRESULT ui::init()
{
	//IMAGEMANAGER->addImage("BG", "bgf.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	//IMAGEMANAGER->addImage("thorn", "thorn.bmp", 25, 25, true, RGB(255, 0, 255));

	//_fruitRc = RectMakeCenter(95, 930, 50, 50);



	_fruitNum = 8;			//���ϰ���
	_lifeNum = 4;			//�������
			
	for (int i = 0; i < 8; ++i)
	{
		_isFruit[i] = false;		//���� ������
	}

	_isThorn = false;		//���� �ھ�����? �̰� �����ϳ�?

	_x = WINSIZEX / 2;
	_y = WINSIZEY / 2;

	return S_OK;
}

void ui::release()
{

}

void ui::update()
{
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) _x += 2;
	if (KEYMANAGER->isStayKeyDown(VK_LEFT)) _x -= 2;
	if (KEYMANAGER->isStayKeyDown(VK_DOWN)) _y += 2;
	if (KEYMANAGER->isStayKeyDown(VK_UP)) _y -= 2;


	_rc = RectMakeCenter(_x, _y, 50, 50);

	thorn();		//����
	life();			//������
	score();		//����
	
	ladder();		//��ٸ�

	collision();

	fruit();		//����
}

void ui::render()
{
	IMAGEMANAGER->render("BG", getMemDC(), 0, 0);

	char str[128];

	SetTextColor(getMemDC(), RGB(255, 255, 255));
	SetBkColor(getMemDC(), RGB(0, 0, 0));

	sprintf_s(str, "1 UP : %d" ,_score);
	TextOut(getMemDC(), 10, 10, str, strlen(str));

	sprintf_s(str, "TOP SCORE :", _topScore);
	TextOut(getMemDC(), 200, 10, str, strlen(str));
	



	if (KEYMANAGER->isToggleKey(VK_TAB))
	{

		for (int i = 0; i < 4; i++)
		{
			Rectangle(getMemDC(), _thornRc[i]);		// ����
		}

		for (int i = 0; i < _lifeNum; i++)
		{
			Rectangle(getMemDC(), _lifeRc[i]);		// ������
		}

		for (int i = 0; i < _fruitNum; i++)
		{
			Rectangle(getMemDC(), _fruitRc[i]);		// ������
		}
		for (int i = 0; i < 8; i++)
		{
			if (!_isFruit[i])
			{
				Rectangle(getMemDC(), _mapFruitRc[i]);		// �ʰ���
			}
		}

		for (int i = 0; i < 4; i++)
		{
			Rectangle(getMemDC(), _ladderRc[i]);			//��ٸ�

		}
	}

	for (int i = 0; i < 4; i++)
	{
		IMAGEMANAGER->render("thorn", getMemDC(), _thornRc[i].left, _thornRc[i].top);		//����
	}

	for (int i = 0; i < _lifeNum; ++i)
	{
		IMAGEMANAGER->render("life", getMemDC(), _lifeRc[i].left, _lifeRc[i].top);			//����
	}

	for (int i = 0; i < _fruitNum; ++i)
	{
		IMAGEMANAGER->render("fruit", getMemDC(), _fruitRc[i].left, _fruitRc[i].top);			//����
	}

	
	for (int i = 0; i < 8; ++i)
	{
		if (!_isFruit[i])
		{
			IMAGEMANAGER->render("fruit", getMemDC(), _mapFruitRc[i].left, _mapFruitRc[i].top);			//�ʿ� �ѷ��� ����
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		IMAGEMANAGER->render("ladder", getMemDC(), _ladderRc[i].left, _ladderRc[i].top);			//��ٸ�
	}

	Rectangle(getMemDC(), _rc);		//�浹üũ


	/*IMAGEMANAGER->render("thorn", getMemDC(), 800, 850);
	IMAGEMANAGER->render("thorn", getMemDC(), 570, 435);
	IMAGEMANAGER->render("thorn", getMemDC(), 500, 570);
	IMAGEMANAGER->render("thorn", getMemDC(), 900, 298);*/
}

void ui::thorn()
{
	for (int i = 0; i < 4; ++i)
	{
		_thornRc[0] = RectMakeCenter(800, 850, 25, 25);		   //���� 1��
		_thornRc[1] = RectMakeCenter(570, 435, 25, 25);		   //���� 3��	
		_thornRc[2] = RectMakeCenter(500, 572, 25, 25);		   //���� 4��
		_thornRc[3] = RectMakeCenter(900, 298, 25, 25);		   //���� 5��
	}
}


void ui::life()
{

	for (int i = 0; i < _lifeNum; ++i)  //����
	{
		_lifeRc[i] = RectMakeCenter(95 + 60*i, 930, 50, 50);
	}

}

void ui::score()
{

}

void ui::fruit()
{
	
	for (int i = 0; i < _fruitNum; ++i)		//����
	{
		_fruitRc[i] = RectMakeCenter(1130, 730 - 60*i, 50, 50);		
	}

	for (int i = 0; i < 8; ++i)			//���� ����
	{
		if (!_isFruit[i])
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
}

void ui::ladder()
{
	for (int i = 0; i < 4; ++i)			//��ٸ�
	{
		_ladderRc[0] = RectMakeCenter(622, 780, 38, 173);	//1��
		_ladderRc[1] = RectMakeCenter(800, 640, 38, 173);	//2��
		_ladderRc[2] = RectMakeCenter(340, 500, 38, 173);	//3��
		_ladderRc[3] = RectMakeCenter(480, 360, 38, 173);	//4��
	}

}

void ui::collision()
{
	RECT _temp;

	for (int i = 0; i < 8; ++i)			//���� ����
	{
		if (IntersectRect(&_temp, &_rc, &_mapFruitRc[i]))
		{
			_isFruit[i] = true;
			_score++;

		}
		if (_score > 20)
		{
			_score = 0;
		}
	}
	
	
}
