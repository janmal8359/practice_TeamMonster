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
	//壕井
	IMAGEMANAGER->addImage("STAGE_backGround", "resources/IMG/stage/backGround.bmp", 1280, 964, true, RGB(255, 0, 255));
	//旋(督空事)
	IMAGEMANAGER->addFrameImage("ENEMY_enemy1", "Resources/IMG/character/enemy/enemy1.bmp", 128, 128, 2, 2, true, RGB(255, 0, 255));
	//旋(避事)
	IMAGEMANAGER->addFrameImage("ENEMY_enemy2", "Resources/IMG/character/enemy/enemy2.bmp", 128, 128, 2, 2, true, RGB(255, 0, 255));
	//旋(褐事)
	IMAGEMANAGER->addFrameImage("ENEMY_enemy3", "Resources/IMG/character/enemy/enemy3.bmp", 128, 128, 2, 2, true, RGB(255, 0, 255));
	//轟
	IMAGEMANAGER->addFrameImage("ENEMY_snake", "Resources/IMG/character/enemy/snake.bmp", 144, 128, 2, 2, true, RGB(255, 0, 255));


	IMAGEMANAGER->addImage("BG", "bgf.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("thorn", "thorn.bmp", 25, 25, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("life", "life.bmp", 50, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("fruit", "fruit.bmp", 50, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("ladder", "ladder.bmp", 38, 173, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("randomItem", "randomItem.bmp", 50, 50, true, RGB(255, 0, 255));


//#pragma region IMGPATH

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

//#pragma endregion IMGPATH

//#pragma region SFXPATH

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
//#pragma region WEAPONS
//
//	//巷奄 展維製
//
//	SOUNDMANAGER->addSound("WEAPONS_bassball1_bat",		"Resource/SFX/weapons/weapon_baseball_bat_hit.wav", true, false);			//醤姥号諺戚  逆
//	SOUNDMANAGER->addSound("WEAPONS_bassball2_bat",		"Resource/SFX/weapons/weapon_baseball_impact.wav", true, false);			//醤姥号諺戚2 店 
//	
//	SOUNDMANAGER->addSound("WEAPONS_bench1",			"Resource/SFX/weapons/weapon_bench_break.wav", true, false);				//坤帖 採偲走澗社軒
//	SOUNDMANAGER->addSound("WEAPONS_bench2",			"Resource/SFX/weapons/weapon_bench_impact.wav", true, false);				//坤帖 績苫闘
//	
//	SOUNDMANAGER->addSound("WEAPONS_bicycle",			"Resource/SFX/weapons/weapon_bicycle_impact.wav", true, false);				//切穿暗
//	SOUNDMANAGER->addSound("WEAPONS_boomerang",			"Resource/SFX/weapons/weapon_boomerang_throw.wav", true, false);			//採五櫛
//	SOUNDMANAGER->addSound("WEAPONS_chain",				"Resource/SFX/weapons/weapon_chain_swing.wav", true, false);				//端昔
//	SOUNDMANAGER->addSound("WEAPONS_dodgeball",			"Resource/SFX/weapons/weapon_dodgeball_impact.wav", true, false);			//杷姥因
//	SOUNDMANAGER->addSound("WEAPONS_fish1",				"Resource/SFX/weapons/weapon_fish_explode.wav", true, false);				//弘壱奄1
//	SOUNDMANAGER->addSound("WEAPONS_fish2",				"Resource/SFX/weapons/weapon_fish_impact.wav", true, false);				//弘壱奄2
//	SOUNDMANAGER->addSound("WEAPONS_frying_pan",		"Resource/SFX/weapons/weapon_frying_pan_impact2.wav", true, false);			//覗虞戚謎
//	
//	SOUNDMANAGER->addSound("WEAPONS_guitar1",			"Resource/SFX/weapons/weapon_guitar_impact_01.wav", true, false);			//奄展1
//	SOUNDMANAGER->addSound("WEAPONS_guitar2",			"Resource/SFX/weapons/weapon_guitar_impact_02.wav", true, false);			//奄展2
//	SOUNDMANAGER->addSound("WEAPONS_guitar3",			"Resource/SFX/weapons/weapon_guitar_impact_03.wav", true, false);			//奄展3
//	SOUNDMANAGER->addSound("WEAPONS_guitar4",			"Resource/SFX/weapons/weapon_guitar_impact_04.wav", true, false);			//奄展4
//	
//	SOUNDMANAGER->addSound("WEAPONS_lightSaber1",		"Resource/SFX/weapons/weapon_light_saber_impact_01.wav", true, false);		//虞戚闘室戚獄1
//	SOUNDMANAGER->addSound("WEAPONS_lightSaber2",		"Resource/SFX/weapons/weapon_light_saber_impact_02.wav", true, false);		//虞戚闘室戚獄2
//	SOUNDMANAGER->addSound("WEAPONS_lightSaber3",		"Resource/SFX/weapons/weapon_light_saber_impact_03.wav", true, false);		//虞戚闘室戚獄3
//	
//	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing1",	"Resource/SFX/weapons/weapon_light_saber_swing_01.wav", true, false);		//虞戚闘室戚獄什成1
//	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing2",	"Resource/SFX/weapons/weapon_light_saber_swing_02.wav", true, false);		//虞戚闘室戚獄什成2
//	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing3",	"Resource/SFX/weapons/weapon_light_saber_swing_03.wav", true, false);		//虞戚闘室戚獄什成3
//	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing4",	"Resource/SFX/weapons/weapon_light_saber_swing_04.wav", true, false);		//虞戚闘室戚獄什成4
//
//	SOUNDMANAGER->addSound("WEAPONS_chair",				"Resource/SFX/weapons/weapon_metal_chair_impact.wav", true, false);			//榎紗税切
//	SOUNDMANAGER->addSound("WEAPONS_shovel",			"Resource/SFX/weapons/weapon_shovel_impact.wav", true, false);				//諮
//	SOUNDMANAGER->addSound("WEAPONS_starBaton",			"Resource/SFX/weapons/weapon_star_baton_impact.wav", true, false);			//紺走椴戚
//	SOUNDMANAGER->addSound("WEAPONS_woodPlank",			"Resource/SFX/weapons/weapon_wood_plank_impact.wav", true, false);			//蟹巷毒切
//	SOUNDMANAGER->addSound("WEAPONS_wrench",			"Resource/SFX/weapons/weapon_wrench_impact.wav", true, false);				//兄帖
//
//#pragma endregion WEAPONS
//
//	//乞窮 杷維 奄沙 壕井
//	IMAGEMANAGER->addFrameImage("EFFECT_attack", "Resource/IMG/effect/attack.bmp", 612, 196, 3, 1, true, RGB(255, 0, 255));
//
//	
//																																	//乞窮 杷維
//	//IMAGEMANAGER->addFrameImage("attack", "Resource/IMG/effect/attack.bmp", 612, 196, 3, 1, true, RGB(255, 0, 255));
//
//	//蕉格耕 牌差
//	IMAGEMANAGER->addFrameImage("EFFECT_beg", "Resource/IMG/effect/beg.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
//	//巴傾戚嬢 展維
//	IMAGEMANAGER->addFrameImage("EFFECT_blueAttack", "Resource/IMG/effect/blueAttack.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
//	//左什 企獣獣拙繊
//	IMAGEMANAGER->addFrameImage("EFFECT_bossDash", "Resource/IMG/effect/Boss dash.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
//	//巴傾戚嬢 号嬢
//	IMAGEMANAGER->addFrameImage("EFFECT_bossHowling", "Resource/IMG/effect/Boss howling.bmp", 1821, 165, 8, 1, true, RGB(255, 0, 255));
//	//左什 号嬢
//	IMAGEMANAGER->addFrameImage("EFFECT_bossHowling2", "Resource/IMG/effect/Boss howling2.bmp", 416, 208, 2, 1, true, RGB(255, 0, 255));
//	//左什 繊覗 因維 frameY(2)
//	IMAGEMANAGER->addFrameImage("EFFECT_bossMeteor", "Resource/IMG/effect/Boss meteor.bmp", 1620, 640, 4, 2, true, RGB(255, 0, 255));
//	//左什 繊覗 因維
//	IMAGEMANAGER->addFrameImage("EFFECT_bossMeteor2", "Resource/IMG/effect/Boss meteor2.bmp", 2424, 320, 6, 1, true, RGB(255, 0, 255));
//	//左什 虞什闘 凪戚綜
//	IMAGEMANAGER->addFrameImage("EFFECT_bossPhase1", "Resource/IMG/effect/Boss phase1.bmp", 299, 82, 3, 1, true, RGB(255, 0, 255));
//	//左什 趣希嬢澱 杷維
//	IMAGEMANAGER->addFrameImage("EFFECT_bossSmash", "Resource/IMG/effect/Boss smash.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
//	//左什亜 析嬢竺 凶
//	IMAGEMANAGER->addFrameImage("EFFECT_bossStand", "Resource/IMG/effect/Boss stand.bmp", 607, 55, 8, 1, true, RGB(255, 0, 255));
//	//郊韓液伸 1腰
//	IMAGEMANAGER->addFrameImage("EFFECT_bossStand2", "Resource/IMG/effect/Boss stand2.bmp", 3390, 144, 7, 1, true, RGB(255, 0, 255));
//	//奄逆 督雨(繊覗)
//	IMAGEMANAGER->addFrameImage("EFFECT_boss_effect5", "Resource/IMG/effect/boss_effect5.bmp", 800, 90, 7, 1, true, RGB(255, 0, 255));
//	//鉢檎 凹像
//	IMAGEMANAGER->addFrameImage("EFFECT_crush", "Resource/IMG/effect/crush.bmp", 190, 193, 1, 1, true, RGB(255, 0, 255));
//	//奄逆 督雨(趣希)
//	IMAGEMANAGER->addFrameImage("EFFECT_dashAttackEffect", "Resource/IMG/effect/dashAttackEffect.bmp", 400, 45, 7, 1, true, RGB(255, 0, 255));
//	//煽什闘 亜球
//	IMAGEMANAGER->addFrameImage("EFFECT_effecBlue", "Resource/IMG/effect/effec_blue.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
//	//号諺戚 展維
//	IMAGEMANAGER->addFrameImage("EFFECT_effectSpark", "Resource/IMG/effect/effect_spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
//	//蕉格耕 展維1
//	IMAGEMANAGER->addFrameImage("EFFECT_effectStar", "Resource/IMG/effect/effect_star.bmp", 900, 60, 15, 1, true, RGB(255, 0, 255));
//	//左什 趣希嬢澱 杷維(掻淡)
//	IMAGEMANAGER->addFrameImage("EFFECT_etBoomBig", "Resource/IMG/effect/et_boom_big.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
//	//左什 展維
//	IMAGEMANAGER->addFrameImage("EFFECT_explosion", "Resource/IMG/effect/explosion.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
//	//左什 企獣獣拙繊(掻淡)
//	IMAGEMANAGER->addFrameImage("EFFECT_explosion1", "Resource/IMG/effect/explosion1.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
//	//左什 展維(掻淡)
//	IMAGEMANAGER->addFrameImage("EFFECT_explosion2", "Resource/IMG/effect/explosion2.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
//	//郊韓液伸 2腰
//	IMAGEMANAGER->addFrameImage("EFFECT_groundbreak", "Resource/IMG/effect/groundbreak.bmp", 256, 128, 1, 1, true, RGB(255, 0, 255));
//	//切毒奄 督雨
//	IMAGEMANAGER->addFrameImage("EFFECT_objBreak", "Resource/IMG/effect/obj break.bmp", 3304, 248, 14, 1, true, RGB(255, 0, 255));
//	//巴傾戚嬢 昔縦
//	IMAGEMANAGER->addFrameImage("EFFECT_point", "Resource/IMG/effect/point.bmp", 560, 70, 8, 1, true, RGB(255, 0, 255));
//	//巴傾戚嬢 霜爽 frameY(2)
//	IMAGEMANAGER->addFrameImage("EFFECT_run", "Resource/IMG/effect/run.bmp", 2544, 246, 12, 2, true, RGB(255, 0, 255));
//	//疎著 霜爽
//	IMAGEMANAGER->addFrameImage("EFFECT_runL", "Resource/IMG/effect/runL.bmp", 2784, 126, 12, 1, true, RGB(255, 0, 255));
//	//酔著 霜爽
//	IMAGEMANAGER->addFrameImage("EFFECT_runR", "Resource/IMG/effect/runR.bmp", 2544, 123, 12, 1, true, RGB(255, 0, 255));
//	//疑戸嘘七
//	IMAGEMANAGER->addFrameImage("EFFECT_shake", "Resource/IMG/effect/shake.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
//	//号諺戚 展維(掻淡)
//	IMAGEMANAGER->addFrameImage("EFFECT_spark", "Resource/IMG/effect/spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
//	//蕉格耕 展維2
//	IMAGEMANAGER->addFrameImage("EFFECT_star", "Resource/IMG/effect/star.bmp", 1350, 90, 15, 1, true, RGB(255, 0, 255));
//	//奄箭
//	IMAGEMANAGER->addFrameImage("EFFECT_stun", "Resource/IMG/effect/stun.bmp", 420, 54, 6, 1, true, RGB(255, 0, 255));
//	//}*/
//
//
//
//	//ししししししし 焼戚奴 & 神崎詮闘 ししししししし//
//	//*{
//
//	//焼戚奴
//	//Resource/IMG/item
//	//硝稽拭
//	IMAGEMANAGER->addImage("ITEM_aloe", "Resource/IMG/item/aloe.bmp", 50, 76, true, RGB(255, 0, 255));
//	//倍獄暗
//	IMAGEMANAGER->addImage("ITEM_hamburger", "Resource/IMG/item/hamburger.bmp", 64, 55, true, RGB(255, 0, 255));
//	//焼戚什滴顕
//	IMAGEMANAGER->addImage("ITEM_icecream", "Resource/IMG/item/icecream.bmp", 55, 70, true, RGB(255, 0, 255));
//	//儀猿什
//	IMAGEMANAGER->addImage("ITEM_meat", "Resource/IMG/item/meat.bmp", 60, 51, true, RGB(255, 0, 255));
//	//歯酔蕩沿
//	IMAGEMANAGER->addImage("ITEM_tempura", "Resource/IMG/item/tempura.bmp", 58, 60, true, RGB(255, 0, 255));
//
//	//Resources/IMG/item/
//	//紫引
//	IMAGEMANAGER->addImage("ITEM_apple", "Resource/IMG/item/apple.bmp", 68, 72, true, RGB(255, 0, 255));
//
//	//神崎詮闘
//	//Resources/IMG/object
//	//紫引
//	IMAGEMANAGER->addImage("OBJECT_apple", "Resources/IMG/object/apple.bmp", 100, 100, true, RGB(255, 0, 255));
//	//厩呪
//	IMAGEMANAGER->addImage("OBJECT_chili", "Resources/IMG/object/chili.bmp", 100, 100, true, RGB(255, 0, 255));
//	//帖轍
//	IMAGEMANAGER->addImage("OBJECT_hen", "Resources/IMG/object/hen.bmp", 100, 100, true, RGB(255, 0, 255));
//	//奪雌
//	IMAGEMANAGER->addImage("OBJECT_desk", "Resources/IMG/object/desk.bmp", 147, 162, true, RGB(255, 0, 255));
//	//嘘紫 奪雌
//	IMAGEMANAGER->addImage("OBJECT_teachers_desk", "Resources/IMG/object/teachers_desk.bmp", 83, 34, true, RGB(255, 0, 255));
//	//砺戚鷺
//	IMAGEMANAGER->addImage("OBJECT_table", "Resources/IMG/object/table.bmp", 339, 162, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addImage("OBJECT_particle2", "Resources/IMG/object/pillar_particle_2.bmp", 64, 64, true, RGB(255, 0, 255));
//	//奄逆 督畷3																					
//	IMAGEMANAGER->addImage("OBJECT_particle3", "Resources/IMG/object/pillar_particle_3.bmp", 64, 64, true, RGB(255, 0, 255));
//	//疑穿
//	IMAGEMANAGER->addFrameImage("OBJECT_gold", "Resources/IMG/object/gold_coin_spin.bmp", 512, 512, 4, 4, true, RGB(255, 0, 255));
//	//走二
//	IMAGEMANAGER->addFrameImage("OBJECT_money", "Resources/IMG/object/money_green.bmp", 576, 432, 4, 4, true, RGB(255, 0, 255));
//	//板号 奄逆
//	IMAGEMANAGER->addFrameImage("OBJECT_backPillar", "Resources/IMG/object/pillar.bmp", 390, 678, 2, 1, true, RGB(255, 0, 255));
//	//穿号 奄逆
//	IMAGEMANAGER->addFrameImage("OBJECT_firstPillar", "Resources/IMG/object/pillar_big.bmp", 390, 957, 2, 1, true, RGB(255, 0, 255));
//	//社随
//	IMAGEMANAGER->addFrameImage("OBJECT_pet", "Resources/IMG/object/pet.bmp", 576, 96, 6, 1, true, RGB(255, 0, 255));
//	//号諺戚
//	IMAGEMANAGER->addFrameImage("OBJECT_bat", "Resources/IMG/object/bat.bmp", 179, 104, 1, 2, true, RGB(255, 0, 255));
//	//切毒奄
//	IMAGEMANAGER->addFrameImage("OBJECT_vendingMachine", "Resource/IMG/object/vendingMachine.bmp", 525, 260, 2, 1, true, RGB(255, 0, 255));
//	
//	//========================================================格姥軒===================================================================
//	//Resource/IMG/object/
//	//笑舛
//	IMAGEMANAGER->addImage("OBJECT_trape", "Resource/IMG/object/trape.bmp", 28, 28, true, RGB(255, 0, 255));
//	//沓棋 牌焼軒
//	IMAGEMANAGER->addImage("OBJECT_random", "Resource/IMG/object/randomItem.bmp", 72, 72, true, RGB(255, 0, 255));
//	//亜促 牌焼軒
//	IMAGEMANAGER->addImage("OBJECT_fake", "Resource/IMG/object/fakeItem.bmp", 72, 72, true, RGB(255, 0, 255));
//	//}*/
//
//
//	//ししししししし 什砺戚走 & UI ししししししし//
//	//*{
//
//	//什砺戚走
//	//Resource/IMG/stage
//	//左什 去舌 穿 什砺戚走
//	IMAGEMANAGER->addImage("STAGE_boss1", "Resource/IMG/stage/boss1.bmp", 3116, 1215, true, RGB(255, 0, 255));
//	//左什 去舌 板 什砺戚走
//	IMAGEMANAGER->addImage("STAGE_boss2", "Resource/IMG/stage/boss2.bmp", 3116, 1215, true, RGB(255, 0, 255));
//	//惟績 獣拙 嘘叔
//	IMAGEMANAGER->addImage("STAGE_easy", "Resource/IMG/stage/easy.bmp", 2028, 678, true, RGB(255, 0, 255));
//	//呪慎舌
//	IMAGEMANAGER->addImage("STAGE_hard", "Resource/IMG/stage/hard.bmp", 2328, 1428, true, RGB(255, 0, 255));
//	//畷税繊
//	IMAGEMANAGER->addImage("STAGE_normal", "Resource/IMG/stage/normal.bmp", 2865, 837, true, RGB(255, 0, 255));
//
//	//===============================================================格姥軒==========================================================================
//	//Resource/IMG/stage/
//	//什砺戚走
//IMAGEMANAGER->addImage("STAGE_backGround", "Resource/IMG/stage/backGround.bmp", 1280, 964, true, RGB(255, 0, 255));
//	//波漆 什砺戚走
//	IMAGEMANAGER->addImage("STAGE_pixel", "Resource/IMG/stage/backGroundPixel.bmp", 1280, 964, true, RGB(255, 0, 255));
//
//#pragma endregion SFXPATH
//
//	//========================戚耕走 社什======================
//#pragma region IMAGESOURCES
//
////巴傾戚嬢 戚耕走
//#pragma region PLAYERIMAGE

////#pragma region IMGPATH
//
//
//	
//
//	//ししししししし 爽推 昔弘 ししししししし//
//	/*{
//
//	//巴傾戚嬢 戚耕走 井稽
//	//Resource/IMG/character/player/imageName.bmp
//
//	//旋浦 戚耕走 井稽
//	//Resource/IMG/character/enemy/
//
//	//NPC 戚耕走 井稽
//	//Resource/IMG/character/npc/
//
//	}*/
//
//	//ししししししし 反引  ししししししし//
//	/*{
//
//	//反引
//	//Resource/IMG/effect
//
//	}*/
//
//
//
//	//ししししししし 焼戚奴 & 神崎詮闘 ししししししし//
//	/*{
//	*
//	//焼戚奴
//	//Resource/IMG/item
//
//	//神崎詮闘
//	//Resource/IMG/object
//
//	}*/
//
//
//	//ししししししし 什砺戚走 & UI ししししししし//
//	/*{
//
//	//什砺戚走
//	//Resource/IMG/stage
//
//	//UI
//	//Resource/IMG/ui
//	
//	}*/
////
////#pragma endregion IMGPATH
////
////#pragma region SFXPATH
//
//	//ししししししし 製据 ししししししし//
//	/*{
//
//	//巴傾戚嬢 製据 井稽
//	//Resource/SFX/Player/
//
//	//発井// 什砺戚走 井稽
//	//Resource/SFX/environment
//
//	
//
//
//
//	//左什 反引製? 井稽
//	//Resource/SFX/global
//
//	//五敢製据
//	//Resource/SFX/menu/
//
//	//巷奄製据
//	//Resource/SFX/weapons/
//
//	//掃澗 波穣製据
//	//Resource/SFX/pickup/
//
//	}*/
//////#pragma region WEAPONS
////
////	//巷奄 展維製
////
////	SOUNDMANAGER->addSound("WEAPONS_bassball1_bat",		"Resource/SFX/weapons/weapon_baseball_bat_hit.wav", true, false);			//醤姥号諺戚  逆
////	SOUNDMANAGER->addSound("WEAPONS_bassball2_bat",		"Resource/SFX/weapons/weapon_baseball_impact.wav", true, false);			//醤姥号諺戚2 店 
////	
////	SOUNDMANAGER->addSound("WEAPONS_bench1",			"Resource/SFX/weapons/weapon_bench_break.wav", true, false);				//坤帖 採偲走澗社軒
////	SOUNDMANAGER->addSound("WEAPONS_bench2",			"Resource/SFX/weapons/weapon_bench_impact.wav", true, false);				//坤帖 績苫闘
////	
////	SOUNDMANAGER->addSound("WEAPONS_bicycle",			"Resource/SFX/weapons/weapon_bicycle_impact.wav", true, false);				//切穿暗
////	SOUNDMANAGER->addSound("WEAPONS_boomerang",			"Resource/SFX/weapons/weapon_boomerang_throw.wav", true, false);			//採五櫛
////	SOUNDMANAGER->addSound("WEAPONS_chain",				"Resource/SFX/weapons/weapon_chain_swing.wav", true, false);				//端昔
////	SOUNDMANAGER->addSound("WEAPONS_dodgeball",			"Resource/SFX/weapons/weapon_dodgeball_impact.wav", true, false);			//杷姥因
////	SOUNDMANAGER->addSound("WEAPONS_fish1",				"Resource/SFX/weapons/weapon_fish_explode.wav", true, false);				//弘壱奄1
////	SOUNDMANAGER->addSound("WEAPONS_fish2",				"Resource/SFX/weapons/weapon_fish_impact.wav", true, false);				//弘壱奄2
////	SOUNDMANAGER->addSound("WEAPONS_frying_pan",		"Resource/SFX/weapons/weapon_frying_pan_impact2.wav", true, false);			//覗虞戚謎
////	
////	SOUNDMANAGER->addSound("WEAPONS_guitar1",			"Resource/SFX/weapons/weapon_guitar_impact_01.wav", true, false);			//奄展1
////	SOUNDMANAGER->addSound("WEAPONS_guitar2",			"Resource/SFX/weapons/weapon_guitar_impact_02.wav", true, false);			//奄展2
////	SOUNDMANAGER->addSound("WEAPONS_guitar3",			"Resource/SFX/weapons/weapon_guitar_impact_03.wav", true, false);			//奄展3
////	SOUNDMANAGER->addSound("WEAPONS_guitar4",			"Resource/SFX/weapons/weapon_guitar_impact_04.wav", true, false);			//奄展4
////	
////	SOUNDMANAGER->addSound("WEAPONS_lightSaber1",		"Resource/SFX/weapons/weapon_light_saber_impact_01.wav", true, false);		//虞戚闘室戚獄1
////	SOUNDMANAGER->addSound("WEAPONS_lightSaber2",		"Resource/SFX/weapons/weapon_light_saber_impact_02.wav", true, false);		//虞戚闘室戚獄2
////	SOUNDMANAGER->addSound("WEAPONS_lightSaber3",		"Resource/SFX/weapons/weapon_light_saber_impact_03.wav", true, false);		//虞戚闘室戚獄3
////	
////	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing1",	"Resource/SFX/weapons/weapon_light_saber_swing_01.wav", true, false);		//虞戚闘室戚獄什成1
////	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing2",	"Resource/SFX/weapons/weapon_light_saber_swing_02.wav", true, false);		//虞戚闘室戚獄什成2
////	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing3",	"Resource/SFX/weapons/weapon_light_saber_swing_03.wav", true, false);		//虞戚闘室戚獄什成3
////	SOUNDMANAGER->addSound("WEAPONS_lightSaverSwing4",	"Resource/SFX/weapons/weapon_light_saber_swing_04.wav", true, false);		//虞戚闘室戚獄什成4
////
////	SOUNDMANAGER->addSound("WEAPONS_chair",				"Resource/SFX/weapons/weapon_metal_chair_impact.wav", true, false);			//榎紗税切
////	SOUNDMANAGER->addSound("WEAPONS_shovel",			"Resource/SFX/weapons/weapon_shovel_impact.wav", true, false);				//諮
////	SOUNDMANAGER->addSound("WEAPONS_starBaton",			"Resource/SFX/weapons/weapon_star_baton_impact.wav", true, false);			//紺走椴戚
////	SOUNDMANAGER->addSound("WEAPONS_woodPlank",			"Resource/SFX/weapons/weapon_wood_plank_impact.wav", true, false);			//蟹巷毒切
////	SOUNDMANAGER->addSound("WEAPONS_wrench",			"Resource/SFX/weapons/weapon_wrench_impact.wav", true, false);				//兄帖
////
////#pragma endregion WEAPONS
////
////	//乞窮 杷維 奄沙 壕井
////	IMAGEMANAGER->addFrameImage("EFFECT_attack", "Resource/IMG/effect/attack.bmp", 612, 196, 3, 1, true, RGB(255, 0, 255));
////
////	
////																																	//乞窮 杷維
//	//IMAGEMANAGER->addFrameImage("attack", "Resource/IMG/effect/attack.bmp", 612, 196, 3, 1, true, RGB(255, 0, 255));
////
////	//蕉格耕 牌差
////	IMAGEMANAGER->addFrameImage("EFFECT_beg", "Resource/IMG/effect/beg.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
////	//巴傾戚嬢 展維
////	IMAGEMANAGER->addFrameImage("EFFECT_blueAttack", "Resource/IMG/effect/blueAttack.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
////	//左什 企獣獣拙繊
////	IMAGEMANAGER->addFrameImage("EFFECT_bossDash", "Resource/IMG/effect/Boss dash.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
////	//巴傾戚嬢 号嬢
////	IMAGEMANAGER->addFrameImage("EFFECT_bossHowling", "Resource/IMG/effect/Boss howling.bmp", 1821, 165, 8, 1, true, RGB(255, 0, 255));
////	//左什 号嬢
////	IMAGEMANAGER->addFrameImage("EFFECT_bossHowling2", "Resource/IMG/effect/Boss howling2.bmp", 416, 208, 2, 1, true, RGB(255, 0, 255));
////	//左什 繊覗 因維 frameY(2)
////	IMAGEMANAGER->addFrameImage("EFFECT_bossMeteor", "Resource/IMG/effect/Boss meteor.bmp", 1620, 640, 4, 2, true, RGB(255, 0, 255));
////	//左什 繊覗 因維
////	IMAGEMANAGER->addFrameImage("EFFECT_bossMeteor2", "Resource/IMG/effect/Boss meteor2.bmp", 2424, 320, 6, 1, true, RGB(255, 0, 255));
////	//左什 虞什闘 凪戚綜
////	IMAGEMANAGER->addFrameImage("EFFECT_bossPhase1", "Resource/IMG/effect/Boss phase1.bmp", 299, 82, 3, 1, true, RGB(255, 0, 255));
////	//左什 趣希嬢澱 杷維
////	IMAGEMANAGER->addFrameImage("EFFECT_bossSmash", "Resource/IMG/effect/Boss smash.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
////	//左什亜 析嬢竺 凶
////	IMAGEMANAGER->addFrameImage("EFFECT_bossStand", "Resource/IMG/effect/Boss stand.bmp", 607, 55, 8, 1, true, RGB(255, 0, 255));
////	//郊韓液伸 1腰
////	IMAGEMANAGER->addFrameImage("EFFECT_bossStand2", "Resource/IMG/effect/Boss stand2.bmp", 3390, 144, 7, 1, true, RGB(255, 0, 255));
////	//奄逆 督雨(繊覗)
////	IMAGEMANAGER->addFrameImage("EFFECT_boss_effect5", "Resource/IMG/effect/boss_effect5.bmp", 800, 90, 7, 1, true, RGB(255, 0, 255));
////	//鉢檎 凹像
////	IMAGEMANAGER->addFrameImage("EFFECT_crush", "Resource/IMG/effect/crush.bmp", 190, 193, 1, 1, true, RGB(255, 0, 255));
////	//奄逆 督雨(趣希)
////	IMAGEMANAGER->addFrameImage("EFFECT_dashAttackEffect", "Resource/IMG/effect/dashAttackEffect.bmp", 400, 45, 7, 1, true, RGB(255, 0, 255));
////	//煽什闘 亜球
////	IMAGEMANAGER->addFrameImage("EFFECT_effecBlue", "Resource/IMG/effect/effec_blue.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
////	//号諺戚 展維
////	IMAGEMANAGER->addFrameImage("EFFECT_effectSpark", "Resource/IMG/effect/effect_spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
////	//蕉格耕 展維1
////	IMAGEMANAGER->addFrameImage("EFFECT_effectStar", "Resource/IMG/effect/effect_star.bmp", 900, 60, 15, 1, true, RGB(255, 0, 255));
////	//左什 趣希嬢澱 杷維(掻淡)
////	IMAGEMANAGER->addFrameImage("EFFECT_etBoomBig", "Resource/IMG/effect/et_boom_big.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
////	//左什 展維
////	IMAGEMANAGER->addFrameImage("EFFECT_explosion", "Resource/IMG/effect/explosion.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
////	//左什 企獣獣拙繊(掻淡)
////	IMAGEMANAGER->addFrameImage("EFFECT_explosion1", "Resource/IMG/effect/explosion1.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
////	//左什 展維(掻淡)
////	IMAGEMANAGER->addFrameImage("EFFECT_explosion2", "Resource/IMG/effect/explosion2.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
////	//郊韓液伸 2腰
////	IMAGEMANAGER->addFrameImage("EFFECT_groundbreak", "Resource/IMG/effect/groundbreak.bmp", 256, 128, 1, 1, true, RGB(255, 0, 255));
////	//切毒奄 督雨
////	IMAGEMANAGER->addFrameImage("EFFECT_objBreak", "Resource/IMG/effect/obj break.bmp", 3304, 248, 14, 1, true, RGB(255, 0, 255));
////	//巴傾戚嬢 昔縦
////	IMAGEMANAGER->addFrameImage("EFFECT_point", "Resource/IMG/effect/point.bmp", 560, 70, 8, 1, true, RGB(255, 0, 255));
////	//巴傾戚嬢 霜爽 frameY(2)
////	IMAGEMANAGER->addFrameImage("EFFECT_run", "Resource/IMG/effect/run.bmp", 2544, 246, 12, 2, true, RGB(255, 0, 255));
////	//疎著 霜爽
////	IMAGEMANAGER->addFrameImage("EFFECT_runL", "Resource/IMG/effect/runL.bmp", 2784, 126, 12, 1, true, RGB(255, 0, 255));
////	//酔著 霜爽
////	IMAGEMANAGER->addFrameImage("EFFECT_runR", "Resource/IMG/effect/runR.bmp", 2544, 123, 12, 1, true, RGB(255, 0, 255));
////	//疑戸嘘七
////	IMAGEMANAGER->addFrameImage("EFFECT_shake", "Resource/IMG/effect/shake.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
////	//号諺戚 展維(掻淡)
////	IMAGEMANAGER->addFrameImage("EFFECT_spark", "Resource/IMG/effect/spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
////	//蕉格耕 展維2
////	IMAGEMANAGER->addFrameImage("EFFECT_star", "Resource/IMG/effect/star.bmp", 1350, 90, 15, 1, true, RGB(255, 0, 255));
////	//奄箭
////	IMAGEMANAGER->addFrameImage("EFFECT_stun", "Resource/IMG/effect/stun.bmp", 420, 54, 6, 1, true, RGB(255, 0, 255));
////	//}*/
////
////
////
////	//ししししししし 焼戚奴 & 神崎詮闘 ししししししし//
//	//*{
////
////	//焼戚奴
//	//Resource/IMG/item
//	//硝稽拭
////	IMAGEMANAGER->addImage("ITEM_aloe", "Resource/IMG/item/aloe.bmp", 50, 76, true, RGB(255, 0, 255));
////	//倍獄暗
////	IMAGEMANAGER->addImage("ITEM_hamburger", "Resource/IMG/item/hamburger.bmp", 64, 55, true, RGB(255, 0, 255));
////	//焼戚什滴顕
////	IMAGEMANAGER->addImage("ITEM_icecream", "Resource/IMG/item/icecream.bmp", 55, 70, true, RGB(255, 0, 255));
////	//儀猿什
////	IMAGEMANAGER->addImage("ITEM_meat", "Resource/IMG/item/meat.bmp", 60, 51, true, RGB(255, 0, 255));
////	//歯酔蕩沿
////	IMAGEMANAGER->addImage("ITEM_tempura", "Resource/IMG/item/tempura.bmp", 58, 60, true, RGB(255, 0, 255));
////
////	//神崎詮闘
//	//Resource/IMG/object
//	//紫引
////	IMAGEMANAGER->addImage("OBJECT_apple", "Resource/IMG/object/apple.bmp", 100, 100, true, RGB(255, 0, 255));
////	//厩呪
////	IMAGEMANAGER->addImage("OBJECT_chili", "Resource/IMG/object/chili.bmp", 100, 100, true, RGB(255, 0, 255));
////	//帖轍
////	IMAGEMANAGER->addImage("OBJECT_hen", "Resource/IMG/object/hen.bmp", 100, 100, true, RGB(255, 0, 255));
////	//奪雌
////	IMAGEMANAGER->addImage("OBJECT_desk", "Resource/IMG/object/desk.bmp", 147, 162, true, RGB(255, 0, 255));
////	//嘘紫 奪雌
////	IMAGEMANAGER->addImage("OBJECT_teachers_desk", "Resource/IMG/object/teachers_desk.bmp", 83, 34, true, RGB(255, 0, 255));
////	//砺戚鷺
////	IMAGEMANAGER->addImage("OBJECT_table", "Resource/IMG/object/table.bmp", 339, 162, true, RGB(255, 0, 255));
////	//随展軒
////	IMAGEMANAGER->addImage("OBJECT_fence", "Resource/IMG/object/fence.bmp", 476, 71, true, RGB(255, 0, 255));
////	//奄逆 督畷1
////	IMAGEMANAGER->addImage("OBJECT_particle1", "Resource/IMG/object/pillar_particle_1.bmp", 64, 64, true, RGB(255, 0, 255));
////	//奄逆 督畷2																					 
////	IMAGEMANAGER->addImage("OBJECT_particle2", "Resource/IMG/object/pillar_particle_2.bmp", 64, 64, true, RGB(255, 0, 255));
////	//奄逆 督畷3																					
////	IMAGEMANAGER->addImage("OBJECT_particle3", "Resource/IMG/object/pillar_particle_3.bmp", 64, 64, true, RGB(255, 0, 255));
////	//疑穿
////	IMAGEMANAGER->addFrameImage("OBJECT_gold", "Resource/IMG/object/gold_coin_spin.bmp", 512, 512, 4, 4, true, RGB(255, 0, 255));
////	//走二
////	IMAGEMANAGER->addFrameImage("OBJECT_money", "Resource/IMG/object/money_green.bmp", 576, 432, 4, 4, true, RGB(255, 0, 255));
////	//板号 奄逆
////	IMAGEMANAGER->addFrameImage("OBJECT_backPillar", "Resource/IMG/object/pillar.bmp", 390, 678, 2, 1, true, RGB(255, 0, 255));
////	//穿号 奄逆
////	IMAGEMANAGER->addFrameImage("OBJECT_firstPillar", "Resource/IMG/object/pillar_big.bmp", 390, 957, 2, 1, true, RGB(255, 0, 255));
////	//社随
////	IMAGEMANAGER->addFrameImage("OBJECT_pet", "Resource/IMG/object/pet.bmp", 576, 96, 6, 1, true, RGB(255, 0, 255));
////	//号諺戚
////	IMAGEMANAGER->addFrameImage("OBJECT_bat", "Resource/IMG/object/bat.bmp", 179, 104, 1, 2, true, RGB(255, 0, 255));
////	//切毒奄
////	IMAGEMANAGER->addFrameImage("OBJECT_vendingMachine", "Resource/IMG/object/vendingMachine.bmp", 525, 260, 2, 1, true, RGB(255, 0, 255));
////	//}*/
////
////
////	//ししししししし 什砺戚走 & UI ししししししし//
//	//*{
////
////	//什砺戚走
//	//Resource/IMG/stage
//	//左什 去舌 穿 什砺戚走
////	IMAGEMANAGER->addImage("STAGE_boss1", "Resource/IMG/stage/boss1.bmp", 3116, 1215, true, RGB(255, 0, 255));
////	//左什 去舌 板 什砺戚走
////	IMAGEMANAGER->addImage("STAGE_boss2", "Resource/IMG/stage/boss2.bmp", 3116, 1215, true, RGB(255, 0, 255));
////	//惟績 獣拙 嘘叔
////	IMAGEMANAGER->addImage("STAGE_easy", "Resource/IMG/stage/easy.bmp", 2028, 678, true, RGB(255, 0, 255));
////	//呪慎舌
////	IMAGEMANAGER->addImage("STAGE_hard", "Resource/IMG/stage/hard.bmp", 2328, 1428, true, RGB(255, 0, 255));
////	//畷税繊
////	IMAGEMANAGER->addImage("STAGE_normal", "Resource/IMG/stage/normal.bmp", 2865, 837, true, RGB(255, 0, 255));
////
////#pragma endregion SFXPATH
////
////	//========================戚耕走 社什======================
////#pragma region IMAGESOURCES
//
////巴傾戚嬢 戚耕走
////#pragma region PLAYERIMAGE
//
//	//紫陥軒
//	//紫陥軒 点聖凶
//	IMAGEMANAGER->addFrameImage("PLAYER_climb", "Resource/IMG/character/player/climb.bmp", 720, 237, 6, 1, true, RGB(255, 0, 255));
//
//	//紫陥軒 展壱 陥 臣虞穐聖凶 戚耕走
//	IMAGEMANAGER->addFrameImage("PLAYER_climbTop", "Resource/IMG/character/player/climbTop.bmp", 288, 192, 3, 1, true, RGB(255, 0, 255));
//
//	//紫陥軒 展壱 鎧形臣形壱 拝凶 戚耕走
//	IMAGEMANAGER->addFrameImage("PLAYER_climbTopDown", "Resource/IMG/character/player/climbDown.bmp", 288, 234, 3, 1, true, RGB(255, 0, 255));
//
//	//爪左 嬢澱
//	//爪左嬢澱 1析凶 // 爽股
//	IMAGEMANAGER->addFrameImage("PLAYER_comboAttack1", "Resource/IMG/character/player/comboAttack1.bmp", 1548, 390, 6, 2, true, RGB(255, 0, 255));
//
//	//爪左嬢澱 2析凶 // 降託奄
//	IMAGEMANAGER->addFrameImage("PLAYER_comboAttack2", "Resource/IMG/character/player/comboAttack2.bmp", 1869, 402, 7, 2, true, RGB(255, 0, 255));
//
//	//爪左嬢澱 3析凶 /陥軒 鎧形啄奄奄呪ぬぉ
//	IMAGEMANAGER->addFrameImage("PLAYER_comboAttack3", "Resource/IMG/character/player/comboAttack3.bmp", 2970, 462, 9, 2, true, RGB(255, 0, 255));
//
//	//含険�� 因維
//	//企習 嬢澱  //爽股
//	IMAGEMANAGER->addFrameImage("PLAYER_dashAttack", "Resource/IMG/character/player/dashAttack.bmp", 2565, 414, 8, 2, true, RGB(255, 0, 255));
//
//	//企習 劾焼辞 嬢澱
//	IMAGEMANAGER->addFrameImage("PLAYER_dashSAttack", "Resource/IMG/character/player/dashSAttack.bmp", 5460, 456, 21, 2, true, RGB(255, 0, 255));
//
//
//	//蒋拭辞 限紹聖凶 及搭呪稽 角嬢走檎辞 紫諺
//	IMAGEMANAGER->addFrameImage("PLAYER_dead", "Resource/IMG/character/player/dead.bmp", 7280, 478, 26, 2, true, RGB(255, 0, 255));
//
//	//舜惟 限焼辞 劾虞亜檎辞 照檎生稽 角嬢走檎辞 紫諺
//	IMAGEMANAGER->addFrameImage("PLAYER_down", "Resource/IMG/character/player/down.bmp", 4968, 390, 23, 2, true, RGB(255, 0, 255));
//
//	//及拭辞 限紹聖凶 及搭呪稽 角嬢走檎辞 紫諺 惟績魁蟹壱
//	IMAGEMANAGER->addFrameImage("PLAYER_gameOver", "Resource/IMG/character/player/gameOver.bmp", 6240, 282, 26, 2, true, RGB(255, 0, 255));
//
//	//説奄
//	IMAGEMANAGER->addFrameImage("PLAYER_grab", "Resource/IMG/character/player/grab.bmp", 270, 384, 2, 2, true, RGB(255, 0, 255));
//
//	//説奄叔鳶
//	IMAGEMANAGER->addFrameImage("PLAYER_grabFail", "Resource/IMG/character/player/grabFail.bmp", 812, 422, 4, 2, true, RGB(255, 0, 255));
//
//	//亜球
//	IMAGEMANAGER->addFrameImage("PLAYER_guard", "Resource/IMG/character/player/guard.bmp", 351, 378, 3, 2, true, RGB(255, 0, 255));
//
//	//展維
//	IMAGEMANAGER->addFrameImage("PLAYER_hit", "Resource/IMG/character/player/hit.bmp", 246, 420, 2, 2, true, RGB(255, 0, 255));
//
//	//IDLE
//	IMAGEMANAGER->addFrameImage("PLAYER_idle", "Resource/IMG/character/player/idle.bmp", 1440, 450, 12, 2, true, RGB(255, 0, 255));
//
//	//JUMP
//	IMAGEMANAGER->addFrameImage("PLAYER_jump", "Resource/IMG/character/player/jump.bmp", 480, 640, 3, 2, true, RGB(255, 0, 255));
//
//	//JUMPAttack
//	IMAGEMANAGER->addFrameImage("PLAYER_jumpAttack", "Resource/IMG/character/player/jump_Attack.bmp", 1560, 432, 10, 2, true, RGB(255, 0, 255));
//
//	//PICK
//	IMAGEMANAGER->addFrameImage("PLAYER_pick", "Resource/IMG/character/player/pick.bmp", 222, 450, 2, 2, true, RGB(255, 0, 255));
//
//	//ROLL
//	IMAGEMANAGER->addFrameImage("PLAYER_roll", "Resource/IMG/character/player/roll.bmp", 900, 402, 9, 2, true, RGB(255, 0, 255));
//
//	//RUN
//	IMAGEMANAGER->addFrameImage("PLAYER_run", "Resource/IMG/character/player/run.bmp", 2736, 384, 16, 2, true, RGB(255, 0, 255));
//
//	//鎧形啄奄 因維
//	IMAGEMANAGER->addFrameImage("PLAYER_sAttack", "Resource/IMG/character/player/sAttack.bmp", 3030, 560, 10, 2, true, RGB(255, 0, 255));
//
//	//噺穿噺神軒 因維
//	IMAGEMANAGER->addFrameImage("PLAYER_sAttackDown", "Resource/IMG/character/player/sAttackDown.bmp", 7992, 438, 24, 2, true, RGB(255, 0, 255));
//
//	//陥錘雌殿拭辞 陥獣 idle稽
//	IMAGEMANAGER->addFrameImage("PLAYER_stand", "Resource/IMG/character/player/stand.bmp", 1863, 450, 9, 2, true, RGB(255, 0, 255));
//
//	//混檎拭 細嬢赤澗
//	IMAGEMANAGER->addFrameImage("PLAYER_stick", "Resource/IMG/character/player/stick.bmp", 294, 330, 2, 2, true, RGB(255, 0, 255));
//
//	//郊韓税 旋 因維
//	IMAGEMANAGER->addFrameImage("PLAYER_stomp", "Resource/IMG/character/player/stomp.bmp", 1290, 420, 10, 2, true, RGB(255, 0, 255));
//
//	//什渡雌殿
//	IMAGEMANAGER->addFrameImage("PLAYER_stun", "Resource/IMG/character/player/stun.bmp", 384, 384, 4, 2, true, RGB(255, 0, 255));
//
//	//企奄雌殿
//	IMAGEMANAGER->addFrameImage("PLAYER_wait", "Resource/IMG/character/player/wait.bmp", 2520, 440, 18, 2, true, RGB(255, 0, 255));
//
//	//鞍澗雌殿
//	IMAGEMANAGER->addFrameImage("PLAYER_walk", "Resource/IMG/character/player/walk.bmp", 1476, 402, 12, 2, true, RGB(255, 0, 255));
//
//	//走逢...?
//	IMAGEMANAGER->addFrameImage("PLAYER_wallet", "Resource/IMG/character/player/wallet.bmp", 2964, 420, 26, 2, true, RGB(255, 0, 255));
//
//	//醤姥号諺戚稽 因維
//	IMAGEMANAGER->addFrameImage("PLAYER_batAttack", "Resource/IMG/character/player/wBatAttack.bmp", 1700, 700, 5, 2, true, RGB(255, 0, 255));
//
//	//醤姥号諺戚 IDLE
//	IMAGEMANAGER->addFrameImage("PLAYER_batIdle", "Resource/IMG/character/player/wBatIdle.bmp", 1440, 560, 12, 2, true, RGB(255, 0, 255));
//
//	//醤姥号諺戚 JUMP
//	IMAGEMANAGER->addFrameImage("PLAYER_batJump", "Resource/IMG/character/player/wBatJump.bmp", 480, 640, 3, 2, true, RGB(255, 0, 255));
//
//	//醤姥号諺戚 RUN
//	IMAGEMANAGER->addFrameImage("PLAYER_batRun", "Resource/IMG/character/player/wBatRun.bmp", 6784, 560, 16, 2, true, RGB(255, 0, 255));
//
//	//醤姥号諺戚 WALK
//	IMAGEMANAGER->addFrameImage("PLAYER_batWalk", "Resource/IMG/character/player/wBatWalk.bmp", 1476, 500, 8, 2, true, RGB(255, 0, 255));
//
//	//醤姥号諺戚 THROW
//	IMAGEMANAGER->addFrameImage("PLAYER_batThrow", "Resource/IMG/character/player/wBatThrow.bmp", 1616, 600, 8, 2, true, RGB(255, 0, 255));
//
//#pragma endregion PLAYERIMAGE
//
//	//NPC 戚耕走=============================(刃)
//#pragma region NPCIMAGE
////
////	//NPC 戚耕走=============================(刃)
////#pragma region NPCIMAGE
//	//害切1
//	IMAGEMANAGER->addFrameImage("BOY1", "Resource/IMG/character/npc/boy1.bmp", 396, 480, 4, 2, true, RGB(255, 0, 255));
//	//害切1 鋼誓
//	IMAGEMANAGER->addFrameImage("BOY1", "Resource/IMG/character/npc/boy1_react.bmp", 306, 480, 3, 2, true, RGB(255, 0, 255));
//
//	//食切1
//	IMAGEMANAGER->addFrameImage("GIRL1", "Resource/IMG/character/npc/girl.bmp", 312, 396, 4, 2, true, RGB(255, 0, 255));
//	//食切1 鋼誓
//	IMAGEMANAGER->addFrameImage("GIRL1", "Resource/IMG/character/npc/girl1_react.bmp", 297, 384, 3, 2, true, RGB(255, 0, 255));
//
//	//食切2
//	IMAGEMANAGER->addFrameImage("GIRL2", "Resource/IMG/character/npc/girl2.bmp", 324, 522, 4, 2, true, RGB(255, 0, 255));
//	//食切2 鋼誓
//	IMAGEMANAGER->addFrameImage("GIRL2", "Resource/IMG/character/npc/girl2_react.bmp", 360, 504, 3, 2, true, RGB(255, 0, 255));
//
//#pragma endregion NPCIMAGE
//
//#pragma region ENEMYIMAGE
////
////#pragma region ENEMYIMAGE
//
//#pragma region BOSS
//	// 左什 因維
//	IMAGEMANAGER->addFrameImage("BOSS_attacked1", "Resource/IMG/character/enemy/boss/attacked 01.bmp", 737, 594, 3, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_attacked2", "Resource/IMG/character/enemy/boss/attacked 02.bmp", 737, 594, 3, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_attacked3", "Resource/IMG/character/enemy/boss/attacked 03.bmp", 737, 594, 3, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_attacked0", "Resource/IMG/character/enemy/boss/attacked.bmp", 2214, 594, 9, 2, true, RGB(255, 0, 255));
//	// 左什 亜球
//	IMAGEMANAGER->addFrameImage("BOSS_block", "Resource/IMG/character/enemy/boss/block.bmp", 1688, 576, 8, 2, true, RGB(255, 0, 255));
//	// 左什 企習(級戚 酵帖奄?)
//	IMAGEMANAGER->addFrameImage("BOSS_dash", "Resource/IMG/character/enemy/boss/dash.bmp", 2619, 582, 10, 2, true, RGB(255, 0, 255));
//	// 左什 宋製
//	IMAGEMANAGER->addFrameImage("BOSS_death", "Resource/IMG/character/enemy/boss/death.bmp", 4576, 576, 13, 2, true, RGB(255, 0, 255));
//	// 左什 鳶壕
//	IMAGEMANAGER->addFrameImage("BOSS_defeat", "Resource/IMG/character/enemy/boss/defeat.bmp", 4576, 576, 13, 2, true, RGB(255, 0, 255));
//	// 左什 嬢走君趨
//	IMAGEMANAGER->addFrameImage("BOSS_dizzy", "Resource/IMG/character/enemy/boss/dizzy.bmp", 1024, 434, 4, 2, true, RGB(255, 0, 255));
//	// 左什 陥錘
//	IMAGEMANAGER->addFrameImage("BOSS_down", "Resource/IMG/character/enemy/boss/down.bmp", 5830, 510, 22, 2, true, RGB(255, 0, 255));
//	// 左什 燭左酔
//	IMAGEMANAGER->addFrameImage("BOSS_elbow1", "Resource/IMG/character/enemy/boss/elbow.bmp", 2915, 652, 11, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_elbow2", "Resource/IMG/character/enemy/boss/elbow2.bmp", 2885, 652, 11, 2, true, RGB(255, 0, 255));
//	// 左什 析鋼 備闘
//	IMAGEMANAGER->addFrameImage("BOSS_getHit", "Resource/IMG/character/enemy/boss/gethit.bmp", 2214, 594, 9, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_getHit_A", "Resource/IMG/character/enemy/boss/gethit_A.bmp", 5830, 510, 22, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_getHit_K", "Resource/IMG/character/enemy/boss/gethit_K.bmp", 2880, 594, 10, 2, true, RGB(255, 0, 255));
//	// 左什 析嬢害(奄雌)
//	IMAGEMANAGER->addFrameImage("BOSS_getUp_C", "Resource/IMG/character/enemy/boss/getup_C.bmp", 2187, 576, 9, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_getUp_S", "Resource/IMG/character/enemy/boss/getup_S.bmp", 2560, 466, 10, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_getUp_SS", "Resource/IMG/character/enemy/boss/getup_SS.bmp", 3735, 580, 15, 2, true, RGB(255, 0, 255));
//	// 左什 益稽奄
//	IMAGEMANAGER->addFrameImage("BOSS_groggy", "Resource/IMG/character/enemy/boss/groggy.bmp", 1024, 434, 4, 2, true, RGB(255, 0, 255));
//	// 左什 角嬢閃 赤聖 凶 備闘
//	IMAGEMANAGER->addFrameImage("BOSS_groundHit", "Resource/IMG/character/enemy/boss/groundhit.bmp", 1036, 460, 4, 2, true, RGB(255, 0, 255));
//	// 左什 社軒走牽奄
//	IMAGEMANAGER->addFrameImage("BOSS_howling", "Resource/IMG/character/enemy/boss/howling.bmp", 2916, 576, 12, 2, true, RGB(255, 0, 255));
//	// 左什 亜幻備
//	IMAGEMANAGER->addFrameImage("BOSS_idle", "Resource/IMG/character/enemy/boss/idle.bmp", 3180, 634, 12, 2, true, RGB(255, 0, 255));
//	// 左什 錠帰号焼 啄奄
//	IMAGEMANAGER->addFrameImage("BOSS_meteor", "Resource/IMG/character/enemy/boss/meteor.bmp", 480, 460, 2, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_meteor_A", "Resource/IMG/character/enemy/boss/meteor_A.bmp", 410, 660, 2, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_meteor_C", "Resource/IMG/character/enemy/boss/meteor_C.bmp", 2988, 576, 12, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_meteor_G", "Resource/IMG/character/enemy/boss/meteor_G.bmp", 1224, 422, 6, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_meteor_J", "Resource/IMG/character/enemy/boss/meteor_J.bmp", 1888, 672, 8, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_meteor_M", "Resource/IMG/character/enemy/boss/meteor_M.bmp", 4674, 576, 19, 2, true, RGB(255, 0, 255));
//	// 左什 戚疑
//	IMAGEMANAGER->addFrameImage("BOSS_move", "Resource/IMG/character/enemy/boss/move.bmp", 2110, 588, 10, 2, true, RGB(255, 0, 255));
//	// 左什 凪戚綜 痕井?
//	IMAGEMANAGER->addFrameImage("BOSS_phase", "Resource/IMG/character/enemy/boss/phase.bmp", 5658, 748, 23, 2, true, RGB(255, 0, 255));
//	// 左什 匂反
//	IMAGEMANAGER->addFrameImage("BOSS_roar", "Resource/IMG/character/enemy/boss/roar.bmp", 2916, 576, 12, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_roar_U", "Resource/IMG/character/enemy/boss/roar_U.bmp", 1000, 474, 4, 2, true, RGB(255, 0, 255));
//	// 左什 及板軒奄
//	IMAGEMANAGER->addFrameImage("BOSS_slab", "Resource/IMG/character/enemy/boss/slab.bmp", 5278, 582, 14, 2, true, RGB(255, 0, 255));
//	// 左什 蒋板軒奄
//	IMAGEMANAGER->addFrameImage("BOSS_slap", "Resource/IMG/character/enemy/boss/slap.bmp", 5278, 582, 14, 2, true, RGB(255, 0, 255));
//	// 左什 爽股霜
//	IMAGEMANAGER->addFrameImage("BOSS_smash", "Resource/IMG/character/enemy/boss/smash.bmp", 11880, 594, 27, 2, true, RGB(255, 0, 255));
//	// 左什 症焼辞 凶軒奄
//	IMAGEMANAGER->addFrameImage("BOSS_standAttack", "Resource/IMG/character/enemy/boss/standattack.bmp", 2187, 576, 9, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_standAttack1", "Resource/IMG/character/enemy/boss/standattack1.bmp", 2560, 466, 10, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_standAttack2", "Resource/IMG/character/enemy/boss/standattack2.bmp", 3735, 580, 15, 2, true, RGB(255, 0, 255));
//	// 左什 趣希殿適(嬢凹腔帖奄)
//	IMAGEMANAGER->addFrameImage("BOSS_tackle", "Resource/IMG/character/enemy/boss/tackle.bmp", 1120, 576, 5, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("BOSS_tackle_L", "Resource/IMG/character/enemy/boss/tackle_L.bmp", 2882, 576, 11, 2, true, RGB(255, 0, 255));
//	// 左什 去舌?
//	IMAGEMANAGER->addFrameImage("BOSS_taunt", "Resource/IMG/character/enemy/boss/taunt.bmp", 5658, 748, 23, 2, true, RGB(255, 0, 255));
//	// 左什 鞍奄
//	IMAGEMANAGER->addFrameImage("BOSS_walk", "Resource/IMG/character/enemy/boss/walk.bmp", 2110, 588, 10, 2, true, RGB(255, 0, 255));
//	// 左什 呑帖
//	IMAGEMANAGER->addFrameImage("BOSS_wupunch", "Resource/IMG/character/enemy/boss/wupunch.bmp", 11880, 594, 27, 2, true, RGB(255, 0, 255));
//#pragma endregion BOSS
//
//#pragma region CHEERLEADER
//	// 帖嬢軒希 陥錘
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_backDown", "Resource/IMG/character/enemy/cheerLeader/backdown.bmp", 9338, 436, 29, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 拷巴験(拷棋鷺元)
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_backFlip", "Resource/IMG/character/enemy/cheerLeader/backflip.bmp", 6732, 612, 22, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 姥杏(得 杯嫌)
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_begging", "Resource/IMG/character/enemy/cheerLeader/begging.bmp", 513, 372, 3, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 亜球
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_block", "Resource/IMG/character/enemy/cheerLeader/block.bmp", 519, 428, 3, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 爪左因維
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_comboAttack1", "Resource/IMG/character/enemy/cheerLeader/ComboAttack1.bmp", 1332, 468, 6, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_comboAttack2", "Resource/IMG/character/enemy/cheerLeader/ComboAttack2.bmp", 1827, 426, 7, 2, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_comboAttack3", "Resource/IMG/character/enemy/cheerLeader/ComboAttack3.bmp", 4050, 498, 15, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 備闘
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_getHit", "Resource/IMG/character/enemy/cheerLeader/gethit.bmp", 1539, 426, 9, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 説奄備闘
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_heldHit", "Resource/IMG/character/enemy/cheerLeader/HeldHit.bmp", 840, 384, 5, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 説奄 背号
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_heldRelease", "Resource/IMG/character/enemy/cheerLeader/HeldRelease.bmp", 840, 456, 4, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 亜幻備
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_idle", "Resource/IMG/character/enemy/cheerLeader/idle.bmp", 2304, 432, 12, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 繊覗
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_jump", "Resource/IMG/character/enemy/cheerLeader/jump.bmp", 540, 474, 3, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 繊覗 因維
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_jumpAttack", "Resource/IMG/character/enemy/cheerLeader/JumpAttack.bmp", 1491, 654, 7, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 神牽奄(紫陥軒 去)
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_ladder", "Resource/IMG/character/enemy/cheerLeader/ladder.bmp", 900, 255, 6, 1, true, RGB(255, 0, 255));
//	// 帖嬢軒希 含軒奄
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_run", "Resource/IMG/character/enemy/cheerLeader/run.bmp", 1368, 318, 8, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 奄箭
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_stun", "Resource/IMG/character/enemy/cheerLeader/stun.bmp", 540, 390, 4, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 鐸走?(焼原亀 紫陥軒旭精 員拭辞 鎧形神澗)
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_transition", "Resource/IMG/character/enemy/cheerLeader/transition.bmp", 396, 186, 3, 1, true, RGB(255, 0, 255));
//	// 帖嬢軒希 鞍奄
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_walk", "Resource/IMG/character/enemy/cheerLeader/walk.bmp", 2736, 438, 12, 2, true, RGB(255, 0, 255));
//	// 帖嬢軒希 巷奄備闘
//	IMAGEMANAGER->addFrameImage("CHEERLEADER_weaponHit", "Resource/IMG/character/enemy/cheerLeader/weaponHit.bmp", 7084, 436, 22, 2, true, RGB(255, 0, 255));
//#pragma endregion CHEERLEADER
//
//#pragma region SCHOOLBOYIMAGE 
//
//	//IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255)); 森獣
//
//	//SCHOOLBOYIMAGE
//
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_backdown", "Resource/IMG/character/enemy/scoolBoy/backdown.bmp", 7695, 438, 27, 2, true, RGB(255, 0, 255));			//角嬢然聖凶
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_begging", "Resource/IMG/character/enemy/scoolBoy/begging.bmp", 216, 354, 2, 2, true, RGB(255, 0, 255));				//牌差
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_block", "Resource/IMG/character/enemy/scoolBoy/block.bmp", 459, 438, 3, 2, true, RGB(255, 0, 255));					//厳奄
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_comboAttack1", "Resource/IMG/character/enemy/scoolBoy/ComboAttack1.bmp", 2352, 426, 7, 2, true, RGB(255, 0, 255));	//因維1
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_comboAttack2", "Resource/IMG/character/enemy/scoolBoy/ComboAttack2.bmp", 1757, 444, 7, 2, true, RGB(255, 0, 255));	//因維2
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_comboAttack3", "Resource/IMG/character/enemy/scoolBoy/ComboAttack3.bmp", 1890, 558, 9, 2, true, RGB(255, 0, 255));	//因維3
//								 
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_gethit", "Resource/IMG/character/enemy/scoolBoy/gethit.bmp", 1728, 450, 9, 2, true, RGB(255, 0, 255));				//限澗 疑拙
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_heldHit", "Resource/IMG/character/enemy/scoolBoy/HeldHit.bmp", 576, 372, 3, 2, true, RGB(255, 0, 255));				//説備壱 限澗 疑拙
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_heldRelease", "Resource/IMG/character/enemy/scoolBoy/HeldRelease.bmp", 660, 480, 4, 2, true, RGB(255, 0, 255));		//説備壱 葱 疑拙
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_idle", "Resource/IMG/character/enemy/scoolBoy/idle.bmp", 1224, 432, 8, 2, true, RGB(255, 0, 255));					//奄沙
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_jump", "Resource/IMG/character/enemy/scoolBoy/jump.bmp", 423, 486, 3, 2, true, RGB(255, 0, 255));					//繊覗
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_jumpAttack", "Resource/IMG/character/enemy/scoolBoy/jumpAttack.bmp", 1224, 468, 6, 2, true, RGB(255, 0, 255));		//繊覗 因維
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_ladder", "Resource/IMG/character/enemy/scoolBoy/ladder.bmp", 738, 264, 6, 1, true, RGB(255, 0, 255));				//奄嬢臣虞亜澗疑拙
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_run", "Resource/IMG/character/enemy/scoolBoy/run.bmp", 1920, 390, 10, 2, true, RGB(255, 0, 255));					//含軒奄
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_stun", "Resource/IMG/character/enemy/scoolBoy/Stun.bmp", 633, 408, 4, 2, true, RGB(255, 0, 255));					//什渡
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_transition", "Resource/IMG/character/enemy/scoolBoy/transition.bmp", 405, 183, 3, 1, true, RGB(255, 0, 255));		//奄嬢臣虞紳 板
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_upercut", "Resource/IMG/character/enemy/scoolBoy/upercut.bmp", 1386, 502, 7, 2, true, RGB(255, 0, 255));				//嬢遁墜
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_walk", "Resource/IMG/character/enemy/scoolBoy/Walk.bmp", 1620, 444, 12, 2, true, RGB(255, 0, 255));					//鞍奄
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_wAttack", "Resource/IMG/character/enemy/scoolBoy/WAttack.bmp", 1830, 660, 5, 2, true, RGB(255, 0, 255));				//巷奄 番却奄
//								 
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_weaponSwing", "Resource/IMG/character/enemy/scoolBoy/weapon_swing.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));	//巷奄 限澗 疑拙
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_weaponHit", "Resource/IMG/character/enemy/scoolBoy/weaponHit.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));		//巷奄 限精 疑拙
//								 
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_wIdle", "Resource/IMG/character/enemy/scoolBoy/WIdle.bmp", 1224, 552, 8, 2, true, RGB(255, 0, 255));					//巷奄 窮 雌殿
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_wJump", "Resource/IMG/character/enemy/scoolBoy/WJump.bmp", 432, 468, 3, 2, true, RGB(255, 0, 255));					//巷奄 繊覗
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_wRun", "Resource/IMG/character/enemy/scoolBoy/WRun.bmp", 2250, 516, 10, 2, true, RGB(255, 0, 255));					//巷奄 訓
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_wThrow", "Resource/IMG/character/enemy/scoolBoy/WThrow.bmp", 1752, 564, 8, 2, true, RGB(255, 0, 255));				//巷奄 揮走奄
//	IMAGEMANAGER->addFrameImage("SCHOOLBOY_wWalk", "Resource/IMG/character/enemy/scoolBoy/WWalk.bmp", 1572, 556, 12, 2, true, RGB(255, 0, 255));				//巷奄 級壱 鞍奄
//
//
//
//	//Resource/IMG/character/enemy/
//
//#pragma endregion SCHOOLBOYIMAGE
//
//#pragma region SCHOOLGIRL
//
//	//SCHOOLGIRLIMAGE
//
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_attack1", "Resource/IMG/character/enemy/schoolGirl/attack1.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));				//嬢澱1 赤澗戚政亜? 
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_backdown", "Resource/IMG/character/enemy/schoolGirl/backdown.bmp", 6939, 376, 27, 2, true, RGB(255, 0, 255));			//角嬢然陥 析嬢害
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_begging", "Resource/IMG/character/enemy/schoolGirl/begging.bmp", 378, 336, 3, 2, true, RGB(255, 0, 255));				//牌差
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_block", "Resource/IMG/character/enemy/schoolGirl/block.bmp", 351, 338, 3, 2, true, RGB(255, 0, 255));					//厳奄
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_comboAttack1", "Resource/IMG/character/enemy/schoolGirl/ComboAttack1.bmp", 1239, 354, 7, 2, true, RGB(255, 0, 255));	//爪左 嬢澱1
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_comboAttack2", "Resource/IMG/character/enemy/schoolGirl/ComboAttack2.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));	//爪左 嬢澱2
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_comboAttack3", "Resource/IMG/character/enemy/schoolGirl/ComboAttack3.bmp", 2412, 414, 12, 2, true, RGB(255, 0, 255));	//爪左 嬢澱3
//	
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_gethit", "Resource/IMG/character/enemy/schoolGirl/gethit.bmp", 1431, 360, 9, 2, true, RGB(255, 0, 255));				//杷維雁敗
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_heldHit", "Resource/IMG/character/enemy/schoolGirl/HeldHit.bmp", 576, 336, 4, 2, true, RGB(255, 0, 255));				//説微板 杷維雁敗
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_heldRelease", "Resource/IMG/character/enemy/schoolGirl/HeldRelease.bmp", 528, 360, 4, 2, true, RGB(255, 0, 255));		//説微暗 背薦
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_idle", "Resource/IMG/character/enemy/schoolGirl/idle.bmp", 1170, 354, 10, 2, true, RGB(255, 0, 255));					//奄沙
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_jump", "Resource/IMG/character/enemy/schoolGirl/jump.bmp", 342, 366, 3, 2, true, RGB(255, 0, 255));						//繊覗
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_jumpAttack", "Resource/IMG/character/enemy/schoolGirl/jumpAttack.bmp", 1197, 354, 7, 2, true, RGB(255, 0, 255));		//繊覗 因維
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_ladder", "Resource/IMG/character/enemy/schoolGirl/ladder.bmp", 594, 219, 6, 1, true, RGB(255, 0, 255));					//奄嬢臣虞亜奄
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_run", "Resource/IMG/character/enemy/schoolGirl/run.bmp", 1470, 330, 10, 2, true, RGB(255, 0, 255));						//含軒奄
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_stun", "Resource/IMG/character/enemy/schoolGirl/stun.bmp", 456, 324, 4, 2, true, RGB(255, 0, 255));						//什渡
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_transition", "Resource/IMG/character/enemy/schoolGirl/transition.bmp", 387, 168, 3, 1, true, RGB(255, 0, 255));			//奄嬢臣虞 紳 板
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_walk", "Resource/IMG/character/enemy/schoolGirl/walk.bmp", 1296, 372, 12, 2, true, RGB(255, 0, 255));					//鞍奄
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_wAttack", "Resource/IMG/character/enemy/schoolGirl/WAttack.bmp", 1580, 558, 5, 2, true, RGB(255, 0, 255));				//巷奄 嬢澱
//	
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_weapon_swing", "Resource/IMG/character/enemy/schoolGirl/weapon_swing.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));	//巷奄 什成 杷維雁拝獣
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_weaponHit", "Resource/IMG/character/enemy/schoolGirl/weaponHit.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));			//巷奄 杷維雁拝獣
//	
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_wIdle", "Resource/IMG/character/enemy/schoolGirl/WIdle.bmp", 1950, 408, 10, 2, true, RGB(255, 0, 255));					//巷奄 奄沙
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_wJump", "Resource/IMG/character/enemy/schoolGirl/WJump.bmp", 429, 450, 3, 2, true, RGB(255, 0, 255));					//巷奄 繊覗
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_wRun", "Resource/IMG/character/enemy/schoolGirl/WRun.bmp", 1880, 458, 10, 2, true, RGB(255, 0, 255));					//巷奄 含軒奄
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_wThrow", "Resource/IMG/character/enemy/schoolGirl/WThrow.bmp", 1488, 540, 8, 2, true, RGB(255, 0, 255));				//巷奄 揮走奄
//	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_wWalk", "Resource/IMG/character/enemy/schoolGirl/WWalk.bmp", 2232, 502, 12, 2, true, RGB(255, 0, 255));					//巷奄 鞍奄
//	
//#pragma endregion SCHOOLGIRL
//
//#pragma region ENEMY
//
//	//===============================================================格姥軒==========================================================================
//	//Resource/IMG/character/enemy/
//	//旋(督空事)
//	IMAGEMANAGER->addFrameImage("ENEMY_enemy1", "Resource/IMG/character/enemy/enemy1.bmp", 128, 128, 2, 2, true, RGB(255, 0, 255));
//	//旋(避事)
//	IMAGEMANAGER->addFrameImage("ENEMY_enemy2", "Resource/IMG/character/enemy/enemy2.bmp", 128, 128, 2, 2, true, RGB(255, 0, 255));
//	//旋(褐事)
//	IMAGEMANAGER->addFrameImage("ENEMY_enemy3", "Resource/IMG/character/enemy/enemy3.bmp", 128, 128, 2, 2, true, RGB(255, 0, 255));
//	//轟
//	IMAGEMANAGER->addFrameImage("ENEMY_snake", "Resource/IMG/character/enemy/snake.bmp", 144, 128, 2, 2, true, RGB(255, 0, 255));
//
//
//#pragma endregion ENEMY
//
//#pragma endregion ENEMYIMAGE
//
//#pragma region UI
//#pragma endregion ENEMYIMAGE
////
////#pragma region UI
//
//		//battle
//		//左什 HP 及
//	IMAGEMANAGER->addImage("BATTLE_bossHPBack", "Resource/IMG/ui/battle/boss_HP_back.bmp", 689, 120, true, RGB(255, 0, 255));
//
//	//左什 HP 覗傾績
//	IMAGEMANAGER->addImage("BATTLE_bossHPFrame", "Resource/IMG/ui/battle/boss_HP_frame.bmp", 898, 120, true, RGB(255, 0, 255));
//
//	//左什 HP 蒋
//	IMAGEMANAGER->addImage("BATTLE_bossHPFront", "Resource/IMG/ui/battle/boss_HP_front.bmp", 689, 120, true, RGB(255, 0, 255));
//
//	//坪昔
//	IMAGEMANAGER->addImage("BATTLE_coin", "Resource/IMG/ui/battle/coin.bmp", 36, 36, true, RGB(255, 0, 255));
//
//	//HP 廃牒
//	IMAGEMANAGER->addImage("BATTLE_HP", "Resource/IMG/ui/battle/HP_Point.bmp", 25, 23, true, RGB(255, 0, 255));
//
//	//什砺戚走 鉢檎 喰 焼掘
//	IMAGEMANAGER->addImage("BATTLE_stageChainBottom", "Resource/IMG/ui/battle/Stage_UI_Chain_Bottom.bmp", 1600, 43, true, RGB(255, 0, 255));
//
//	//什砺戚走 鉢檎 喰 図楕
//	IMAGEMANAGER->addImage("BATTLE_stageChainLeft", "Resource/IMG/ui/battle/Stage_UI_Chain_Left.bmp", 42, 900, true, RGB(255, 0, 255));
//
//	//什砺戚走 鉢檎 喰 神献楕
//	IMAGEMANAGER->addImage("BATTLE_stageChainRight", "Resource/IMG/ui/battle/Stage_UI_Chain_Right.bmp", 41, 900, true, RGB(255, 0, 255));
//
//	//什砺戚走 鉢檎 喰 是
//	IMAGEMANAGER->addImage("BATTLE_stageChainTop", "Resource/IMG/ui/battle/Stage_UI_Chain_Top.bmp", 1600, 43, true, RGB(255, 0, 255));
//
//	//什砺戚走 節榎獣 切弘取
//	IMAGEMANAGER->addFrameImage("BATTLE_lockAppear", "Resource/IMG/ui/battle/Stage_UI_Lock_Appear.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));
//
//	//什砺戚走 節榎獣 切弘取 凹像
//	IMAGEMANAGER->addFrameImage("BATTLE_lockDamage1", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage1.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));
//
//	//什砺戚走 節榎獣 切弘取 希 凹像
//	IMAGEMANAGER->addFrameImage("BATTLE_lockDamage2", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage2.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));
//
//	//什砺戚走 節榎獣 切弘取 遭促 凹像
//	IMAGEMANAGER->addFrameImage("BATTLE_lockDisappear", "Resource/IMG/ui/battle/Stage_UI_Lock_Disappear.bmp", 840, 130, 7, 1, true, RGB(255, 0, 255));
//
//	//馬闘 UI <- 惟績 神獄菊聖 凶 蟹神澗暗 旭精汽,.
//	IMAGEMANAGER->addImage("BATTLE_Heart", "Resource/IMG/ui/battle/UI_heart.bmp", 6400, 3600, true, RGB(255, 0, 255));
//
//	//巴傾戚嬢 覗稽琶
//	IMAGEMANAGER->addImage("BATTLE_playerPortrait", "Resource/IMG/ui/battle/UI_Kyoko_Portrait.bmp", 120, 135, true, RGB(255, 0, 255));
//
//	//巴傾戚嬢 UI郊
//	IMAGEMANAGER->addImage("BATTLE_playerBar", "Resource/IMG/ui/battle/UI_Player_bar.bmp", 414, 94, true, RGB(255, 0, 255));
//
//	//雌繊 妊獣-巴傾戚嬢 亜猿随 凶
//	IMAGEMANAGER->addImage("BATTLE_shopDoor1", "Resource/IMG/ui/battle/UI_Shop_Door1.bmp", 52, 45, true, RGB(255, 0, 255));
//
//	//雌繊 妊獣-巴傾戚嬢 菰 凶
//	IMAGEMANAGER->addImage("BATTLE_shopDoor2", "Resource/IMG/ui/battle/UI_Shop_Door2.bmp", 52, 45, true, RGB(255, 0, 255));
//
//	//庚 節沿 妊獣
//	IMAGEMANAGER->addImage("BATTLE_lockedDoor", "Resource/IMG/ui/battle/UI_Locked_Door.bmp", 52, 76, true, RGB(255, 0, 255));
//
//	//庚 伸顕-巴傾戚嬢 亜猿随 凶
//	IMAGEMANAGER->addImage("BATTLE_unlockDoor1", "Resource/IMG/ui/battle/UI_UnLocked_Door.bmp", 52, 76, true, RGB(255, 0, 255));
//
//	//庚 伸顕-巴傾戚嬢 菰 凶
//	IMAGEMANAGER->addImage("BATTLE_unlockDoor2", "Resource/IMG/ui/battle/UI_UnLocked_Door22.bmp", 52, 76, true, RGB(255, 0, 255));
//
//
//
//	//inven
//	//輩球肉
//	IMAGEMANAGER->addImage("INVEN_phone", "Resource/IMG/ui/inven/phone.bmp", 480, 642, true, RGB(255, 0, 255));
//
//	//号諺戚
//	IMAGEMANAGER->addImage("INVEN_bat", "Resource/IMG/ui/inven/ui_bat.bmp", 80, 79, true, RGB(255, 0, 255));
//
//
//
//	//scene
//	//什展闘樟 壕井
//	IMAGEMANAGER->addImage("SCENE_startSceneBackground", "Resource/IMG/ui/scene/StartScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));
//
//	//什展闘樟 覗傾績
//	IMAGEMANAGER->addImage("SCENE_startSceneFrame", "Resource/IMG/ui/scene/StartScene_Frame.bmp", 1600, 900, true, RGB(255, 0, 255));
//
//	//什展闘樟 底坪
//	IMAGEMANAGER->addImage("SCENE_startSceneKyoko", "Resource/IMG/ui/scene/StartScene_Kyoko.bmp", 672, 1024, true, RGB(255, 0, 255));
//
//	//什展闘樟 耕紫坪
//	IMAGEMANAGER->addImage("SCENE_startSceneMisako", "Resource/IMG/ui/scene/StartScene_Misako.bmp", 672, 1024, true, RGB(255, 0, 255));
//
//	//什展闘樟 展戚堂(薦鯉)
//	IMAGEMANAGER->addImage("SCENE_startSceneTitle", "Resource/IMG/ui/scene/StartScene_Title.bmp", 537, 308, true, RGB(255, 0, 255));
//
//	//稽漁樟
//	IMAGEMANAGER->addImage("SCENE_loadingScene", "Resource/IMG/ui/scene/LoadingScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));
//
//	//稽漁樟 酔著馬舘 什覗虞戚闘
//	IMAGEMANAGER->addFrameImage("SCENE_loadingSprite", "Resource/IMG/ui/scene/loadingSprite.bmp", 1152, 227, 4, 1, true, RGB(255, 0, 255));
//
//	//璽樟 壕井
//	IMAGEMANAGER->addImage("SCENE_shopBackground", "Resource/IMG/ui/scene/ShopScene_background.bmp", 1280, 720, true, RGB(255, 0, 255));
//
//	//璽樟 姥古 獄動
//	IMAGEMANAGER->addImage("SCENE_shopBuyButton", "Resource/IMG/ui/scene/ShopScene_buyButton.bmp", 145, 92, true, RGB(255, 0, 255));
//
//	//璽樟 焼戚奴 識澱梅聖凶-軒什闘
//	IMAGEMANAGER->addImage("SCENE_shopList", "Resource/IMG/ui/scene/ShopScene_list.bmp", 403, 168, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 急壕井
//	IMAGEMANAGER->addImage("SCENE_dialogWindow", "Resource/IMG/ui/scene/dialogWindow.bmp", 1280, 150, true, RGB(255, 0, 255));
//
//	//惟績 殖漁 舌檎-戚闇 呪舛背醤吃牛!!!!!!!!!!!!!!!!!!!!!!!!
//	IMAGEMANAGER->addImage("SCENE_endScene", "Resource/IMG/ui/scene/endScene.bmp", 1280, 720, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 巴傾戚嬢
//	IMAGEMANAGER->addImage("SCENE_kyoko1", "Resource/IMG/ui/scene/kyoko_1.bmp", 386, 460, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 巴傾戚嬢
//	IMAGEMANAGER->addImage("SCENE_kyoko2", "Resource/IMG/ui/scene/kyoko_2.bmp", 386, 460, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 巴傾戚嬢
//	IMAGEMANAGER->addImage("SCENE_kyoko3", "Resource/IMG/ui/scene/kyoko_3.bmp", 386, 460, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 巴傾戚嬢 戚硯
//	IMAGEMANAGER->addImage("SCENE_kyokoName", "Resource/IMG/ui/scene/kyoko_name.bmp", 200, 76, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 左什
//	IMAGEMANAGER->addImage("SCENE_misuzu1", "Resource/IMG/ui/scene/misuzu_1.bmp", 386, 460, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 左什
//	IMAGEMANAGER->addImage("SCENE_misuzu2", "Resource/IMG/ui/scene/misuzu_2.bmp", 386, 460, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 左什
//	IMAGEMANAGER->addImage("SCENE_misuzu3", "Resource/IMG/ui/scene/misuzu_3.bmp", 386, 460, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 左什 戚硯
//	IMAGEMANAGER->addImage("SCENE_misuzuName", "Resource/IMG/ui/scene/misuzu_name.bmp", 200, 76, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 什典 妊獣-傾球
//	IMAGEMANAGER->addImage("SCENE_skipOutlines1", "Resource/IMG/ui/scene/UI_skip_outlines_FULL.bmp", 206, 78, true, RGB(255, 0, 255));
//
//	//陥戚杖稽益 什典 妊獣-鉢戚闘
//	IMAGEMANAGER->addImage("SCENE_skipOutlines2", "Resource/IMG/ui/scene/misuzu_name.bmp", 206, 78, true, RGB(255, 0, 255));
//
//	//室戚崎 稽球
//	IMAGEMANAGER->addImage("SCENE_saveLoadClose1", "Resource/IMG/ui/scene/save_load_close.bmp", 365, 150, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addImage("SCENE_saveLoadOpen1", "Resource/IMG/ui/scene/save_load_open.bmp", 365, 150, true, RGB(255, 0, 255));
//
//	//室戚崎 稽球 歯督析
//	IMAGEMANAGER->addImage("SCENE_saveLoadClose2", "Resource/IMG/ui/scene/save_load_close0.bmp", 365, 150, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addImage("SCENE_saveLoadOpen2", "Resource/IMG/ui/scene/save_load_open0.bmp", 365, 150, true, RGB(255, 0, 255));
//
//	//室戚崎 稽球 什砺戚走1
//	IMAGEMANAGER->addImage("SCENE_saveLoadClose3", "Resource/IMG/ui/scene/save_load_close1.bmp", 365, 150, true, RGB(255, 0, 255));
//	IMAGEMANAGER->addImage("SCENE_saveLoadOpen3", "Resource/IMG/ui/scene/save_load_open1.bmp", 365, 150, true, RGB(255, 0, 255));
//
//	//蝶遣斗 漆刑闘樟 壕井 督空事
//	IMAGEMANAGER->addImage("SCENE_selectSceneBackground1", "Resource/IMG/ui/scene/SelectScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));
//
//	//蝶遣斗 漆刑闘樟 壕井 段系事
//	IMAGEMANAGER->addImage("SCENE_selectSceneBackground2", "Resource/IMG/ui/scene/SelectScene_background2.bmp", 1280, 720, true, RGB(255, 0, 255));
//
//	//漆刑闘樟 蝶遣斗 析君什闘
//	IMAGEMANAGER->addImage("SCENE_selectSceneIllust", "Resource/IMG/ui/scene/SelectScene_illust.bmp", 996, 1705, true, RGB(255, 0, 255));
//
//	//漆刑闘樟 底坪 識澱梅聖 凶
//	IMAGEMANAGER->addImage("SCENE_selectSceneKyoko1", "Resource/IMG/ui/scene/SelectScene_kyoko.bmp", 375, 675, true, RGB(255, 0, 255));
//	//照梅聖 凶
//	IMAGEMANAGER->addImage("SCENE_selectSceneKyoko2", "Resource/IMG/ui/scene/SelectScene_kyoko2.bmp", 375, 675, true, RGB(255, 0, 255));
//	//急壕井
//	IMAGEMANAGER->addImage("SCENE_selectSceneKyokoBackground", "Resource/IMG/ui/scene/SelectScene_kyoko_background.bmp", 360, 563, true, RGB(255, 0, 255));
//
//	//漆刑闘樟 耕紫坪 識澱梅聖 凶
//	IMAGEMANAGER->addImage("SCENE_selectSceneMisako1", "Resource/IMG/ui/scene/SelectScene_misako.bmp", 375, 675, true, RGB(255, 0, 255));
//	//照梅聖 凶
//	IMAGEMANAGER->addImage("SCENE_selectSceneMisako2", "Resource/IMG/ui/scene/SelectScene_misako2.bmp", 375, 675, true, RGB(255, 0, 255));
//	//急壕井
//	IMAGEMANAGER->addImage("SCENE_selectMisakoBackground", "Resource/IMG/ui/scene/SelectScene_misako_background.bmp", 360, 563, true, RGB(255, 0, 255));
//
//	//漆刑闘樟 五敢杖 獄動
//	IMAGEMANAGER->addImage("SCENE_selectSceneManualButton", "Resource/IMG/ui/scene/SelectScene_manualButton.bmp", 650, 173, true, RGB(255, 0, 255));
//
//#pragma endregion UI
//
//
//#pragma endregion IMAGESOURCES
//
//
//
//
//
//	  /////////////////紫錘球 社什///////////////
//#pragma region SFXSOURCE
////巴傾戚嬢 紫錘球
//#pragma region PLAYERSFX
////
////
////#pragma endregion IMAGESOURCES
//////
//////
//////
//////
//////
//////	  /////////////////紫錘球 社什///////////////
//////#pragma region SFXSOURCE
//////巴傾戚嬢 紫錘球
////#pragma region PLAYERSFX
////巷賢恢奄
//	SOUNDMANAGER->addSound("PLAYER_knee", "Resource/SFX/Player/DD2_knee.wav", false, false);
//
//	//宋嬢辞 恭嬢走澗社軒1
//	SOUNDMANAGER->addSound("PLAYER_death", "Resource/SFX/Player/player_death_pitfall.wav", false, false);
//
//
//	//鞍澗社軒1
//	SOUNDMANAGER->addSound("PLAYER_footStep1", "Resource/SFX/Player/player_footsteps_run_01.wav", false, false);
//	//鞍澗社軒2
//	SOUNDMANAGER->addSound("PLAYER_footStep2", "Resource/SFX/Player/player_footsteps_run_02.wav", false, false);
//	//鞍澗社軒3
//	SOUNDMANAGER->addSound("PLAYER_footStep3", "Resource/SFX/Player/player_footsteps_run_03.wav", false, false);
//
//
//
//	//限壱床君走澗社軒
//	SOUNDMANAGER->addSound("PLAYER_knockDown_01", "Resource/SFX/Player/gethit_knockdown_01.wav", false, false);
//
//	//厳奄
//	SOUNDMANAGER->addSound("PLAYER_block", "Resource/SFX/Player/player_block.wav", false, false);
//	//限紹聖�� 厳奄
//	SOUNDMANAGER->addSound("PLAYER_getHitBlock", "Resource/SFX/Player/player_gethit_blocked.wav", false, false);
//
//
//	//神牽澗社軒1
//	SOUNDMANAGER->addSound("PLAYER_climb1", "Resource/SFX/Player/player_climb_01.wav", false, false);
//	//神牽澗社軒2
//	SOUNDMANAGER->addSound("PLAYER_climb2", "Resource/SFX/Player/player_climb_02.wav", false, false);
//
//	//紫陥軒鎧形人辞 競拭願紹聖��
//	SOUNDMANAGER->addSound("PLAYER_climb_Down_Ledge", "Resource/SFX/Player/player_climb_down_ledge.wav", false, false);
//	//紫陥軒鎧形人辞 臣虞穐紹聖��
//	SOUNDMANAGER->addSound("PLAYER_climb_Up_Ledge", "Resource/SFX/Player/player_climb_up_ledge.wav", false, false);
//
//	//混説奄
//	SOUNDMANAGER->addSound("PLAYER_grabWall", "Resource/SFX/Player/player_grab_wall.wav", false, false);
//
//
//	//越稽降説奄
//	SOUNDMANAGER->addSound("PLAYER_global_Catch", "Resource/SFX/Player/player_global_catch.wav", false, false);
//	//説奄
//	SOUNDMANAGER->addSound("PLAYER_grab", "Resource/SFX/Player/player_grab.wav", false, false);
//
//
//	//什渡
//	SOUNDMANAGER->addSound("PLAYER_dizzy", "Resource/SFX/Player/player_global_dizzy.wav", false, false);
//	//背薦
//	SOUNDMANAGER->addSound("PLAYER_parry", "Resource/SFX/Player/player_global_parry.wav", false, false);
//
//
//
//	//巷暗錘巷奄級醸聖凶
//	SOUNDMANAGER->addSound("PLAYER_pickUpHeavy", "Resource/SFX/Player/player_global_pickup_weapon_heavy.wav", false, false);
//	//亜梱錘巷奄級醸聖凶
//	SOUNDMANAGER->addSound("PLAYER_pickUpLight", "Resource/SFX/Player/player_global_pickup_weapon_light.wav", false, false);
//	//巷暗錘巷奄揮然醸聖凶
//	SOUNDMANAGER->addSound("PLAYER_throwHeavy", "Resource/SFX/Player/player_global_throw_weapon_heavy.wav", false, false);
//	//亜梱錘巷奄揮然聖凶
//	SOUNDMANAGER->addSound("PLAYER_throwLight", "Resource/SFX/Player/player_global_throw_weapon_light.wav", false, false);
//
//
//	//繊覗
//	SOUNDMANAGER->addSound("PLAYER_jump", "Resource/SFX/Player/player_jump.wav", false, false);
//	//繊覗撤
//	SOUNDMANAGER->addSound("PLAYER_jumpKick", "Resource/SFX/Player/player_jump_kick.wav", false, false);
//	//繊覗呑帖
//	SOUNDMANAGER->addSound("PLAYER_jumpPunch", "Resource/SFX/Player/player_jump_punch.wav", false, false);
//	//噺穿撤
//	SOUNDMANAGER->addSound("PLAYER_rollKick", "Resource/SFX/Player/player_kyoko_roundhouse.wav", false, false);
//
//
//	//鐸走
//	SOUNDMANAGER->addSound("PLAYER_land", "Resource/SFX/Player/player_land.wav", false, false);
//
//
//
//	//什迭恭嬢走澗
//	SOUNDMANAGER->addSound("PLAYER_powerBomb_falling", "Resource/SFX/Player/player_misako_powerbomb_falling.wav", false, false);
//	//什迭鐸走
//	SOUNDMANAGER->addSound("PLAYER_powerBomb_landing", "Resource/SFX/Player/player_misako_powerbomb_landing.wav.wav", false, false);
//	//什迭獣拙
//	SOUNDMANAGER->addSound("PLAYER_powerBomb_StartUp", "Resource/SFX/Player/player_misako_powerbomb_startup.wav.wav", false, false);
//
//
//
//
//
//
//	//呑帖1
//	SOUNDMANAGER->addSound("PLAYER_punch1", "Resource/SFX/Player/player_punch_01.wav", false, false);
//	//呑帖2
//	SOUNDMANAGER->addSound("PLAYER_punch2", "Resource/SFX/Player/player_punch_02.wav", false, false);
//	//呑帖3
//	SOUNDMANAGER->addSound("PLAYER_punch3", "Resource/SFX/Player/player_punch_03.wav", false, false);
//
//	//揮走奄
//	SOUNDMANAGER->addSound("PLAYER_throw", "Resource/SFX/Player/player_throw.wav", false, false);
//
//#pragma endregion PLAYERSFX
//
//#pragma region MENUSFX
////
////#pragma region MENUSFX
//	SOUNDMANAGER->addSound("MENU_busUse", "Resource/SFX/menu/interface_bus_use.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_gameover", "Resource/SFX/menu/interface_game_over.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_mapMarker", "Resource/SFX/menu/interface_map_marker.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_wediditJingle", "Resource/SFX/menu/interface_wedidit_jingle.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_jingleMap1", "Resource/SFX/menu/jingle_map_01.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_jingleTutorial3", "Resource/SFX/menu/jingle_tutorial_03.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_levelUp", "Resource/SFX/menu/level_up_sequence.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_accessoryEquip", "Resource/SFX/menu/menu_accesory_equip.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_accessoryUnequip", "Resource/SFX/menu/menu_accesory_unequip.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_back", "Resource/SFX/menu/menu_back.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_cannot", "Resource/SFX/menu/menu_cannot.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_confirm", "Resource/SFX/menu/menu_confirm.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_cursor", "Resource/SFX/menu/menu_cursor.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_emptyAccessory", "Resource/SFX/menu/menu_empty_accessory.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_interact", "Resource/SFX/menu/menu_interact.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneBack", "Resource/SFX/menu/menu_phone_back2.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneCursor1", "Resource/SFX/menu/menu_phone_cursor_01.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneCursor2", "Resource/SFX/menu/menu_phone_cursor_02.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneCursor3", "Resource/SFX/menu/menu_phone_cursor_03.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phonePause", "Resource/SFX/menu/menu_phone_pause.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneRotate", "Resource/SFX/menu/menu_phone_rotate.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneSelect", "Resource/SFX/menu/menu_phone_select3.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneSliderTick", "Resource/SFX/menu/menu_phone_slider_tick.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_phoneUnpause", "Resource/SFX/menu/menu_phone_unpause.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_playerSelectFirst", "Resource/SFX/menu/menu_player_select_first.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_playerSelectLast", "Resource/SFX/menu/menu_player_select_last.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_notification", "Resource/SFX/menu/notification.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_uiChainsAppear", "Resource/SFX/menu/UI_chains_appear.wav", true, false);
//	SOUNDMANAGER->addSound("MENU_uiChainsBreak", "Resource/SFX/menu/UI_chains_break.wav", true, false);
//#pragma endregion MENUSFX
//
//#pragma region GLOBAL & PICKUP
//
//	//左什 適軒嬢
//	SOUNDMANAGER->addSound("GLOBAL_bossFinal", "Resource/SFX/global/boss_finalhit.wav", true, true);
//	//左什 獣拙
//	SOUNDMANAGER->addSound("GLOBAL_bossIntro", "Resource/SFX/global/boss_intro_placard", true, true);
//	//五敢製据
//	//Resource/SFX/menu/
//
//	//巷奄製据
//	//Resource/SFX/weapons/
//
//	//掃澗 波穣製据
//	//Resource/SFX/pickup/
//	//柔究 災亜
//	SOUNDMANAGER->addSound("PICKUP_cannot", "Resource/SFX/pickup/cannot_pickup.wav", true, true);
//	//亀穿 壱薦 焼戚奴 降胃
//	SOUNDMANAGER->addSound("PICKUP_confirm", "Resource/SFX/pickup/interface_item_pickup_confirm.wav", true, true);
//	//亀穿 引薦 焼戚奴 塙究
//	SOUNDMANAGER->addSound("PICKUP_intro", "Resource/SFX/pickup/interface_item_pickup_intro.wav", true, true);
//	//焼戚奴 昔闘稽 魁
//	SOUNDMANAGER->addSound("PICKUP_outro", "Resource/SFX/pickup/interface_item_pickup_outro.wav", true, true);
//	//短姥辞 柔究
//	SOUNDMANAGER->addSound("PICKUP_bill", "Resource/SFX/pickup/pickup_bill.wav", true, true);
//	//陥原壱帖 楢1
//	SOUNDMANAGER->addSound("PICKUP_cat1", "Resource/SFX/pickup/pickup_cat_01.wav", true, true);
//	//陥原壱帖 楢2
//	SOUNDMANAGER->addSound("PICKUP_cat2", "Resource/SFX/pickup/pickup_cat_02.wav", true, true);
//	//陥原壱帖 楢3
//	SOUNDMANAGER->addSound("PICKUP_cat3", "Resource/SFX/pickup/pickup_cat_03.wav", true, true);
//	//袴艦 柔究
//	SOUNDMANAGER->addSound("PICKUP_coin", "Resource/SFX/pickup/pickup_coin.wav", true, true);
//	//製縦 柔究
//	SOUNDMANAGER->addSound("PICKUP_food", "Resource/SFX/pickup/pickup_food.wav", true, true);
//	//鉦 柔究
//	SOUNDMANAGER->addSound("PICKUP_med", "Resource/SFX/pickup/pickup_med_01.wav", true, true);
//
//#pragma endregion GLOBAL & PICKUP
//
//#pragma region ENVIRONMENT
////
////#pragma region GLOBAL & PICKUP
////
////	//左什 適軒嬢
////	SOUNDMANAGER->addSound("GLOBAL_bossFinal", "Resource/SFX/global/boss_finalhit.wav", true, true);
////	//左什 獣拙
////	SOUNDMANAGER->addSound("GLOBAL_bossIntro", "Resource/SFX/global/boss_intro_placard", true, true);
////	//五敢製据
////	//Resource/SFX/menu/
////
////	//巷奄製据
////	//Resource/SFX/weapons/
////
////	//掃澗 波穣製据
////	//Resource/SFX/pickup/
////	//柔究 災亜
////	SOUNDMANAGER->addSound("PICKUP_cannot", "Resource/SFX/pickup/cannot_pickup.wav", true, true);
////	//亀穿 壱薦 焼戚奴 降胃
////	SOUNDMANAGER->addSound("PICKUP_confirm", "Resource/SFX/pickup/interface_item_pickup_confirm.wav", true, true);
////	//亀穿 引薦 焼戚奴 塙究
////	SOUNDMANAGER->addSound("PICKUP_intro", "Resource/SFX/pickup/interface_item_pickup_intro.wav", true, true);
////	//焼戚奴 昔闘稽 魁
////	SOUNDMANAGER->addSound("PICKUP_outro", "Resource/SFX/pickup/interface_item_pickup_outro.wav", true, true);
////	//短姥辞 柔究
////	SOUNDMANAGER->addSound("PICKUP_bill", "Resource/SFX/pickup/pickup_bill.wav", true, true);
////	//陥原壱帖 楢1
////	SOUNDMANAGER->addSound("PICKUP_cat1", "Resource/SFX/pickup/pickup_cat_01.wav", true, true);
////	//陥原壱帖 楢2
////	SOUNDMANAGER->addSound("PICKUP_cat2", "Resource/SFX/pickup/pickup_cat_02.wav", true, true);
////	//陥原壱帖 楢3
////	SOUNDMANAGER->addSound("PICKUP_cat3", "Resource/SFX/pickup/pickup_cat_03.wav", true, true);
////	//袴艦 柔究
////	SOUNDMANAGER->addSound("PICKUP_coin", "Resource/SFX/pickup/pickup_coin.wav", true, true);
////	//製縦 柔究
////	SOUNDMANAGER->addSound("PICKUP_food", "Resource/SFX/pickup/pickup_food.wav", true, true);
////	//鉦 柔究
////	SOUNDMANAGER->addSound("PICKUP_med", "Resource/SFX/pickup/pickup_med_01.wav", true, true);
////
////#pragma endregion GLOBAL & PICKUP
////
////#pragma region ENVIRONMENT
//
//	//坤帖 採偲
//	SOUNDMANAGER->addSound("ENVIRONMENT_benchBreak", "Resource/SFX/environment/environment_bench_break.wav", true, false);
//
//	//鉢俳叔 奪雌 採偲
//	SOUNDMANAGER->addSound("ENVIRONMENT_chemistryTableBreak", "Resource/SFX/environment/environment_chemistry_table_break.wav", true, false);
//
//	//蟹巷 採偲
//	SOUNDMANAGER->addSound("ENVIRONMENT_woodSmash", "Resource/SFX/environment/environment_wood_smash.wav", true, false);
//	SOUNDMANAGER->addSound("ENVIRONMENT_woodCrunch", "Resource/SFX/environment/environment_wood_crunch.wav", true, false);
//
//	//宜 採偲
//	SOUNDMANAGER->addSound("ENVIRONMENT_rockSmash", "Resource/SFX/environment/environment_rock_smash.wav", true, false);
//	SOUNDMANAGER->addSound("ENVIRONMENT_rockCrunch", "Resource/SFX/environment/environment_rock_crunch.wav", true, false);
//
//	//切毒奄 採偲
//	SOUNDMANAGER->addSound("ENVIRONMENT_vendingmachinePunched", "Resource/SFX/environment/environment_vending_machine_punched.wav", true, false);
//	SOUNDMANAGER->addSound("ENVIRONMENT_vendingmachineBreak", "Resource/SFX/environment/environment_vending_machine_break.wav", true, false);
//
//	//床傾奄搭 丸毘
//	SOUNDMANAGER->addSound("ENVIRONMENT_dumpsterClose", "Resource/SFX/environment/environment_dumpster_close.wav", true, false);
//
//	//床傾奄搭 伸顕
//	SOUNDMANAGER->addSound("ENVIRONMENT_dumpsterOpen", "Resource/SFX/environment/environment_dumpster_open.wav", true, false);
//
//	//穿奄 郊韓
//	SOUNDMANAGER->addSound("ENVIRONMENT_electricfloorOn", "Resource/SFX/environment/environment_electricfloor_on.wav", true, false);
//
//	//賑降弘 朝錘闘 陥錘
//	SOUNDMANAGER->addSound("ENVIRONMENT_explosivesCountdownBeep", "Resource/SFX/environment/environment_explosives_countdown_beep.wav", true, false);
//
//	//賑降弘 朝錘闘 陥錘 欠覗..? - 照承暗旭製
//	SOUNDMANAGER->addSound("ENVIRONMENT_explosivesCountdownBeepLoop", "Resource/SFX/environment/environment_explosives_idle_beep_loop.wav", true, true);
//
//	//賑降弘 賑降
//	SOUNDMANAGER->addSound("ENVIRONMENT_explosivesExplode", "Resource/SFX/environment/environment_explosives_explode.wav", true, false);
//	SOUNDMANAGER->addSound("ENVIRONMENT_explosivesExplodePlant", "Resource/SFX/environment/environment_explosives_plant.wav", true, false);
//
//	//賑降弘 賑降 板 戚誤
//	SOUNDMANAGER->addSound("ENVIRONMENT_explosivesRinging", "Resource/SFX/environment/environment_explosives_ringing.wav", true, false);
//
//	//舌貝姶 喚顕
//	SOUNDMANAGER->addSound("ENVIRONMENT_toysSqueek", "Resource/SFX/environment/environment_pattinson_toys_squeek.wav", true, false);
//
//	//朝五虞 覗稽詮斗 欠覗
//	SOUNDMANAGER->addSound("ENVIRONMENT_projectorLoop", "Resource/SFX/environment/environment_projector_loop.wav", true, false);
//
//#pragma endregion ENVIRONMENT
//
//#pragma endregion SFXSOURCE
////
////#pragma endregion SFXSOURCE




	return S_OK;
}