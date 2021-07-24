#include "pch.h"
#include "storage.h"

storage::storage()
{
}

storage::~storage()
{
}

HRESULT storage::init()
{
#pragma region IMGPATH

	//ししししししし 爽推 昔弘 ししししししし//
	/*{

	//巴傾戚嬢 戚耕走 井稽
	//Resource/IMG/character/player/imageName.bmp

	//旋浦 戚耕走 井稽
	//Resource/IMG/character/enemy/

	//NPC 戚耕走 井稽
	//Resource/IMG/character/npc/

	}*/

	//ししししししし 反引  ししししししし//
	/*{

	//反引
	//Resource/IMG/effect

	}*/



	//ししししししし 焼戚奴 & 神崎詮闘 ししししししし//
	/*{
	*
	//焼戚奴
	//Resource/IMG/item

	//神崎詮闘
	//Resource/IMG/object

	}*/


	//ししししししし 什砺戚走 & UI ししししししし//
	/*{

	//什砺戚走
	//Resource/IMG/stage

	//UI
	//Resource/IMG/ui
	
		//左什 HP 及
		IMAGEMANAGER->addImage("bossHPBack", "Resource/IMG/ui/battle/boss_HP_back.bmp", 689, 120, true, RGB(255, 0, 255));

		//左什 HP 覗傾績
		IMAGEMANAGER->addImage("bossHPFrame", "Resource/IMG/ui/battle/boss_HP_frame.bmp", 898, 120, true, RGB(255, 0, 255));

		//左什 HP 蒋
		IMAGEMANAGER->addImage("bossHPFront", "Resource/IMG/ui/battle/boss_HP_front.bmp", 689, 120, true, RGB(255, 0, 255));

		//坪昔
		IMAGEMANAGER->addImage("coin", "Resource/IMG/ui/battle/coin.bmp", 36, 36, true, RGB(255, 0, 255));

		//HP 廃牒
		IMAGEMANAGER->addImage("HP", "Resource/IMG/ui/battle/HP_Point.bmp", 25, 23, true, RGB(255, 0, 255));

		//什砺戚走 鉢檎 喰 焼掘
		IMAGEMANAGER->addImage("stageChainBottom", "Resource/IMG/ui/battle/Stage_UI_Chain_Bottom.bmp", 1600, 43, true, RGB(255, 0, 255));

		//什砺戚走 鉢檎 喰 図楕
		IMAGEMANAGER->addImage("stageChainLeft", "Resource/IMG/ui/battle/Stage_UI_Chain_Left.bmp", 42, 900, true, RGB(255, 0, 255));

		//什砺戚走 鉢檎 喰 神献楕
		IMAGEMANAGER->addImage("stageChainRight", "Resource/IMG/ui/battle/Stage_UI_Chain_Right.bmp", 41, 900, true, RGB(255, 0, 255));

		//什砺戚走 鉢檎 喰 是
		IMAGEMANAGER->addImage("stageChainTop", "Resource/IMG/ui/battle/Stage_UI_Chain_Top.bmp", 1600, 43, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取
		IMAGEMANAGER->addImage("lockAppear", "Resource/IMG/ui/battle/Stage_UI_Lock_Appear.bmp", 650, 116, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取 凹像
		IMAGEMANAGER->addImage("lockDamage1", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage1.bmp", 650, 116, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取 希 凹像
		IMAGEMANAGER->addImage("lockDamage2", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage2.bmp", 650, 116, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取 遭促 凹像
		IMAGEMANAGER->addImage("lockDisappear", "Resource/IMG/ui/battle/Stage_UI_Lock_Disappear.bmp", 840, 130, true, RGB(255, 0, 255));

		//馬闘 UI <- 惟績 神獄菊聖 凶 蟹神澗暗 旭精汽,.
		IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_heart.bmp", 6400, 3600, true, RGB(255, 0, 255));

		//蝶遣斗
		IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_Kyoko_Portrait.bmp", 6400, 3600, true, RGB(255, 0, 255));
	}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//ししししししし 製据 ししししししし//
	/*{

	//巴傾戚嬢 製据 井稽
	//Resource/SFX/Player/

	//発井// 什砺戚走 井稽
	//Resource/SFX/environment

	//左什 反引製? 井稽
	//Resource/SFX/global

	//五敢製据
	//Resource/SFX/menu/

	//巷奄製据
	//Resource/SFX/weapons/

	//掃澗 波穣製据
	//Resource/SFX/pickup/

	}*/

#pragma endregion SFXPATH

	//========================戚耕走 社什======================
#pragma region IMAGESOURCES

//巴傾戚嬢 戚耕走
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma region ENEMYIMAGE

#pragma endregion ENEMYIMAGE

#pragma endregion IMAGESOURCES





	  /////////////////紫錘球 社什///////////////
#pragma region SFXSOURCE
//巴傾戚嬢 紫錘球
#pragma region PLAYERSFX



#pragma endregion PLAYERSFX


#pragma endregion SFXSOURCE




	return S_OK;
}
