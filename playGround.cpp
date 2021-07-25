#include "pch.h"
#include "playGround.h"

#define STR 128


playGround::playGround()
{
}


playGround::~playGround()
{
	//爽汐坦軒研 馬切. 嬢辞 察軒 馬切. 
	//    adwdvvvsc
	// git Desktop push
	// dsfwfdsf
}

//穣汽戚闘 砺什闘 焼焼焼焼!
//朕行 砺什闘
// git desttop Test

//段奄鉢澗 食奄拭陥 背虞!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	// 爽汐 戚廃紺 脊艦陥
	SCENEMANAGER->addScene("什展樟", new soundTest);
	SCENEMANAGER->changeScene("什展樟");

	SOUNDMANAGER->init();

	//ししししししし 爽推 昔弘 ししししししし//
	//*{

	//巴傾戚嬢 戚耕走 井稽
	//Resource/IMG/character/player/

	//旋浦 戚耕走 井稽
	//Resource/IMG/character/enemy/

	//NPC 戚耕走 井稽
	//Resource/IMG/character/npc/

	//}*/

	//ししししししし 反引  ししししししし//
	//*{

	//反引
	//Resource/IMG/effect
	//乞窮 杷維
	IMAGEMANAGER->addFrameImage("attack", "Resource/IMG/effect/attack.bmp", 612, 196, 3, 1, true, RGB(255, 0, 255));
	//蕉格耕 牌差
	IMAGEMANAGER->addFrameImage("beg", "Resource/IMG/effect/beg.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
	//煽什闘 亜球
	IMAGEMANAGER->addFrameImage("blueAttack", "Resource/IMG/effect/blueAttack.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
	//左什 企獣獣拙繊
	IMAGEMANAGER->addFrameImage("BossDash", "Resource/IMG/effect/Boss dash.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("BossHowling", "Resource/IMG/effect/Boss howling.bmp", 1821, 165, 8, 1, true, RGB(255, 0, 255));
	//左什 号嬢
	IMAGEMANAGER->addFrameImage("BossHowling2", "Resource/IMG/effect/Boss howling2.bmp", 416, 208, 2, 1, true, RGB(255, 0, 255));
	//左什 繊覗 因維 frameY(2)
	IMAGEMANAGER->addFrameImage("BossMeteor", "Resource/IMG/effect/Boss meteor.bmp", 1620, 640, 4, 2, true, RGB(255, 0, 255));
	//左什 繊覗 因維
	IMAGEMANAGER->addFrameImage("BossMeteor2", "Resource/IMG/effect/Boss meteor2.bmp", 2424, 320, 6, 1, true, RGB(255, 0, 255));
	//左什 虞什闘 凪戚綜
	IMAGEMANAGER->addFrameImage("BossPhase1", "Resource/IMG/effect/Boss phase1.bmp", 299, 82, 3, 1, true, RGB(255, 0, 255));
	//左什 趣希嬢澱 杷維
	IMAGEMANAGER->addFrameImage("BossSmash", "Resource/IMG/effect/Boss smash.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("BossStand", "Resource/IMG/effect/Boss stand.bmp", 607, 55, 8, 1, true, RGB(255, 0, 255));
	//郊韓液伸 1腰
	IMAGEMANAGER->addFrameImage("BossStand2", "Resource/IMG/effect/Boss stand2.bmp", 3390, 144, 7, 1, true, RGB(255, 0, 255));
	//奄逆 督雨(繊覗)
	IMAGEMANAGER->addFrameImage("boss_effect5", "Resource/IMG/effect/boss_effect5.bmp", 800, 90, 7, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("crush", "Resource/IMG/effect/crush.bmp", 190, 193, 1, 1, true, RGB(255, 0, 255));
	//奄逆 督雨(趣希)
	IMAGEMANAGER->addFrameImage("dashAttackEffect", "Resource/IMG/effect/dashAttackEffect.bmp", 400, 45, 7, 1, true, RGB(255, 0, 255));
	//煽什闘 亜球
	IMAGEMANAGER->addFrameImage("effecBlue", "Resource/IMG/effect/effec_blue.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("effectSpark", "Resource/IMG/effect/effect_spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("effectStar", "Resource/IMG/effect/effect_star.bmp", 900, 60, 15, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("etBoomBig", "Resource/IMG/effect/et_boom_big.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("explosion", "Resource/IMG/effect/explosion.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
	//??(左什 企獣獣拙繊 掻淡)
	IMAGEMANAGER->addFrameImage("explosion1", "Resource/IMG/effect/explosion1.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("explosion2", "Resource/IMG/effect/explosion2.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
	//郊韓液伸 2腰
	IMAGEMANAGER->addFrameImage("groundbreak", "Resource/IMG/effect/groundbreak.bmp", 256, 128, 1, 1, true, RGB(255, 0, 255));
	//切毒奄 督雨
	IMAGEMANAGER->addFrameImage("objBreak", "Resource/IMG/effect/obj break.bmp", 3304, 248, 14, 1, true, RGB(255, 0, 255));
	//巴傾戚嬢 昔縦
	IMAGEMANAGER->addFrameImage("point", "Resource/IMG/effect/point.bmp", 560, 70, 8, 1, true, RGB(255, 0, 255));
	//巴傾戚嬢 霜爽 frameY(2)
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/effect/run.bmp", 2544, 246, 12, 2, true, RGB(255, 0, 255));
	//疎著 霜爽
	IMAGEMANAGER->addFrameImage("runL", "Resource/IMG/effect/runL.bmp", 2784, 126, 12, 1, true, RGB(255, 0, 255));
	//酔著 霜爽
	IMAGEMANAGER->addFrameImage("runR", "Resource/IMG/effect/runR.bmp", 2544, 123, 12, 1, true, RGB(255, 0, 255));
	//疑戸嘘七
	IMAGEMANAGER->addFrameImage("shake", "Resource/IMG/effect/shake.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("spark", "Resource/IMG/effect/spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("star", "Resource/IMG/effect/star.bmp", 1350, 90, 15, 1, true, RGB(255, 0, 255));
	//奄箭
	IMAGEMANAGER->addFrameImage("stun", "Resource/IMG/effect/stun.bmp", 420, 54, 6, 1, true, RGB(255, 0, 255));
	//}*/



	//ししししししし 焼戚奴 & 神崎詮闘 ししししししし//
	//*{

	//焼戚奴
	//Resource/IMG/item
	//硝稽拭
	IMAGEMANAGER->addImage("aloe", "Resource/IMG/item/aloe.bmp", 50, 76, true, RGB(255, 0, 255));
	//倍獄暗
	IMAGEMANAGER->addImage("hamburger", "Resource/IMG/item/hamburger.bmp", 64, 55, true, RGB(255, 0, 255));
	//焼戚什滴顕
	IMAGEMANAGER->addImage("icecream", "Resource/IMG/item/icecream.bmp", 55, 70, true, RGB(255, 0, 255));
	//儀猿什
	IMAGEMANAGER->addImage("meat", "Resource/IMG/item/meat.bmp", 60, 51, true, RGB(255, 0, 255));
	//歯酔蕩沿
	IMAGEMANAGER->addImage("tempura", "Resource/IMG/item/tempura.bmp", 58, 60, true, RGB(255, 0, 255));

	//神崎詮闘
	//Resource/IMG/object
	//紫引
	IMAGEMANAGER->addImage("apple", "Resource/IMG/object/apple.bmp", 100, 100, true, RGB(255, 0, 255));
	//厩呪
	IMAGEMANAGER->addImage("chili", "Resource/IMG/object/chili.bmp", 100, 100, true, RGB(255, 0, 255));
	//帖轍
	IMAGEMANAGER->addImage("hen", "Resource/IMG/object/hen.bmp", 100, 100, true, RGB(255, 0, 255));
	//奪雌
	IMAGEMANAGER->addImage("desk", "Resource/IMG/object/desk.bmp", 147, 162, true, RGB(255, 0, 255));
	//嘘紫 奪雌
	IMAGEMANAGER->addImage("teachers_desk", "Resource/IMG/object/teachers_desk.bmp", 83, 34, true, RGB(255, 0, 255));
	//砺戚鷺
	IMAGEMANAGER->addImage("table", "Resource/IMG/object/table.bmp", 339, 162, true, RGB(255, 0, 255));
	//随展軒
	IMAGEMANAGER->addImage("fence", "Resource/IMG/object/fence.bmp", 476, 71, true, RGB(255, 0, 255));
	//奄逆 督畷1
	IMAGEMANAGER->addImage("particle_1", "Resource/IMG/object/pillar_particle_1.bmp", 64, 64, true, RGB(255, 0, 255));
	//奄逆 督畷2																					 
	IMAGEMANAGER->addImage("particle_2", "Resource/IMG/object/pillar_particle_2.bmp", 64, 64, true, RGB(255, 0, 255));
	//奄逆 督畷3																					
	IMAGEMANAGER->addImage("particle_3", "Resource/IMG/object/pillar_particle_3.bmp", 64, 64, true, RGB(255, 0, 255));
	//疑穿
	IMAGEMANAGER->addFrameImage("gold", "Resource/IMG/object/gold_coin_spin.bmp", 512, 512, 4, 4, true, RGB(255, 0, 255));
	//走二
	IMAGEMANAGER->addFrameImage("money", "Resource/IMG/object/money_green.bmp", 576, 432, 4, 4, true, RGB(255, 0, 255));
	//板号 奄逆
	IMAGEMANAGER->addFrameImage("back_pillar", "Resource/IMG/object/pillar.bmp", 390, 678, 2, 1, true, RGB(255, 0, 255));
	//穿号 奄逆
	IMAGEMANAGER->addFrameImage("first_pillar", "Resource/IMG/object/pillar_big.bmp", 390, 957, 2, 1, true, RGB(255, 0, 255));
	//社随
	IMAGEMANAGER->addFrameImage("pet", "Resource/IMG/object/pet.bmp", 576, 96, 6, 1, true, RGB(255, 0, 255));
	//号諺戚
	IMAGEMANAGER->addFrameImage("bat", "Resource/IMG/object/bat.bmp", 179, 104, 1, 2, true, RGB(255, 0, 255));
	//切毒奄
	IMAGEMANAGER->addFrameImage("vendingMachine", "Resource/IMG/object/vendingMachine.bmp", 525, 260, 2, 1, true, RGB(255, 0, 255));
	//}*/


	//ししししししし 什砺戚走 & UI ししししししし//
	//*{

	//什砺戚走
	//Resource/IMG/stage
	IMAGEMANAGER->addImage("boss1", "Resource/IMG/stage/boss1.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("boss2", "Resource/IMG/stage/boss2.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("easy", "Resource/IMG/stage/easy.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("hard", "Resource/IMG/stage/hard.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("normal", "Resource/IMG/stage/normal.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	//UI
	//Resource/IMG/ui

	//}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//ししししししし 製据 ししししししし//
	//*{

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

	//}*/

#pragma endregion SFXPATH

	//========================戚耕走 社什======================
#pragma region IMAGESOURCES
//巴傾戚嬢 戚耕走
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma endregion IMAGESOURCES





	  /////////////////紫錘球 社什///////////////
#pragma region SFXSOURCE
//巴傾戚嬢 紫錘球
#pragma region PLAYERSFX



#pragma endregion PLAYERSFX


#pragma endregion SFXSOURCE






	return S_OK;
}

//五乞軒 背薦澗 食奄陥 背虞!!!!
void playGround::release()
{
	gameNode::release();
}

//尻至坦軒澗 食奄陥亜!
void playGround::update()
{
	gameNode::update();

	SCENEMANAGER->update();
	SOUNDMANAGER->update();
}

//食奄陥 益形操虞!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============是拭澗 薦降 闇球軒走 原虞 ============
	
	IMAGEMANAGER->render("壕井", getMemDC(), 0, 0);


	SCENEMANAGER->render();

	//TIMEMANAGER->render(getMemDC());

	//=============== 購拭亀 闇級走原虞 ================
	_backBuffer->render(getHDC(), 0, 0);

}

