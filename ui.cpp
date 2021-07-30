#include "pch.h"
#include "ui.h"
#include "stateManager.h"
#include "ponpoko.h"



HRESULT ui::init()
{
	//IMAGEMANAGER->addImage("BG", "bgf.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	//IMAGEMANAGER->addImage("thorn", "thorn.bmp", 25, 25, true, RGB(255, 0, 255));

	//_fruitRc = RectMakeCenter(95, 930, 50, 50);

	
	_timer = TIMEMANAGER->getWorldTime();

	_fruitNum = 0;					//���ϰ���
	_lifeNum = 4;					//�������

	_timeXWidth = -800;				//Ÿ�̸� ������
			
	for (int i = 0; i < 8; ++i)
	{
		_isFruit[i] = false;		//���� ������
	}

	for (int i = 0; i < 2; ++i)
	{
		_isJar[i] = false;			//�׾Ƹ� �ھ�����
	}
	
	_isThorn = false;		//���� �ھ�����? �̰� �����ϳ�?
	_isladder = false;				//��ٸ� 

	//�׾Ƹ� xy�� �Ѱ��ٰ�
	_jarX[0] = 900;					
	_jarY[0] = 425;
	_jarX[1] = 920;
	_jarY[1] = 700;

	_sceneNum = 0;

	_x = WINSIZEX / 2;
	_y = WINSIZEY / 2;

	return S_OK;
}

void ui::release()
{

}

void ui::update()
{
	



	//_rc = RectMakeCenter(_x, _y, 50, 50);

	score();		//����
	time();
	thorn();		//����
	life();			//������
	ladder();		//��ٸ�
	if(_sceneNum == 1) collision();
	jar();			//�׾Ƹ�
	fruit();		//����

	
}

void ui::render()
{
	//IMAGEMANAGER->render("BG", getMemDC(), 0, 0);

	char str[128];

	SetTextColor(getMemDC(), RGB(255, 255, 255));
	SetBkColor(getMemDC(), RGB(0, 0, 0));

	sprintf_s(str, "1 UP : %d" ,_score);
	TextOut(getMemDC(), 10, 10, str, strlen(str));

	sprintf_s(str, "TOP SCORE : %d", _topScore);
	TextOut(getMemDC(), 200, 10, str, strlen(str));
	

	sprintf_s(str, "worldTime : %f", TIMEMANAGER->getWorldTime());
	TextOut(getMemDC(), 10, 50, str, strlen(str));

	sprintf_s(str, "�浹Ȯ�� : %d", _isThorn);
	TextOut(getMemDC(), 300, 50, str, strlen(str));

	sprintf_s(str, "ī��Ʈ : %d", _count);
	TextOut(getMemDC(), 500, 50, str, strlen(str));

	sprintf_s(str, "��ٸ��浹 : %d", _isladder);
	TextOut(getMemDC(), 700, 50, str, strlen(str));


	
	if (_sceneNum != 0)
	{
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
				Rectangle(getMemDC(), _fruitRc[i]);		// ����
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

			for (int i = 0; i < 2; i++)
			{
				if (!_isJar[i])
				{
					Rectangle(getMemDC(), _jarRc[i]);			//�׾Ƹ�
				}
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

		for (int i = 0; i < 2; ++i)
		{
			if (!_isJar[i])
			{
				IMAGEMANAGER->render("randomItem", getMemDC(), _jarRc[i].left, _jarRc[i].top);			//��ٸ�
			}
		}
		//Rectangle(getMemDC(), _rc);		//�浹üũ

		HDC hdc;
		PAINTSTRUCT ps;
		HBRUSH MyBrush, OldBrush;

		MyBrush = CreateSolidBrush(RGB(051, 051, 204));
		OldBrush = (HBRUSH)SelectObject(getMemDC(), MyBrush);

		Rectangle(getMemDC(), _timerBar);		//Ÿ�̸� ��
		SelectObject(getMemDC(), OldBrush);
		DeleteObject(MyBrush);


	}
}

void ui::thorn()
{

	_thornRc[0] = RectMakeCenter(800, 850, 25, 25);		   //���� 1��
	_thornRc[1] = RectMakeCenter(570, 435, 25, 25);		   //���� 3��	
	_thornRc[2] = RectMakeCenter(500, 572, 25, 25);		   //���� 4��
	_thornRc[3] = RectMakeCenter(900, 298, 25, 25);		   //���� 5��
	
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
	

	_timeCount++;			//�ð� ī��Ʈ

	_topScore = _score;
	 

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
	
	_ladderRc[0] = RectMakeCenter(622, 780, 38, 173);	//1��
	_ladderRc[1] = RectMakeCenter(800, 640, 38, 173);	//2��
	_ladderRc[2] = RectMakeCenter(340, 500, 38, 173);	//3��
	_ladderRc[3] = RectMakeCenter(480, 360, 38, 173);	//4��
	
}

void ui::collision()
{
	RECT _temp;

	for (int i = 0; i < 8; ++i)			//���� ����
	{
		RECT rc = _ponpoko->getState()->getRect();

		if (IntersectRect(&_temp, &rc, &_mapFruitRc[i]) && !_isFruit[i])
		{
			_isFruit[i] = true;
			_score += 200;
			_fruitNum++;

		}
	}

	for (int i = 0; i < 2; ++i)
	{
		if (IntersectRect(&_temp, &_rc, &_jarRc[i]) && !_isJar[i])
		{
			_isJar[i] = true;
			_score += 400;
		
		}
	}
	
	RECT rc = _ponpoko->getState()->getRect();

	for (int i = 0; i < 4; ++i)
	{
		if (IntersectRect(&_temp, &rc, &_ladderRc[i]))
		{
			_isladder = true;
		}
		if (!IntersectRect(&_temp, &rc, &_ladderRc[0]) && !IntersectRect(&_temp, &rc, &_ladderRc[1]) && !IntersectRect(&_temp, &rc, &_ladderRc[2]) && !IntersectRect(&_temp, &rc, &_ladderRc[3]))
		{
			_isladder = false;
		}
	} 
	for (int i = 0; i < 4; ++i)
	{
		RECT rc = _ponpoko->getState()->getRect();

		if (IntersectRect(&_temp, &rc, &_thornRc[i]) && !_isThorn)
		{
			_isThorn = true;
		}	
	}
	
	if (_isThorn)
	{
		_count++;
	}
	if (_count == 1)
	{
		_lifeNum -= 1;
	}
	if (_count == 100)
	{
		_isThorn = false;
		_count = 0;
	}
	
	if (KEYMANAGER->isStayKeyDown(VK_DOWN))
	{
		_ponpoko->getState()->setY(2);
	}

}

void ui::jar()
{
	for (int i = 0; i < 2; ++i)
	{
		if (!_isJar[i])
		{

			_jarRc[0] = RectMakeCenter(_jarX[0], _jarY[0], 50, 50);
			_jarRc[1] = RectMakeCenter(_jarX[1], _jarY[1], 50, 50);
		
		}
	}
}

void ui::time()
{
	_timerBar = RectMake(1000, 100, _timeXWidth, 30);

	if (_timer + 8 < TIMEMANAGER->getWorldTime() && _timeXWidth < 0 && _sceneNum != 0)
	{
		_timer = TIMEMANAGER->getWorldTime();

		_timeXWidth += 80;
	}
}
