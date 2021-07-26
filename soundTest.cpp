#include "pch.h"
#include "soundTest.h"


soundTest::soundTest()
{
}


soundTest::~soundTest()
{
}

// 鎧析 拝 依
// 軒什闘 刊牽檎 仙持 == 
// 巴傾戚 遁綜 姥歳 == 
// 偲巴 == 
// 瑳拳 繕箭 ==
// 覗稽益掘什郊(瑳拳, 獣娃) ==
// 薄仙 獣娃 / 害精 獣娃 窒径 ==
// 獣娃郊 適遣 獣 背雁 走繊生稽 戚疑 == 
// 廃 溢 仙持 魁蟹檎 陥製 溢 切疑 仙持 == 

// gitDesktop Test
// test

HRESULT soundTest::init()
{
	/*
	// 葛掘 蓄亜
	SOUNDMANAGER->addSound("湛 匝", "resources/mp3/湛 匝 - 重遂仙.mp3", true, false);
	SOUNDMANAGER->addSound("酔軒 紫櫛廃 疑照", "resources/mp3/酔軒 紫櫛廃 疑照 - 績廃紺.mp3", true, false);
	SOUNDMANAGER->addSound("廃食硯鴻税 蝦", "resources/mp3/廃食硯鴻税 蝦 - SanE.mp3", true, false);
	SOUNDMANAGER->addSound("Ado", "resources/mp3/Ado - Raon Lee.mp3", true, false);
	SOUNDMANAGER->addSound("butter", "resources/mp3/Butter - Raon Lee.mp3", true, false);

	// 覗稽益掘郊 戚耕走
	IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("volumeFront", "resources/bmp/volumeBarFront.bmp", 381, 4, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("timeBack", "resources/bmp/playTimeBarBack.bmp", 446, 3, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("timeTop", "resources/bmp/playTimeBarFront.bmp", 446, 3, true, RGB(255, 0, 255));

	// 葛掘 戚硯
	_music[0] = "湛 匝";
	_music[1] = "酔軒 紫櫛廃 疑照";
	_music[2] = "廃食硯鴻税 蝦";
	_music[3] = "Ado";
	_music[4] = "butter";

	// index
	_listNum = 0;
	_nextNum = _listNum + 1;
	_lastNum = 4;

	// bool痕呪
	_isShuffle = false;
	_isPlay = false;
	_isLoop = false;

	// 獣娃
	_totalTime = SOUNDMANAGER->getTotalTime(_music[_listNum]);
	_currentTime = 0.f;

	// 瑳拳
	_volume = 1.0f;

	// 戚耕走 貢 刑闘 竺舛
	setImage();
	makeRect();

	// 覗稽益掘什郊
	_volumeBar = new progressBar;
	_volumeBar->init(100, 810, 381, 4, "volumeBack", "volumeFront");
	_timeBar = new progressBar;
	_timeBar->init(65, 600, 446, 3, "timeBack", "timeTop");

	//ししししししし 製据 ししししししし//
	//*{
	*/

#pragma region SFXPATH

	//巴傾戚嬢 製据 井稽
	//Resource/SFX/Player/

	//発井// 什砺戚走 井稽
	//Resource/SFX/environment

	//左什 反引製? 井稽
	//Resource/SFX/global
	//左什 適軒嬢
	SOUNDMANAGER->addSound("bossFinal", "Resource/SFX/global/boss_finalhit.wav", true, true);
	//左什 獣拙
	SOUNDMANAGER->addSound("bossIntro", "Resource/SFX/global/boss_intro_placard", true, true);
	//五敢製据
	//Resource/SFX/menu/

	//巷奄製据
	//Resource/SFX/weapons/

	//掃澗 波穣製据
	//Resource/SFX/pickup/
	//柔究 災亜
	SOUNDMANAGER->addSound("cannot", "Resource/SFX/pickup/cannot_pickup.wav", true, true);
	//??
	SOUNDMANAGER->addSound("confirm", "Resource/SFX/pickup/interface_item_pickup_confirm.wav", true, true);
	//亀穿 引薦 焼戚奴 塙究
	SOUNDMANAGER->addSound("intro", "Resource/SFX/pickup/interface_item_pickup_intro.wav", true, true);
	//塙究
	SOUNDMANAGER->addSound("outro", "Resource/SFX/pickup/interface_item_pickup_outro.wav", true, true);
	//短姥辞 柔究
	SOUNDMANAGER->addSound("bill", "Resource/SFX/pickup/pickup_bill.wav", true, true);
	//??
	SOUNDMANAGER->addSound("cat1", "Resource/SFX/pickup/pickup_cat_01.wav", true, true);
	//??
	SOUNDMANAGER->addSound("cat2", "Resource/SFX/pickup/pickup_cat_02.wav", true, true);
	//??
	SOUNDMANAGER->addSound("cat3", "Resource/SFX/pickup/pickup_cat_03.wav", true, true);
	//袴艦 柔究
	SOUNDMANAGER->addSound("coin", "Resource/SFX/pickup/pickup_coin.wav", true, true);
	//製縦 柔究
	SOUNDMANAGER->addSound("food", "Resource/SFX/pickup/pickup_food.wav", true, true);
	//鉦 柔究
	SOUNDMANAGER->addSound("med", "Resource/SFX/pickup/pickup_med_01.wav", true, true);
	//}*/

	return S_OK;
}

void soundTest::release()
{
}

void soundTest::update()
{
	/*
	// 獄動 適遣
	collision();
	
	// 雌伐拭 魚虞 獄動 痕井(play / stop)
	changeButton();

	// 刑闘 仙竺舛
	makeRect();

	// 瑳拳 竺舛
	setVolume();

	// 陥製 葛掘 切疑 仙持
	nextMusic();

	_volumeBar->update();
	_timeBar->update();
	_timeBar->setGauge(_currentTime, _totalTime);

	_totalTime = SOUNDMANAGER->getTotalTime(_music[_listNum]);
	SOUNDMANAGER->setVolume(_music[_listNum], _volume);
	if (_isPlay) _currentTime = SOUNDMANAGER->getCurrentTime(_music[_listNum]);
	*/
}

void soundTest::render()
{
	/*
	_volumeBar->render();
	_timeBar->render();
	renderImage();

	char str[128];

	// 越切 壕井 肢薦
	SetBkMode(getMemDC(), TRANSPARENT);

	SetTextColor(getMemDC(), RGB(150, 150, 150));

	// 製焦 恥 掩戚
	wsprintf(str, "%d:%02d", (_totalTime / 1000) / 60, (_totalTime / 1000) % 60);
	TextOut(getMemDC(), 485, 610, str, strlen(str));

	// 製焦 薄仙 掩戚
	wsprintf(str, "%d:%02d", _currentTime / 1000 / 60, _currentTime / 1000 % 60);
	TextOut(getMemDC(), 65, 610, str, strlen(str));

	// 巨獄焔
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
	*/
}
/*
void soundTest::setImage()
{
	IMAGEMANAGER->addImage("壕井", "resources/bmp/background.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	_album[0] = IMAGEMANAGER->addImage("湛 匝", "resources/bmp/湛 匝 訟骨.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[0], 110, 90);
	_album[1] = IMAGEMANAGER->addImage("酔軒 紫櫛廃 疑照", "resources/bmp/酔軒 紫櫛廃 疑照 訟骨.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[1], 110, 90);
	_album[2] = IMAGEMANAGER->addImage("廃食硯鴻税 蝦", "resources/bmp/廃食硯鴻税 蝦 訟骨.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[2], 110, 90);
	_album[3] = IMAGEMANAGER->addImage("odo", "resources/bmp/odo 訟骨.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[3], 110, 90);
	_album[4] = IMAGEMANAGER->addImage("butter", "resources/bmp/butter 訟骨.bmp", 358, 358, true, RGB(255, 0, 255));
	setXY(_album[4], 110, 90);

	_button[0].img = IMAGEMANAGER->addImage("匂昔斗", "resources/bmp/pointer.bmp", 28, 28, true, RGB(255, 0, 255));
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

	_button[9].img = IMAGEMANAGER->addImage("湛 匝 軒什闘", "resources/bmp/湛 匝.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[9].img, 615, 115);
	_button[10].img = IMAGEMANAGER->addImage("酔軒 紫櫛廃 疑照 軒什闘", "resources/bmp/酔軒 紫櫛廃 疑照.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[10].img, 615, 180);
	_button[11].img = IMAGEMANAGER->addImage("廃食硯鴻税 蝦 軒什闘", "resources/bmp/廃食硯鴻税 蝦.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[11].img, 615, 245);
	_button[12].img = IMAGEMANAGER->addImage("odo 軒什闘", "resources/bmp/Odo.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[12].img, 615, 310);
	_button[13].img = IMAGEMANAGER->addImage("butter 軒什闘", "resources/bmp/butter.bmp", 614, 64, true, RGB(255, 0, 255));
	setXY(_button[13].img, 615, 375);
}

void soundTest::renderImage()
{
	// play & pause 獄動
	if (!_isPlay) IMAGEMANAGER->render("play", getMemDC(), _button[1].img->getX(), _button[1].img->getY());
	else if (_isPlay) IMAGEMANAGER->render("pause", getMemDC(), _button[2].img->getX(), _button[2].img->getY());

	// 陥製 溢 / 戚穿 溢
	IMAGEMANAGER->render("next", getMemDC(), 375, 700);
	IMAGEMANAGER->render("back", getMemDC(), 145, 700);

	// 偲巴 獄動
	if (!_isShuffle) IMAGEMANAGER->render("shuffleOff", getMemDC(), 65, 710);
	else IMAGEMANAGER->render("shuffleOn", getMemDC(), 65, 710);
	
	// 鋼差 獄動
	if (!_isLoop) IMAGEMANAGER->render("loopOff", getMemDC(), 475, 710);
	else IMAGEMANAGER->render("loopOn", getMemDC(), 475, 710);

	// 溢 鯉系
	IMAGEMANAGER->render("湛 匝 軒什闘", getMemDC(), 615, 115);
	IMAGEMANAGER->render("酔軒 紫櫛廃 疑照 軒什闘", getMemDC(), 615, 180);
	IMAGEMANAGER->render("廃食硯鴻税 蝦 軒什闘", getMemDC(), 615, 245);
	IMAGEMANAGER->render("odo 軒什闘", getMemDC(), 615, 310);
	IMAGEMANAGER->render("butter 軒什闘", getMemDC(), 615, 375);

	// 瑳拳 繕箭 匂昔斗
	IMAGEMANAGER->render("匂昔斗", getMemDC(), _button[0].img->getX(), _button[0].img->getY());

	// 訟骨 紫遭 痕井
	ChangeAlbum();
}

void soundTest::makeRect()
{
	for (int i = 0; i < BUTTONMAX; ++i)
	{
		_button[i].rc = RectMake(_button[i].img->getX(), _button[i].img->getY(), _button[i].img->getWidth(), _button[i].img->getHeight());
	}
}

// 原酔什 適遣
void soundTest::collision()
{
	//setTime();
	if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
	{
		Play();				// 仙持
		Pause();			// 析獣舛走
		Next();				// 陥製 溢
		Back();				// 戚穿 溢

		Shuffle();			// 偲巴
		Loop();				// 鋼差

		selectMusic();		// 葛掘 鯉系 適遣
		setTime();			// currentTime, totalTime
	}
}

// 葛掘 鯉系 適遣
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

// 戚耕走 X, Y葵 竺舛
void soundTest::setXY(image* img, float x, float y)
{
	img->setX(x);
	img->setY(y);
}

// 仙持
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

// 析獣 舛走
void soundTest::Pause()
{
	// Pause
	if (PtInRect(&_button[2].rc, _ptMouse))
	{
		SOUNDMANAGER->pause(_music[_listNum]);
		_isPlay = false;
	}
}

// 陥製 溢
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

// 戚穿 溢
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

// 巷拙是 仙持 食採
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

// 鋼差 仙持 食採
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

// 瑳拳 竺舛
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

// 獣娃 覗稽益掘什郊 適遣
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

// 訟骨 紫遭 痕井
void soundTest::ChangeAlbum()
{
	switch (_listNum)
	{
	case 湛匝:
		IMAGEMANAGER->render("湛 匝", getMemDC(), _album[0]->getX(), _album[0]->getY());
		break;
	case 酔軒紫櫛廃疑照:
		IMAGEMANAGER->render("酔軒 紫櫛廃 疑照", getMemDC(), _album[1]->getX(), _album[1]->getY());
		break;
	case 廃食硯鴻税蝦:
		IMAGEMANAGER->render("廃食硯鴻税 蝦", getMemDC(), _album[2]->getX(), _album[2]->getY());
		break;
	case 神亀:
		IMAGEMANAGER->render("odo", getMemDC(), _album[3]->getX(), _album[3]->getY());
		break;
	case 獄斗:
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
// 薄仙 葛掘亜 魁蟹檎 陥製 葛掘 切疑 仙持
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
*/
