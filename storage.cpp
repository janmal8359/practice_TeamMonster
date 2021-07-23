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
