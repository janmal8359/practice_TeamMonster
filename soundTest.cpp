#include "pch.h"
#include "soundTest.h"


soundTest::soundTest()
{
}


soundTest::~soundTest()
{
}

// 내일 할 것
// 리스트 누르면 재생 == 
// 플레이 퍼즈 구분 == 
// 셔플 == 
// 볼륨 조절 ==
// 프로그래스바(볼륨, 시간) ==
// 현재 시간 / 남은 시간 출력 ==
// 시간바 클릭 시 해당 지점으로 이동 == 
// 한 곡 재생 끝나면 다음 곡 자동 재생 == 

HRESULT soundTest::init()
{
#pragma region IMGPATH

	//ㅇㅇㅇㅇㅇㅇㅇ 주요 인물 ㅇㅇㅇㅇㅇㅇㅇ//
	/*{

	//플레이어 이미지 경로
	//Resource/IMG/character/player/imageName.bmp

	//적군 이미지 경로
	//Resource/IMG/character/enemy/

	//NPC 이미지 경로
	//Resource/IMG/character/npc/

	}*/

	//ㅇㅇㅇㅇㅇㅇㅇ 효과  ㅇㅇㅇㅇㅇㅇㅇ//
	/*{

	//효과
	//Resource/IMG/effect

	}*/



	//ㅇㅇㅇㅇㅇㅇㅇ 아이템 & 오브젝트 ㅇㅇㅇㅇㅇㅇㅇ//
	/*{
	*
	//아이템
	//Resource/IMG/item

	//오브젝트
	//Resource/IMG/object

	}*/


	//ㅇㅇㅇㅇㅇㅇㅇ 스테이지 & UI ㅇㅇㅇㅇㅇㅇㅇ//
	/*{

	//스테이지
	//Resource/IMG/stage

	//UI
	//Resource/IMG/ui

	}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//ㅇㅇㅇㅇㅇㅇㅇ 음원 ㅇㅇㅇㅇㅇㅇㅇ//
	/*{

	//플레이어 음원 경로
	//Resource/SFX/Player/

	//환경// 스테이지 경로
	//Resource/SFX/environment

	//보스 효과음? 경로
	//Resource/SFX/global

	//메뉴음원
	//Resource/SFX/menu/

	//무기음원
	//Resource/SFX/weapons/

	//줍는 픽업음원
	//Resource/SFX/pickup/

	}*/

#pragma endregion SFXPATH

	//========================이미지 소스======================
#pragma region IMAGESOURCES

//플레이어 이미지
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma region ENEMYIMAGE

#pragma endregion ENEMYIMAGE

#pragma endregion IMAGESOURCES





	  /////////////////사운드 소스///////////////
#pragma region SFXSOURCE
//플레이어 사운드
#pragma region PLAYERSFX



#pragma endregion PLAYERSFX


#pragma endregion SFXSOURCE





































	// ============================================================================================


	// 노래 추가
	SOUNDMANAGER->addSound("첫 줄", "resources/mp3/첫 줄 - 신용재.mp3", true, false);
	SOUNDMANAGER->addSound("우리 사랑한 동안", "resources/mp3/우리 사랑한 동안 - 임한별.mp3", true, false);
	SOUNDMANAGER->addSound("한여름밤의 꿀", "resources/mp3/한여름밤의 꿀 - SanE.mp3", true, false);
	SOUNDMANAGER->addSound("Ado", "resources/mp3/Ado - Raon Lee.mp3", true, false);
	SOUNDMANAGER->addSound("butter", "resources/mp3/Butter - Raon Lee.mp3", true, false);

	// 프로그래바 이미지
	IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("volumeFront", "resources/bmp/volumeBarFront.bmp", 381, 4, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("timeBack", "resources/bmp/playTimeBarBack.bmp", 446, 3, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("timeTop", "resources/bmp/playTimeBarFront.bmp", 446, 3, true, RGB(255, 0, 255));
	

	/////깃헙 테스트 아아아아아ㅏ아아아아ㅏㅇ
	///////아아아아아아ㅏ아아 바뀌나요


	image* img = IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255));

	IMAGEMANAGER->findImage("volumeBack");

	// 노래 이름
	_music[0] = "첫 줄";
	_music[1] = "우리 사랑한 동안";
	_music[2] = "한여름밤의 꿀";
	_music[3] = "Ado";
	_music[4] = "butter";

	_music[4] = "qwe";
	_music[3] = "abc";

	// index
	_listNum = 0;
	_nextNum = _listNum + 1;
	_lastNum = 4;

	// bool변수
	_isShuffle = false;
	_isPlay = false;
	_isLoop = false;

	// 시간
	_totalTime = SOUNDMANAGER->getTotalTime(_music[_listNum]);
	_currentTime = 0.f;

	// 볼륨
	_volume = 1.0f;

	// 이미지 및 렉트 설정
	setImage();
	makeRect();

	// 프로그래스바
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
	// 버튼 클릭
	collision();
	
	// 상황에 따라 버튼 변경(play / stop)
	changeButton();

	// 렉트 재설정
	makeRect();

	// 볼륨 설정
	setVolume();

	// 다음 노래 자동 재생
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

	// 글자 배경 삭제
	SetBkMode(getMemDC(), TRANSPARENT);

	SetTextColor(getMemDC(), RGB(150, 150, 150));

	// 음악 총 길이
	wsprintf(str, "%d:%02d", (_totalTime / 1000) / 60, (_totalTime / 1000) % 60);
	TextOut(getMemDC(), 485, 610, str, strlen(str));

	// 음악 현재 길이
	wsprintf(str, "%d:%02d", _currentTime / 1000 / 60, _currentTime / 1000 % 60);
	TextOut(getMemDC(), 65, 610, str, strlen(str));

	// 디버깅
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
	IMAGEMANAGER->addImage("배경", "resources/bmp/background.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	_album[0] = IMAGEMANAGER->addImage("첫 줄", "resources/bmp/첫 줄 앨범.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[0], 110, 90);
	_album[1] = IMAGEMANAGER->addImage("우리 사랑한 동안", "resources/bmp/우리 사랑한 동안 앨범.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[1], 110, 90);
	_album[2] = IMAGEMANAGER->addImage("한여름밤의 꿀", "resources/bmp/한여름밤의 꿀 앨범.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[2], 110, 90);
	_album[3] = IMAGEMANAGER->addImage("odo", "resources/bmp/odo 앨범.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[3], 110, 90);
	_album[4] = IMAGEMANAGER->addImage("butter", "resources/bmp/butter 앨범.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[4], 110, 90);

	_button[0].img = IMAGEMANAGER->addImage("포인터", "resources/bmp/pointer.bmp", 28, 28, true, RGB(255, 0, 255));
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

	_button[9].img = IMAGEMANAGER->addImage("첫 줄 리스트", "resources/bmp/첫 줄.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[9].img, 615, 115);
	_button[10].img = IMAGEMANAGER->addImage("우리 사랑한 동안 리스트", "resources/bmp/우리 사랑한 동안.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[10].img, 615, 180);
	_button[11].img = IMAGEMANAGER->addImage("한여름밤의 꿀 리스트", "resources/bmp/한여름밤의 꿀.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[11].img, 615, 245);
	_button[12].img = IMAGEMANAGER->addImage("odo 리스트", "resources/bmp/Odo.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[12].img, 615, 310);
	_button[13].img = IMAGEMANAGER->addImage("butter 리스트", "resources/bmp/butter.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[13].img, 615, 375);
}

void soundTest::renderImage()
{
	// play & pause 버튼
	if (!_isPlay) IMAGEMANAGER->render("play", getMemDC(), _button[1].img->getX(), _button[1].img->getY());
	else if (_isPlay) IMAGEMANAGER->render("pause", getMemDC(), _button[2].img->getX(), _button[2].img->getY());

	// 다음 곡 / 이전 곡
	IMAGEMANAGER->render("next", getMemDC(), 375, 700);
	IMAGEMANAGER->render("back", getMemDC(), 145, 700);

	// 셔플 버튼
	if (!_isShuffle) IMAGEMANAGER->render("shuffleOff", getMemDC(), 65, 710);
	else IMAGEMANAGER->render("shuffleOn", getMemDC(), 65, 710);
	
	// 반복 버튼
	if (!_isLoop) IMAGEMANAGER->render("loopOff", getMemDC(), 475, 710);
	else IMAGEMANAGER->render("loopOn", getMemDC(), 475, 710);

	// 곡 목록
	IMAGEMANAGER->render("첫 줄 리스트", getMemDC(), 615, 115);
	IMAGEMANAGER->render("우리 사랑한 동안 리스트", getMemDC(), 615, 180);
	IMAGEMANAGER->render("한여름밤의 꿀 리스트", getMemDC(), 615, 245);
	IMAGEMANAGER->render("odo 리스트", getMemDC(), 615, 310);
	IMAGEMANAGER->render("butter 리스트", getMemDC(), 615, 375);

	// 볼륨 조절 포인터
	IMAGEMANAGER->render("포인터", getMemDC(), _button[0].img->getX(), _button[0].img->getY());

	// 앨범 사진 변경
	ChangeAlbum();
}

void soundTest::makeRect()
{
	for (int i = 0; i < BUTTONMAX; ++i)
	{
		_button[i].rc = RectMake(_button[i].img->getX(), _button[i].img->getY(), _button[i].img->getWidth(), _button[i].img->getHeight());
	}
}

// 마우스 클릭
void soundTest::collision()
{
	//setTime();
	if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
	{
		Play();				// 재생
		Pause();			// 일시정지
		Next();				// 다음 곡
		Back();				// 이전 곡

		Shuffle();			// 셔플
		Loop();				// 반복

		selectMusic();		// 노래 목록 클릭
		setTime();			// currentTime, totalTime
	}
}

// 노래 목록 클릭
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

// 이미지 X, Y값 설정
void soundTest::setXY(image* img, float x, float y)
{
	img->setX(x);
	img->setY(y);
}

// 재생
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

// 일시 정지
void soundTest::Pause()
{
	// Pause
	if (PtInRect(&_button[2].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);
		_isPlay = false;
	}
}

// 다음 곡
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

// 이전 곡
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

// 무작위 재생 여부
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

// 반복 재생 여부
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

// 볼륨 설정
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

// 시간 프로그래스바 클릭
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

// 앨범 사진 변경
void soundTest::ChangeAlbum()
{
	switch (_listNum)
	{
	case 첫줄:
		IMAGEMANAGER->render("첫 줄", getMemDC(), _album[0]->getX(), _album[0]->getY());
		break;
	case 우리사랑한동안:
		IMAGEMANAGER->render("우리 사랑한 동안", getMemDC(), _album[1]->getX(), _album[1]->getY());
		break;
	case 한여름밤의꿀:
		IMAGEMANAGER->render("한여름밤의 꿀", getMemDC(), _album[2]->getX(), _album[2]->getY());
		break;
	case 오도:
		IMAGEMANAGER->render("odo", getMemDC(), _album[3]->getX(), _album[3]->getY());
		break;
	case 버터:
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
// 현재 노래가 끝나면 다음 노래 자동 재생
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
