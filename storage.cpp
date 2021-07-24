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
#pragma region WEAPONS

	//巷奄 展維製

	SOUNDMANAGER->addSound("醤姥号諺戚1",		"Resource/SFX/weapons/weapon_baseball_bat_hit.wav", true, false);			//醤姥号諺戚  逆
	SOUNDMANAGER->addSound("醤姥号諺戚2",		"Resource/SFX/weapons/weapon_baseball_impact.wav", true, false);			//醤姥号諺戚2 店 
	
	SOUNDMANAGER->addSound("坤帖1",				"Resource/SFX/weapons/weapon_bench_break.wav", true, false);				//坤帖 採偲走澗社軒
	SOUNDMANAGER->addSound("坤帖2",				"Resource/SFX/weapons/weapon_bench_impact.wav", true, false);				//坤帖 績苫闘
	
	SOUNDMANAGER->addSound("切穿暗1",			"Resource/SFX/weapons/weapon_bicycle_impact.wav", true, false);				//切穿暗
	SOUNDMANAGER->addSound("採五櫛",				"Resource/SFX/weapons/weapon_boomerang_throw.wav", true, false);			//採五櫛
	SOUNDMANAGER->addSound("端昔",				"Resource/SFX/weapons/weapon_chain_swing.wav", true, false);				//端昔
	SOUNDMANAGER->addSound("杷姥因",				"Resource/SFX/weapons/weapon_dodgeball_impact.wav", true, false);			//杷姥因
	SOUNDMANAGER->addSound("弘壱奄1",			"Resource/SFX/weapons/weapon_fish_explode.wav", true, false);				//弘壱奄1
	SOUNDMANAGER->addSound("弘壱奄2",			"Resource/SFX/weapons/weapon_fish_impact.wav", true, false);				//弘壱奄2
	SOUNDMANAGER->addSound("覗虞戚謎",			"Resource/SFX/weapons/weapon_frying_pan_impact2.wav", true, false);			//覗虞戚謎
	
	SOUNDMANAGER->addSound("奄展1",				"Resource/SFX/weapons/weapon_guitar_impact_01.wav", true, false);			//奄展1
	SOUNDMANAGER->addSound("奄展2",				"Resource/SFX/weapons/weapon_guitar_impact_02.wav", true, false);			//奄展2
	SOUNDMANAGER->addSound("奄展3",				"Resource/SFX/weapons/weapon_guitar_impact_03.wav", true, false);			//奄展3
	SOUNDMANAGER->addSound("奄展4",				"Resource/SFX/weapons/weapon_guitar_impact_04.wav", true, false);			//奄展4
	
	SOUNDMANAGER->addSound("虞戚闘室戚獄1",		"Resource/SFX/weapons/weapon_light_saber_impact_01.wav", true, false);		//虞戚闘室戚獄1
	SOUNDMANAGER->addSound("虞戚闘室戚獄2",		"Resource/SFX/weapons/weapon_light_saber_impact_02.wav", true, false);		//虞戚闘室戚獄2
	SOUNDMANAGER->addSound("虞戚闘室戚獄3",		"Resource/SFX/weapons/weapon_light_saber_impact_03.wav", true, false);		//虞戚闘室戚獄3
	
	SOUNDMANAGER->addSound("虞戚闘室戚獄什成1",	"Resource/SFX/weapons/weapon_light_saber_swing_01.wav", true, false);		//虞戚闘室戚獄什成1
	SOUNDMANAGER->addSound("虞戚闘室戚獄什成2",	"Resource/SFX/weapons/weapon_light_saber_swing_02.wav", true, false);		//虞戚闘室戚獄什成2
	SOUNDMANAGER->addSound("虞戚闘室戚獄什成3",	"Resource/SFX/weapons/weapon_light_saber_swing_03.wav", true, false);		//虞戚闘室戚獄什成3
	SOUNDMANAGER->addSound("虞戚闘室戚獄什成4",	"Resource/SFX/weapons/weapon_light_saber_swing_04.wav", true, false);		//虞戚闘室戚獄什成4

	SOUNDMANAGER->addSound("榎紗税切",			"Resource/SFX/weapons/weapon_metal_chair_impact.wav", true, false);			//榎紗税切
	SOUNDMANAGER->addSound("諮",					"Resource/SFX/weapons/weapon_shovel_impact.wav", true, false);				//諮
	SOUNDMANAGER->addSound("紺走椴戚",			"Resource/SFX/weapons/weapon_star_baton_impact.wav", true, false);			//紺走椴戚
	SOUNDMANAGER->addSound("蟹巷毒切",			"Resource/SFX/weapons/weapon_wood_plank_impact.wav", true, false);			//蟹巷毒切
	SOUNDMANAGER->addSound("兄帖",				"Resource/SFX/weapons/weapon_wrench_impact.wav", true, false);				//兄帖

#pragma endregion WEAPONS

#pragma endregion SFXPATH

	//========================戚耕走 社什======================
#pragma region IMAGESOURCES

//巴傾戚嬢 戚耕走
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma region ENEMYIMAGE


#pragma region SCHOOLBOYIMAGE 

	//IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255)); 森獣

	//SCHOOLBOYIMAGE

	IMAGEMANAGER->addFrameImage("backdown", "Resource/IMG/character/enemy/scoolBoy/backdown.bmp", 7695, 438, 27, 2, true, RGB(255, 0, 255));		//角嬢然聖凶
	IMAGEMANAGER->addFrameImage("begging", "Resource/IMG/character/enemy/scoolBoy/begging.bmp", 216, 354, 2, 2, true, RGB(255, 0, 255));			//牌差
	IMAGEMANAGER->addFrameImage("block", "Resource/IMG/character/enemy/scoolBoy/block.bmp", 459, 438, 3, 2, true, RGB(255, 0, 255));				//厳奄
	IMAGEMANAGER->addFrameImage("ComboAttack1", "Resource/IMG/character/enemy/scoolBoy/ComboAttack1.bmp", 2352, 426, 7, 2, true, RGB(255, 0, 255));	//因維1
	IMAGEMANAGER->addFrameImage("ComboAttack2", "Resource/IMG/character/enemy/scoolBoy/ComboAttack2.bmp", 1757, 444, 7, 2, true, RGB(255, 0, 255));	//因維2
	IMAGEMANAGER->addFrameImage("ComboAttack3", "Resource/IMG/character/enemy/scoolBoy/ComboAttack3.bmp", 1890, 558, 9, 2, true, RGB(255, 0, 255));	//因維3
	IMAGEMANAGER->addFrameImage("gethit", "Resource/IMG/character/enemy/scoolBoy/gethit.bmp", 1728, 450, 9, 2, true, RGB(255, 0, 255));				//限澗 疑拙
	IMAGEMANAGER->addFrameImage("HeldHit", "Resource/IMG/character/enemy/scoolBoy/HeldHit.bmp", 576, 372, 3, 2, true, RGB(255, 0, 255));			//説備壱 限澗 疑拙
	IMAGEMANAGER->addFrameImage("HeldRelease", "Resource/IMG/character/enemy/scoolBoy/HeldRelease.bmp", 660, 480, 4, 2, true, RGB(255, 0, 255));	//説備壱 葱 疑拙
	IMAGEMANAGER->addFrameImage("idle", "Resource/IMG/character/enemy/scoolBoy/idle.bmp", 1224, 432, 8, 2, true, RGB(255, 0, 255));					//奄沙
	IMAGEMANAGER->addFrameImage("jump", "Resource/IMG/character/enemy/scoolBoy/jump.bmp", 423, 486, 3, 2, true, RGB(255, 0, 255));					//繊覗
	IMAGEMANAGER->addFrameImage("jumpAttack", "Resource/IMG/character/enemy/scoolBoy/jumpAttack.bmp", 1224, 468, 6, 2, true, RGB(255, 0, 255));		//繊覗 因維
	IMAGEMANAGER->addFrameImage("ladder", "Resource/IMG/character/enemy/scoolBoy/ladder.bmp", 738, 264, 6, 1, true, RGB(255, 0, 255));				//奄嬢臣虞亜澗疑拙
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/character/enemy/scoolBoy/run.bmp", 1920, 390, 10, 2, true, RGB(255, 0, 255));					//含軒奄
	IMAGEMANAGER->addFrameImage("Stun", "Resource/IMG/character/enemy/scoolBoy/Stun.bmp", 633, 408, 4, 2, true, RGB(255, 0, 255));					//什渡
	IMAGEMANAGER->addFrameImage("transition", "Resource/IMG/character/enemy/scoolBoy/transition.bmp", 405, 183, 3, 1, true, RGB(255, 0, 255));		//奄嬢臣虞紳 板
	IMAGEMANAGER->addFrameImage("upercut", "Resource/IMG/character/enemy/scoolBoy/upercut.bmp", 1386, 502, 7, 2, true, RGB(255, 0, 255));			//嬢遁墜
	IMAGEMANAGER->addFrameImage("Walk", "Resource/IMG/character/enemy/scoolBoy/Walk.bmp", 1620, 444, 12, 2, true, RGB(255, 0, 255));				//鞍奄
	IMAGEMANAGER->addFrameImage("WAttack", "Resource/IMG/character/enemy/scoolBoy/WAttack.bmp", 1830, 660, 5, 2, true, RGB(255, 0, 255));			//巷奄 番却奄
	IMAGEMANAGER->addFrameImage("weapon_swing", "Resource/IMG/character/enemy/scoolBoy/weapon_swing.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));//巷奄 限澗 疑拙
	IMAGEMANAGER->addFrameImage("weaponHit", "Resource/IMG/character/enemy/scoolBoy/weaponHit.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));		//巷奄 限精 疑拙
	IMAGEMANAGER->addFrameImage("WIdle", "Resource/IMG/character/enemy/scoolBoy/WIdle.bmp", 1224, 552, 8, 2, true, RGB(255, 0, 255));				//巷奄 窮 雌殿
	IMAGEMANAGER->addFrameImage("WJump", "Resource/IMG/character/enemy/scoolBoy/WJump.bmp", 432, 468, 3, 2, true, RGB(255, 0, 255));				//巷奄 繊覗
	IMAGEMANAGER->addFrameImage("WRun", "Resource/IMG/character/enemy/scoolBoy/WRun.bmp", 2250, 516, 10, 2, true, RGB(255, 0, 255));				//巷奄 訓
	IMAGEMANAGER->addFrameImage("WThrow", "Resource/IMG/character/enemy/scoolBoy/WThrow.bmp", 1752, 564, 8, 2, true, RGB(255, 0, 255));				//巷奄 揮走奄
	IMAGEMANAGER->addFrameImage("WWalk", "Resource/IMG/character/enemy/scoolBoy/WWalk.bmp", 1572, 556, 12, 2, true, RGB(255, 0, 255));				//巷奄 級壱 鞍奄



	//Resource/IMG/character/enemy/

#pragma endregion SCHOOLBOYIMAGE

#pragma region SCHOOLGIRL

	//SCHOOLGIRLIMAGE

	IMAGEMANAGER->addFrameImage("attack1", "Resource/IMG/character/enemy/schoolGirl/attack1.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));				//嬢澱1 赤澗戚政亜? 
	IMAGEMANAGER->addFrameImage("backdown", "Resource/IMG/character/enemy/schoolGirl/backdown.bmp", 6939, 376, 27, 2, true, RGB(255, 0, 255));			//角嬢然陥 析嬢害
	IMAGEMANAGER->addFrameImage("begging", "Resource/IMG/character/enemy/schoolGirl/begging.bmp", 378, 336, 3, 2, true, RGB(255, 0, 255));				//牌差
	IMAGEMANAGER->addFrameImage("block", "Resource/IMG/character/enemy/schoolGirl/block.bmp", 351, 338, 3, 2, true, RGB(255, 0, 255));					//厳奄
	IMAGEMANAGER->addFrameImage("comboAttack1", "Resource/IMG/character/enemy/schoolGirl/comboAttack1.bmp", 1239, 354, 7, 2, true, RGB(255, 0, 255));	//爪左 嬢澱1
	IMAGEMANAGER->addFrameImage("comboAttack2", "Resource/IMG/character/enemy/schoolGirl/comboAttack2.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));	//爪左 嬢澱2
	IMAGEMANAGER->addFrameImage("comboAttack3", "Resource/IMG/character/enemy/schoolGirl/comboAttack3.bmp", 2412, 414, 12, 2, true, RGB(255, 0, 255));	//爪左 嬢澱3
	IMAGEMANAGER->addFrameImage("gethit", "Resource/IMG/character/enemy/schoolGirl/gethit.bmp", 1431, 360, 9, 2, true, RGB(255, 0, 255));				//杷維雁敗
	IMAGEMANAGER->addFrameImage("HeldHit", "Resource/IMG/character/enemy/schoolGirl/HeldHit.bmp", 576, 336, 4, 2, true, RGB(255, 0, 255));				//説微板 杷維雁敗
	IMAGEMANAGER->addFrameImage("HeldRelease", "Resource/IMG/character/enemy/schoolGirl/HeldRelease.bmp", 528, 360, 4, 2, true, RGB(255, 0, 255));		//説微暗 背薦
	IMAGEMANAGER->addFrameImage("idle", "Resource/IMG/character/enemy/schoolGirl/idle.bmp", 1170, 354, 10, 2, true, RGB(255, 0, 255));					//奄沙
	IMAGEMANAGER->addFrameImage("jump", "Resource/IMG/character/enemy/schoolGirl/jump.bmp", 342, 366, 3, 2, true, RGB(255, 0, 255));					//繊覗
	IMAGEMANAGER->addFrameImage("jumpAttack", "Resource/IMG/character/enemy/schoolGirl/jumpAttack.bmp", 1197, 354, 7, 2, true, RGB(255, 0, 255));		//繊覗 因維
	IMAGEMANAGER->addFrameImage("ladder", "Resource/IMG/character/enemy/schoolGirl/ladder.bmp", 594, 219, 6, 1, true, RGB(255, 0, 255));				//奄嬢臣虞亜奄
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/character/enemy/schoolGirl/run.bmp", 1470, 330, 10, 2, true, RGB(255, 0, 255));					//含軒奄
	IMAGEMANAGER->addFrameImage("stun", "Resource/IMG/character/enemy/schoolGirl/stun.bmp", 456, 324, 4, 2, true, RGB(255, 0, 255));					//什渡
	IMAGEMANAGER->addFrameImage("transition", "Resource/IMG/character/enemy/schoolGirl/transition.bmp", 387, 168, 3, 1, true, RGB(255, 0, 255));		//奄嬢臣虞 紳 板
	IMAGEMANAGER->addFrameImage("walk", "Resource/IMG/character/enemy/schoolGirl/walk.bmp", 1296, 372, 12, 2, true, RGB(255, 0, 255));					//鞍奄
	IMAGEMANAGER->addFrameImage("WAttack", "Resource/IMG/character/enemy/schoolGirl/WAttack.bmp", 1580, 558, 5, 2, true, RGB(255, 0, 255));				//巷奄 嬢澱
	IMAGEMANAGER->addFrameImage("weapon_swing", "Resource/IMG/character/enemy/schoolGirl/weapon_swing.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));	//巷奄 什成 杷維雁拝獣
	IMAGEMANAGER->addFrameImage("weaponHit", "Resource/IMG/character/enemy/schoolGirl/weaponHit.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));		//巷奄 杷維雁拝獣
	IMAGEMANAGER->addFrameImage("WIdle", "Resource/IMG/character/enemy/schoolGirl/WIdle.bmp", 1950, 408, 10, 2, true, RGB(255, 0, 255));				//巷奄 奄沙
	IMAGEMANAGER->addFrameImage("WJump", "Resource/IMG/character/enemy/schoolGirl/WJump.bmp", 429, 450, 3, 2, true, RGB(255, 0, 255));					//巷奄 繊覗
	IMAGEMANAGER->addFrameImage("WRun", "Resource/IMG/character/enemy/schoolGirl/WRun.bmp", 1880, 458, 10, 2, true, RGB(255, 0, 255));					//巷奄 含軒奄
	IMAGEMANAGER->addFrameImage("WThrow", "Resource/IMG/character/enemy/schoolGirl/WThrow.bmp", 1488, 540, 8, 2, true, RGB(255, 0, 255));				//巷奄 揮走奄
	IMAGEMANAGER->addFrameImage("WWalk", "Resource/IMG/character/enemy/schoolGirl/WWalk.bmp", 2232, 502, 12, 2, true, RGB(255, 0, 255));				//巷奄 鞍奄
	
#pragma endregion SCHOOLGIRL

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
