#include "pch.h"
#include "soundTest.h"


soundTest::soundTest()
{
}


soundTest::~soundTest()
{
}

// ���� �� ��
// ����Ʈ ������ ��� == 
// �÷��� ���� ���� == 
// ���� == 
// ���� ���� ==
// ���α׷�����(����, �ð�) ==
// ���� �ð� / ���� �ð� ��� ==
// �ð��� Ŭ�� �� �ش� �������� �̵� == 
// �� �� ��� ������ ���� �� �ڵ� ��� == 

HRESULT soundTest::init()
{
#pragma region IMGPATH

	//�������������� �ֿ� �ι� ��������������//
	/*{

	//�÷��̾� �̹��� ���
	//Resource/IMG/character/player/imageName.bmp

	//���� �̹��� ���
	//Resource/IMG/character/enemy/

	//NPC �̹��� ���
	//Resource/IMG/character/npc/

	}*/

	//�������������� ȿ��  ��������������//
	/*{

	//ȿ��
	//Resource/IMG/effect

	}*/



	//�������������� ������ & ������Ʈ ��������������//
	/*{
	*
	//������
	//Resource/IMG/item

	//������Ʈ
	//Resource/IMG/object

	}*/


	//�������������� �������� & UI ��������������//
	/*{

	//��������
	//Resource/IMG/stage

	//UI
	//Resource/IMG/ui

	}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//�������������� ���� ��������������//
	/*{

	//�÷��̾� ���� ���
	//Resource/SFX/Player/

	//ȯ��// �������� ���
	//Resource/SFX/environment

	//���� ȿ����? ���
	//Resource/SFX/global

	//�޴�����
	//Resource/SFX/menu/

	//��������
	//Resource/SFX/weapons/

	//�ݴ� �Ⱦ�����
	//Resource/SFX/pickup/

	}*/

#pragma endregion SFXPATH

	//========================�̹��� �ҽ�======================
#pragma region IMAGESOURCES

//�÷��̾� �̹���
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma region ENEMYIMAGE

#pragma endregion ENEMYIMAGE

#pragma endregion IMAGESOURCES





	  /////////////////���� �ҽ�///////////////
#pragma region SFXSOURCE
//�÷��̾� ����
#pragma region PLAYERSFX



#pragma endregion PLAYERSFX


#pragma endregion SFXSOURCE





































	// ============================================================================================


	// �뷡 �߰�
	SOUNDMANAGER->addSound("ù ��", "resources/mp3/ù �� - �ſ���.mp3", true, false);
	SOUNDMANAGER->addSound("�츮 ����� ����", "resources/mp3/�츮 ����� ���� - ���Ѻ�.mp3", true, false);
	SOUNDMANAGER->addSound("�ѿ������� ��", "resources/mp3/�ѿ������� �� - SanE.mp3", true, false);
	SOUNDMANAGER->addSound("Ado", "resources/mp3/Ado - Raon Lee.mp3", true, false);
	SOUNDMANAGER->addSound("butter", "resources/mp3/Butter - Raon Lee.mp3", true, false);

	// ���α׷��� �̹���
	IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("volumeFront", "resources/bmp/volumeBarFront.bmp", 381, 4, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("timeBack", "resources/bmp/playTimeBarBack.bmp", 446, 3, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("timeTop", "resources/bmp/playTimeBarFront.bmp", 446, 3, true, RGB(255, 0, 255));
	

	/////���� �׽�Ʈ �ƾƾƾƾƤ��ƾƾƾƤ���
	///////�ƾƾƾƾƾƤ��ƾ� �ٲ��


	image* img = IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255));

	IMAGEMANAGER->findImage("volumeBack");

	// �뷡 �̸�
	_music[0] = "ù ��";
	_music[1] = "�츮 ����� ����";
	_music[2] = "�ѿ������� ��";
	_music[3] = "Ado";
	_music[4] = "butter";

	_music[4] = "qwe";
	_music[3] = "abc";

	// index
	_listNum = 0;
	_nextNum = _listNum + 1;
	_lastNum = 4;

	// bool����
	_isShuffle = false;
	_isPlay = false;
	_isLoop = false;

	// �ð�
	_totalTime = SOUNDMANAGER->getTotalTime(_music[_listNum]);
	_currentTime = 0.f;

	// ����
	_volume = 1.0f;

	// �̹��� �� ��Ʈ ����
	setImage();
	makeRect();

	// ���α׷�����
	_volumeBar = new progressBar;
	_volumeBar->init(100, 810, 381, 4, "volumeBack", "volumeFront");
	_timeBar = new progressBar;
	_timeBar->init(65, 600, 446, 3, "timeBack", "timeTop");


	return S_OK;
}

void soundTest::release()
{
}

void soundTest::update()
{
	// ��ư Ŭ��
	collision();
	
	// ��Ȳ�� ���� ��ư ����(play / stop)
	changeButton();

	// ��Ʈ �缳��
	makeRect();

	// ���� ����
	setVolume();

	// ���� �뷡 �ڵ� ���
	nextMusic();

	_volumeBar->update();
	_timeBar->update();
	_timeBar->setGauge(_currentTime, _totalTime);

	_totalTime = SOUNDMANAGER->getTotalTime(_music[_listNum]);
	SOUNDMANAGER->setVolume(_music[_listNum], _volume);
	if (_isPlay) _currentTime = SOUNDMANAGER->getCurrentTime(_music[_listNum]);
}

void soundTest::render()
{
	_volumeBar->render();
	_timeBar->render();
	renderImage();

	char str[128];

	// ���� ��� ����
	SetBkMode(getMemDC(), TRANSPARENT);

	SetTextColor(getMemDC(), RGB(150, 150, 150));

	// ���� �� ����
	wsprintf(str, "%d:%02d", (_totalTime / 1000) / 60, (_totalTime / 1000) % 60);
	TextOut(getMemDC(), 485, 610, str, strlen(str));

	// ���� ���� ����
	wsprintf(str, "%d:%02d", _currentTime / 1000 / 60, _currentTime / 1000 % 60);
	TextOut(getMemDC(), 65, 610, str, strlen(str));

	// �����
	if (KEYMANAGER->isToggleKey(VK_TAB))
	{
		for (int i = 0; i < BUTTONMAX; i++)
		{
			Rectangle(getMemDC(), _button[i].rc);
		}

		sprintf_s(str, "x : %f, y : %f", _button[7].img->getX(), _button[7].img->getY());
		TextOut(getMemDC(), 0, 10, str, strlen(str));

		sprintf_s(str, "_isPlay : %d", _isPlay);
		TextOut(getMemDC(), 10, 10, str, strlen(str));

		sprintf_s(str, "_isPlay : %d", _isPlay);
		TextOut(getMemDC(), 10, 30, str, strlen(str));

		sprintf_s(str, "volume : %f", _volume);
		TextOut(getMemDC(), 10, 50, str, strlen(str));

		sprintf_s(str, "x : %d", (int)_ptMouse.x);
		TextOut(getMemDC(), 10, 70, str, strlen(str));

		wsprintf(str, "%d", _currentTime);
		TextOut(getMemDC(), 10, 90, str, strlen(str));
		wsprintf(str, "%d", _totalTime);
		TextOut(getMemDC(), 10, 110, str, strlen(str));
	}
}

void soundTest::setImage()
{
	IMAGEMANAGER->addImage("���", "resources/bmp/background.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	_album[0] = IMAGEMANAGER->addImage("ù ��", "resources/bmp/ù �� �ٹ�.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[0], 110, 90);
	_album[1] = IMAGEMANAGER->addImage("�츮 ����� ����", "resources/bmp/�츮 ����� ���� �ٹ�.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[1], 110, 90);
	_album[2] = IMAGEMANAGER->addImage("�ѿ������� ��", "resources/bmp/�ѿ������� �� �ٹ�.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[2], 110, 90);
	_album[3] = IMAGEMANAGER->addImage("odo", "resources/bmp/odo �ٹ�.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[3], 110, 90);
	_album[4] = IMAGEMANAGER->addImage("butter", "resources/bmp/butter �ٹ�.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[4], 110, 90);

	_button[0].img = IMAGEMANAGER->addImage("������", "resources/bmp/pointer.bmp", 28, 28, true, RGB(255, 0, 255));
	setXY(_button[0].img, 460, 800);
	_button[1].img = IMAGEMANAGER->addImage("play", "resources/bmp/playButton.bmp", 60, 60, true, RGB(255, 0, 255));
	setXY(_button[1].img, 265, 700);
	_button[2].img = IMAGEMANAGER->addImage("pause", "resources/bmp/pauseButton.bmp", 60, 60, false, RGB(255, 0, 255));
	setXY(_button[2].img, 265, 700);
	_button[3].img = IMAGEMANAGER->addImage("loopOn", "resources/bmp/loopButtonOn.bmp", 40, 40, true, RGB(255, 0, 255));
	setXY(_button[3].img, 475, 710);
	_button[4].img = IMAGEMANAGER->addImage("loopOff", "resources/bmp/loopButtonOff.bmp", 40, 40, true, RGB(255, 0, 255));
	setXY(_button[4].img, 475, 710);
	_button[5].img = IMAGEMANAGER->addImage("shuffleOn", "resources/bmp/shuffleButtonOn.bmp", 40, 40, true, RGB(255, 0, 255));
	setXY(_button[5].img, 65, 710);
	_button[6].img = IMAGEMANAGER->addImage("shuffleOff", "resources/bmp/shuffleButtonOff.bmp", 40, 40, true, RGB(255, 0, 255));
	setXY(_button[6].img, 65, 710);
	_button[7].img = IMAGEMANAGER->addImage("next", "resources/bmp/nextButton.bmp", 60, 60, true, RGB(255, 0, 255));
	setXY(_button[7].img, 375, 700);
	_button[8].img = IMAGEMANAGER->addImage("back", "resources/bmp/backButton.bmp", 60, 60, true, RGB(255, 0, 255));
	setXY(_button[8].img, 145, 700);

	_button[9].img = IMAGEMANAGER->addImage("ù �� ����Ʈ", "resources/bmp/ù ��.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[9].img, 615, 115);
	_button[10].img = IMAGEMANAGER->addImage("�츮 ����� ���� ����Ʈ", "resources/bmp/�츮 ����� ����.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[10].img, 615, 180);
	_button[11].img = IMAGEMANAGER->addImage("�ѿ������� �� ����Ʈ", "resources/bmp/�ѿ������� ��.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[11].img, 615, 245);
	_button[12].img = IMAGEMANAGER->addImage("odo ����Ʈ", "resources/bmp/Odo.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[12].img, 615, 310);
	_button[13].img = IMAGEMANAGER->addImage("butter ����Ʈ", "resources/bmp/butter.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[13].img, 615, 375);
}

void soundTest::renderImage()
{
	// play & pause ��ư
	if (!_isPlay) IMAGEMANAGER->render("play", getMemDC(), _button[1].img->getX(), _button[1].img->getY());
	else if (_isPlay) IMAGEMANAGER->render("pause", getMemDC(), _button[2].img->getX(), _button[2].img->getY());

	// ���� �� / ���� ��
	IMAGEMANAGER->render("next", getMemDC(), 375, 700);
	IMAGEMANAGER->render("back", getMemDC(), 145, 700);

	// ���� ��ư
	if (!_isShuffle) IMAGEMANAGER->render("shuffleOff", getMemDC(), 65, 710);
	else IMAGEMANAGER->render("shuffleOn", getMemDC(), 65, 710);
	
	// �ݺ� ��ư
	if (!_isLoop) IMAGEMANAGER->render("loopOff", getMemDC(), 475, 710);
	else IMAGEMANAGER->render("loopOn", getMemDC(), 475, 710);

	// �� ���
	IMAGEMANAGER->render("ù �� ����Ʈ", getMemDC(), 615, 115);
	IMAGEMANAGER->render("�츮 ����� ���� ����Ʈ", getMemDC(), 615, 180);
	IMAGEMANAGER->render("�ѿ������� �� ����Ʈ", getMemDC(), 615, 245);
	IMAGEMANAGER->render("odo ����Ʈ", getMemDC(), 615, 310);
	IMAGEMANAGER->render("butter ����Ʈ", getMemDC(), 615, 375);

	// ���� ���� ������
	IMAGEMANAGER->render("������", getMemDC(), _button[0].img->getX(), _button[0].img->getY());

	// �ٹ� ���� ����
	ChangeAlbum();
}

void soundTest::makeRect()
{
	for (int i = 0; i < BUTTONMAX; ++i)
	{
		_button[i].rc = RectMake(_button[i].img->getX(), _button[i].img->getY(), _button[i].img->getWidth(), _button[i].img->getHeight());
	}
}

// ���콺 Ŭ��
void soundTest::collision()
{
	//setTime();
	if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
	{
		Play();				// ���
		Pause();			// �Ͻ�����
		Next();				// ���� ��
		Back();				// ���� ��

		Shuffle();			// ����
		Loop();				// �ݺ�

		selectMusic();		// �뷡 ��� Ŭ��
		setTime();			// currentTime, totalTime
	}
}

// �뷡 ��� Ŭ��
void soundTest::selectMusic()
{
	if (PtInRect(&_button[9].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		_listNum = 0;

		SOUNDMANAGER->play(_music[_listNum]);

		_isPlay = true;
	}
	else if (PtInRect(&_button[10].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		_listNum = 1;

		SOUNDMANAGER->play(_music[_listNum]);

		_isPlay = true;
	}
	else if (PtInRect(&_button[11].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		_listNum = 2;

		SOUNDMANAGER->play(_music[_listNum]);

		_isPlay = true;
	}
	else if (PtInRect(&_button[12].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		_listNum = 3;

		SOUNDMANAGER->play(_music[_listNum]);

		_isPlay = true;
	}
	else if (PtInRect(&_button[13].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		_listNum = 4;

		SOUNDMANAGER->play(_music[_listNum]);

		_isPlay = true;
	}
}

// �̹��� X, Y�� ����
void soundTest::setXY(image* img, float x, float y)
{
	img->setX(x);
	img->setY(y);
}

// ���
void soundTest::Play()
{
	// Play
	if (PtInRect(&_button[1].rc, _ptMouse))
	{
		if (_currentTime != 0) SOUNDMANAGER->resume(_music[_listNum]);
		else SOUNDMANAGER->play(_music[_listNum], _volume);
		_isPlay = true;
	}
}

// �Ͻ� ����
void soundTest::Pause()
{
	// Pause
	if (PtInRect(&_button[2].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);
		_isPlay = false;
	}
}

// ���� ��
void soundTest::Next()
{
	// Next
	if (PtInRect(&_button[7].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);
	
		_lastNum = _listNum;
	
		if (_isShuffle)
		{
			_nextNum = RND->getInt(5);
		}
		else
		{
			if (_listNum + 1 >= 5)	_nextNum = 0;
			else _nextNum = _listNum + 1;
		}
		_listNum = _nextNum;
	
		SOUNDMANAGER->play(_music[_listNum], _volume);

		_isPlay = true;
	}
}

// ���� ��
void soundTest::Back()
{
	// Back
	if (PtInRect(&_button[8].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		if (_lastNum <= 0) _lastNum = 4;
		else if (_lastNum == _listNum) _lastNum = _listNum - 1;

		_listNum = _lastNum;

		SOUNDMANAGER->play(_music[_listNum], _volume);

		_isPlay = true;
	}
}

// ������ ��� ����
void soundTest::Shuffle()
{
	// Shuffle
	if (PtInRect(&_button[6].rc, _ptMouse))			// Off
	{
		if (!_isShuffle) _isShuffle = true;
	}
	else if (PtInRect(&_button[5].rc, _ptMouse))	// On
	{
		if (_isShuffle) _isShuffle = false;
	}
}

// �ݺ� ��� ����
void soundTest::Loop()
{
	// Loop
	if (PtInRect(&_button[4].rc, _ptMouse))			// Off
	{
		if (!_isLoop) _isLoop = true;
	}
	else if (PtInRect(&_button[3].rc, _ptMouse))	// On
	{
		if (_isLoop) _isLoop = false;
	}
}

// ���� ����
void soundTest::setVolume()
{
	RECT rc = _volumeBar->getRect();

	if (KEYMANAGER->isStayKeyDown(VK_LBUTTON))
	{
		if (PtInRect(&_button[0].rc, _ptMouse))
		{
			if (_ptMouse.x >= 100 + _button[0].img->getWidth() / 2 && _ptMouse.x <= 460 + _button[0].img->getWidth() / 2)
			{
				_button[0].img->setX(_ptMouse.x - _button[0].img->getWidth() / 2);
				_volumeBar->setGauge(_button[0].img->getX() - 100, 360);
				_volume = (_button[0].img->getX() - 100) / 360;
			}

			if (_button[0].img->getX() >= 460)
			{
				_button[0].img->setX(460);
			}
			else if (_button[0].img->getX() <= 100)
			{
				_button[0].img->setX(100);
			}
		}
	}
}

// �ð� ���α׷����� Ŭ��
void soundTest::setTime()
{
	RECT rc = _timeBar->getRect();

	if (PtInRect(&rc, _ptMouse))
	{
		if (_ptMouse.x >= 65 && _ptMouse.x <= 511)
		{
			_currentTime = (((float)_ptMouse.x - 65) / 446) * _totalTime;
			SOUNDMANAGER->setCurrentTime(_music[_listNum], _currentTime);
		}
	}
	//_timeBar->setGauge(_currentTime, _totalTime);
}

// �ٹ� ���� ����
void soundTest::ChangeAlbum()
{
	switch (_listNum)
	{
	case ù��:
		IMAGEMANAGER->render("ù ��", getMemDC(), _album[0]->getX(), _album[0]->getY());
		break;
	case �츮����ѵ���:
		IMAGEMANAGER->render("�츮 ����� ����", getMemDC(), _album[1]->getX(), _album[1]->getY());
		break;
	case �ѿ������ǲ�:
		IMAGEMANAGER->render("�ѿ������� ��", getMemDC(), _album[2]->getX(), _album[2]->getY());
		break;
	case ����:
		IMAGEMANAGER->render("odo", getMemDC(), _album[3]->getX(), _album[3]->getY());
		break;
	case ����:
		IMAGEMANAGER->render("butter", getMemDC(), _album[4]->getX(), _album[4]->getY());
		break;
	default:
		break;
	}
}

void soundTest::changeButton()
{
	if (_isPlay)
	{
		setXY(_button[1].img, -300, 700);		// play rect
		setXY(_button[2].img, 265, 700);		// pause rect
	}
	else
	{
		setXY(_button[1].img, 265, 700);		// play rect
		setXY(_button[2].img, -300, 700);		// pause rect
	}

	if (_isShuffle)
	{
		setXY(_button[5].img, 65, 710);			// shuffleOff rect
		setXY(_button[6].img, -300, 710);		// shuffleOn rect
	}
	else
	{
		setXY(_button[5].img, -300, 710);		// shuffleOff rect
		setXY(_button[6].img, 65, 710);			// shuffleOn rect
	}

	if (_isLoop)
	{
		setXY(_button[3].img, 475, 710);		// loopOff rect
		setXY(_button[4].img, -300, 710);		// loopOn rect
	}
	else
	{
		setXY(_button[3].img, -300, 710);		// loopOff rect
		setXY(_button[4].img, 475, 710);		// loopOn rect
	}
}
// ���� �뷡�� ������ ���� �뷡 �ڵ� ���
void soundTest::nextMusic()
{
	if (_totalTime == _currentTime)
	{
		SOUNDMANAGER->pause(_music[_listNum]);

		if (_listNum >= 4)
		{
			_listNum = 0;

			if (_isLoop)
			{
				SOUNDMANAGER->play(_music[_listNum]);
			}
			else if (!_isLoop)
			{
				SOUNDMANAGER->stop(_music[_listNum]);
			}
		}
		else
		{
			_listNum++;
			SOUNDMANAGER->play(_music[_listNum]);
		}
	}
}
