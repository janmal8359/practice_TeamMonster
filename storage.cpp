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
	
		//battle
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
		IMAGEMANAGER->addFrameImage("lockAppear", "Resource/IMG/ui/battle/Stage_UI_Lock_Appear.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取 凹像
		IMAGEMANAGER->addFrameImage("lockDamage1", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage1.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取 希 凹像
		IMAGEMANAGER->addFrameImage("lockDamage2", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage2.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

		//什砺戚走 節榎獣 切弘取 遭促 凹像
		IMAGEMANAGER->addFrameImage("lockDisappear", "Resource/IMG/ui/battle/Stage_UI_Lock_Disappear.bmp", 840, 130, 7, 1, true, RGB(255, 0, 255));

		//馬闘 UI <- 惟績 神獄菊聖 凶 蟹神澗暗 旭精汽,.
		IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_heart.bmp", 6400, 3600, true, RGB(255, 0, 255));

		//巴傾戚嬢 覗稽琶
		IMAGEMANAGER->addImage("playerPortrait", "Resource/IMG/ui/battle/UI_Kyoko_Portrait.bmp", 120, 135, true, RGB(255, 0, 255));

		//巴傾戚嬢 UI郊
		IMAGEMANAGER->addImage("playerBar", "Resource/IMG/ui/battle/UI_Player_bar.bmp", 414, 94, true, RGB(255, 0, 255));

		//雌繊 妊獣-巴傾戚嬢 亜猿随 凶
		IMAGEMANAGER->addImage("shopDoor1", "Resource/IMG/ui/battle/UI_Shop_Door1.bmp", 52, 45, true, RGB(255, 0, 255));

		//雌繊 妊獣-巴傾戚嬢 菰 凶
		IMAGEMANAGER->addImage("shopDoor2", "Resource/IMG/ui/battle/UI_Shop_Door2.bmp", 52, 45, true, RGB(255, 0, 255));

		//庚 節沿 妊獣
		IMAGEMANAGER->addImage("lockedDoor", "Resource/IMG/ui/battle/UI_Locked_Door.bmp", 52, 76, true, RGB(255, 0, 255));

		//庚 伸顕-巴傾戚嬢 亜猿随 凶
		IMAGEMANAGER->addImage("unlockDoor1", "Resource/IMG/ui/battle/UI_UnLocked_Door.bmp", 52, 76, true, RGB(255, 0, 255));

		//庚 伸顕-巴傾戚嬢 菰 凶
		IMAGEMANAGER->addImage("unlockDoor2", "Resource/IMG/ui/battle/UI_UnLocked_Door22.bmp", 52, 76, true, RGB(255, 0, 255));



		//inven
		//輩球肉
		IMAGEMANAGER->addImage("phone", "Resource/IMG/ui/inven/phone.bmp", 480, 642, true, RGB(255, 0, 255));

		//号諺戚
		IMAGEMANAGER->addImage("bat", "Resource/IMG/ui/inven/ui_bat.bmp", 80, 79, true, RGB(255, 0, 255));



		//scene
		//什展闘樟 壕井
		IMAGEMANAGER->addImage("startSceneBackground", "Resource/IMG/ui/scene/StartScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

		//什展闘樟 覗傾績
		IMAGEMANAGER->addImage("startSceneFrame", "Resource/IMG/ui/scene/StartScene_Frame.bmp", 1600, 900, true, RGB(255, 0, 255));

		//什展闘樟 底坪
		IMAGEMANAGER->addImage("startSceneKyoko", "Resource/IMG/ui/scene/StartScene_Kyoko.bmp", 672, 1024, true, RGB(255, 0, 255));

		//什展闘樟 耕紫坪
		IMAGEMANAGER->addImage("startSceneMisako", "Resource/IMG/ui/scene/StartScene_Misako.bmp", 672, 1024, true, RGB(255, 0, 255));

		//什展闘樟 展戚堂(薦鯉)
		IMAGEMANAGER->addImage("startSceneTitle", "Resource/IMG/ui/scene/StartScene_Title.bmp", 537, 308, true, RGB(255, 0, 255));

		//稽漁樟
		IMAGEMANAGER->addImage("loadingScene", "Resource/IMG/ui/scene/LoadingScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

		//稽漁樟 酔著馬舘 什覗虞戚闘
		IMAGEMANAGER->addFrameImage("loadingSprite", "Resource/IMG/ui/scene/loadingSprite.bmp", 1152, 227, 4, 1, true, RGB(255, 0, 255));

		//璽樟 壕井
		IMAGEMANAGER->addImage("shopBackground", "Resource/IMG/ui/scene/ShopScene_background.bmp", 1280, 720, true, RGB(255, 0, 255));

		//璽樟 姥古 獄動
		IMAGEMANAGER->addImage("shopBuyButton", "Resource/IMG/ui/scene/ShopScene_buyButton.bmp", 145, 92, true, RGB(255, 0, 255));

		//璽樟 焼戚奴 識澱梅聖凶-軒什闘
		IMAGEMANAGER->addImage("shopList", "Resource/IMG/ui/scene/ShopScene_list.bmp", 403, 168, true, RGB(255, 0, 255));

		//陥戚杖稽益 急壕井
		IMAGEMANAGER->addImage("dialogWindow", "Resource/IMG/ui/scene/dialogWindow.bmp", 1280, 150, true, RGB(255, 0, 255));

		//惟績 殖漁 舌檎-戚闇 呪舛背醤吃牛!!!!!!!!!!!!!!!!!!!!!!!!
		IMAGEMANAGER->addImage("endScene", "Resource/IMG/ui/scene/endScene.bmp", 1280, 720, true, RGB(255, 0, 255));

		//陥戚杖稽益 巴傾戚嬢
		IMAGEMANAGER->addImage("kyoko1", "Resource/IMG/ui/scene/kyoko_1.bmp", 386, 460, true, RGB(255, 0, 255));

		//陥戚杖稽益 巴傾戚嬢
		IMAGEMANAGER->addImage("kyoko2", "Resource/IMG/ui/scene/kyoko_2.bmp", 386, 460, true, RGB(255, 0, 255));

		//陥戚杖稽益 巴傾戚嬢
		IMAGEMANAGER->addImage("kyoko3", "Resource/IMG/ui/scene/kyoko_3.bmp", 386, 460, true, RGB(255, 0, 255));

		//陥戚杖稽益 巴傾戚嬢 戚硯
		IMAGEMANAGER->addImage("kyokoName", "Resource/IMG/ui/scene/kyoko_name.bmp", 200, 76, true, RGB(255, 0, 255));

		//陥戚杖稽益 左什
		IMAGEMANAGER->addImage("misuzu1", "Resource/IMG/ui/scene/misuzu_1.bmp", 386, 460, true, RGB(255, 0, 255));

		//陥戚杖稽益 左什
		IMAGEMANAGER->addImage("misuzu2", "Resource/IMG/ui/scene/misuzu_2.bmp", 386, 460, true, RGB(255, 0, 255));

		//陥戚杖稽益 左什
		IMAGEMANAGER->addImage("misuzu3", "Resource/IMG/ui/scene/misuzu_3.bmp", 386, 460, true, RGB(255, 0, 255));

		//陥戚杖稽益 左什 戚硯
		IMAGEMANAGER->addImage("misuzuName", "Resource/IMG/ui/scene/misuzu_name.bmp", 200, 76, true, RGB(255, 0, 255));

		//陥戚杖稽益 什典 妊獣-傾球
		IMAGEMANAGER->addImage("skipOutlines1", "Resource/IMG/ui/scene/UI_skip_outlines_FULL.bmp", 206, 78, true, RGB(255, 0, 255));

		//陥戚杖稽益 什典 妊獣-鉢戚闘
		IMAGEMANAGER->addImage("skipOutlines2", "Resource/IMG/ui/scene/misuzu_name.bmp", 206, 78, true, RGB(255, 0, 255));

		//室戚崎 稽球
		IMAGEMANAGER->addImage("saveLoadClose1", "Resource/IMG/ui/scene/save_load_close.bmp", 365, 150, true, RGB(255, 0, 255));
		IMAGEMANAGER->addImage("saveLoadOpen1", "Resource/IMG/ui/scene/save_load_open.bmp", 365, 150, true, RGB(255, 0, 255));

		//室戚崎 稽球 歯督析
		IMAGEMANAGER->addImage("saveLoadClose2", "Resource/IMG/ui/scene/save_load_close0.bmp", 365, 150, true, RGB(255, 0, 255));
		IMAGEMANAGER->addImage("saveLoadOpen2", "Resource/IMG/ui/scene/save_load_open0.bmp", 365, 150, true, RGB(255, 0, 255));

		//室戚崎 稽球 什砺戚走1
		IMAGEMANAGER->addImage("saveLoadClose3", "Resource/IMG/ui/scene/save_load_close1.bmp", 365, 150, true, RGB(255, 0, 255));
		IMAGEMANAGER->addImage("saveLoadOpen3", "Resource/IMG/ui/scene/save_load_open1.bmp", 365, 150, true, RGB(255, 0, 255));

		//蝶遣斗 漆刑闘樟 壕井 督空事
		IMAGEMANAGER->addImage("selectSceneBackground1", "Resource/IMG/ui/scene/SelectScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));
		
		//蝶遣斗 漆刑闘樟 壕井 段系事
		IMAGEMANAGER->addImage("selectSceneBackground2", "Resource/IMG/ui/scene/SelectScene_background2.bmp", 1280, 720, true, RGB(255, 0, 255));

		//漆刑闘樟 蝶遣斗 析君什闘
		IMAGEMANAGER->addImage("selectSceneIllust", "Resource/IMG/ui/scene/SelectScene_illust.bmp", 996, 1705, true, RGB(255, 0, 255));

		//漆刑闘樟 底坪 識澱梅聖 凶
		IMAGEMANAGER->addImage("selectSceneKyoko1", "Resource/IMG/ui/scene/SelectScene_kyoko.bmp", 375, 675, true, RGB(255, 0, 255));
		//照梅聖 凶
		IMAGEMANAGER->addImage("selectSceneKyoko2", "Resource/IMG/ui/scene/SelectScene_kyoko2.bmp", 375, 675, true, RGB(255, 0, 255));
		//急壕井
		IMAGEMANAGER->addImage("selectSceneKyokoBackground", "Resource/IMG/ui/scene/SelectScene_kyoko_background.bmp", 360, 563, true, RGB(255, 0, 255));

		//漆刑闘樟 耕紫坪 識澱梅聖 凶
		IMAGEMANAGER->addImage("selectSceneMisako1", "Resource/IMG/ui/scene/SelectScene_misako.bmp", 375, 675, true, RGB(255, 0, 255));
		//照梅聖 凶
		IMAGEMANAGER->addImage("selectSceneMisako2", "Resource/IMG/ui/scene/SelectScene_misako2.bmp", 375, 675, true, RGB(255, 0, 255));
		//急壕井
		IMAGEMANAGER->addImage("selectMisakoBackground", "Resource/IMG/ui/scene/SelectScene_misako_background.bmp", 360, 563, true, RGB(255, 0, 255));

		//漆刑闘樟 五敢杖 獄動
		IMAGEMANAGER->addImage("selectSceneManualButton", "Resource/IMG/ui/scene/SelectScene_manualButton.bmp", 650, 173, true, RGB(255, 0, 255));
	}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//ししししししし 製据 ししししししし//
	/*{

	//巴傾戚嬢 製据 井稽
	//Resource/SFX/Player/

	//発井// 什砺戚走 井稽
	//Resource/SFX/environment

	//坤帖 採偲
	SOUNDMANAGER->addSound("benchBreak", "Resource/SFX/environment/environment_bench_break.wav", true, false);

	//鉢俳叔 奪雌 採偲
	SOUNDMANAGER->addSound("chemistryTableBreak", "Resource/SFX/environment/environment_chemistry_table_break.wav", true, false);

	//蟹巷 採偲
	SOUNDMANAGER->addSound("woodSmash", "Resource/SFX/environment/environment_wood_smash.wav", true, false);
	SOUNDMANAGER->addSound("woodCrunch", "Resource/SFX/environment/environment_wood_crunch.wav", true, false);

	//宜 採偲
	SOUNDMANAGER->addSound("rockSmash", "Resource/SFX/environment/environment_rock_smash.wav", true, false);
	SOUNDMANAGER->addSound("rockCrunch", "Resource/SFX/environment/environment_rock_crunch.wav", true, false);

	//切毒奄 採偲
	SOUNDMANAGER->addSound("vendingmachinePunched", "Resource/SFX/environment/environment_vending_machine_punched.wav", true, false);
	SOUNDMANAGER->addSound("vendingmachineBreak", "Resource/SFX/environment/environment_vending_machine_break.wav", true, false);

	//床傾奄搭 丸毘
	SOUNDMANAGER->addSound("dumpsterClose", "Resource/SFX/environment/environment_dumpster_close.wav", true, false);

	//床傾奄搭 伸顕
	SOUNDMANAGER->addSound("dumpsterOpen", "Resource/SFX/environment/environment_dumpster_open.wav", true, false);

	//穿奄 郊韓
	SOUNDMANAGER->addSound("electricfloorOn", "Resource/SFX/environment/environment_electricfloor_on.wav", true, false);

	//賑降弘 朝錘闘 陥錘
	SOUNDMANAGER->addSound("explosivesCountdownBeep", "Resource/SFX/environment/environment_explosives_countdown_beep.wav", true, false);

	//賑降弘 朝錘闘 陥錘 欠覗..? - 照承暗旭製
	SOUNDMANAGER->addSound("explosivesCountdownBeepLoop", "Resource/SFX/environment/environment_explosives_idle_beep_loop.wav", true, true);
	
	//賑降弘 賑降
	SOUNDMANAGER->addSound("explosivesExplode", "Resource/SFX/environment/environment_explosives_explode.wav", true, false);
	SOUNDMANAGER->addSound("explosivesExplodePlant", "Resource/SFX/environment/environment_explosives_plant.wav", true, false);

	//賑降弘 賑降 板 戚誤
	SOUNDMANAGER->addSound("explosivesRinging", "Resource/SFX/environment/environment_explosives_ringing.wav", true, false);

	//舌貝姶 喚顕
	SOUNDMANAGER->addSound("toysSqueek", "Resource/SFX/environment/environment_pattinson_toys_squeek.wav", true, false);

	//朝五虞 覗稽詮斗 欠覗
	SOUNDMANAGER->addSound("projectorLoop", "Resource/SFX/environment/environment_projector_loop.wav", true, false);



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

#pragma region BOSS
	IMAGEMANAGER->addFrameImage("BOSS_ATTACKED_01", "Resource/IMG/character/enemy/boss/attacked 01.bmp", 737, 594, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ATTACKED_02", "Resource/IMG/character/enemy/boss/attacked 02.bmp", 737, 594, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ATTACKED_03", "Resource/IMG/character/enemy/boss/attacked 03.bmp", 737, 594, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ATTACKED_00", "Resource/IMG/character/enemy/boss/attacked.bmp", 2214, 594, 9, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_BLOCK", "Resource/IMG/character/enemy/boss/block.bmp", 1688, 576, 8, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_DASH", "Resource/IMG/character/enemy/boss/dash.bmp", 2619, 582, 10, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_DEATH", "Resource/IMG/character/enemy/boss/death.bmp", 4576, 576, 13, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_DEFEAT", "Resource/IMG/character/enemy/boss/defeat.bmp", 4576, 576, 13, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_DIZZY", "Resource/IMG/character/enemy/boss/dizzy.bmp", 1024, 434, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_DOWN", "Resource/IMG/character/enemy/boss/down.bmp", 5830, 510, 22, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ELBOW", "Resource/IMG/character/enemy/boss/elbow.bmp", 2915, 652, 11, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ELBOW_2", "Resource/IMG/character/enemy/boss/elbow2.bmp", 2885, 652, 11, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GETHIT", "Resource/IMG/character/enemy/boss/gethit.bmp", 2214, 594, 9, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GETHIT_A", "Resource/IMG/character/enemy/boss/gethit_A.bmp", 5830, 510, 22, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GETHIT_K", "Resource/IMG/character/enemy/boss/gethit_K.bmp", 2880, 594, 10, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GETUP_C", "Resource/IMG/character/enemy/boss/getup_C.bmp", 2187, 576, 9, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GETUP_S", "Resource/IMG/character/enemy/boss/getup_S.bmp", 2560, 466, 10, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GETUP_SS", "Resource/IMG/character/enemy/boss/getup_SS.bmp", 3735, 580, 15, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GROGGY", "Resource/IMG/character/enemy/boss/groggy.bmp", 1024, 434, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_GROUNDHIT", "Resource/IMG/character/enemy/boss/groundhit.bmp", 1036, 460, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_HOWLING", "Resource/IMG/character/enemy/boss/howling.bmp", 2916, 576, 12, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_IDLE", "Resource/IMG/character/enemy/boss/idle.bmp", 3180, 634, 12, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_METEOR", "Resource/IMG/character/enemy/boss/meteor.bmp", 480, 460, 2, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_METEOR_A", "Resource/IMG/character/enemy/boss/meteor_A.bmp", 410, 660, 2, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_METEOR_C", "Resource/IMG/character/enemy/boss/meteor_C.bmp", 2988, 576, 12, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_METEOR_G", "Resource/IMG/character/enemy/boss/meteor_G.bmp", 1224, 422, 6, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_METEOR_J", "Resource/IMG/character/enemy/boss/meteor_J.bmp", 1888, 672, 8, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_METEOR_M", "Resource/IMG/character/enemy/boss/meteor_M.bmp", 4674, 576, 19, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_MOVE", "Resource/IMG/character/enemy/boss/move.bmp", 2110, 588, 10, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_PHASE", "Resource/IMG/character/enemy/boss/phase.bmp", 5658, 748, 23, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ROAR", "Resource/IMG/character/enemy/boss/roar.bmp", 2916, 576, 12, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_ROARU", "Resource/IMG/character/enemy/boss/roar_U.bmp", 1000, 474, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_SLAB", "Resource/IMG/character/enemy/boss/slab.bmp", 5278, 582, 14, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_SLAP", "Resource/IMG/character/enemy/boss/slap.bmp", 5278, 582, 14, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_SMASH", "Resource/IMG/character/enemy/boss/smash.bmp", 11880, 594, 27, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_STANDATTACK", "Resource/IMG/character/enemy/boss/standattack.bmp", 2187, 576, 9, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_STANDATTACK_01", "Resource/IMG/character/enemy/boss/standattack1.bmp", 2560, 466, 10, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_STANDATTACK_02", "Resource/IMG/character/enemy/boss/standattack2.bmp", 3735, 580, 15, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_TACKLE", "Resource/IMG/character/enemy/boss/tackle.bmp", 1120, 576, 5, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_TACKLE_L", "Resource/IMG/character/enemy/boss/tackle_L.bmp", 2882, 576, 11, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_TAUNT", "Resource/IMG/character/enemy/boss/taunt.bmp", 5658, 748, 23, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_WALK", "Resource/IMG/character/enemy/boss/walk.bmp", 2110, 588, 10, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("BOSS_WUPUNCH", "Resource/IMG/character/enemy/boss/wupunch.bmp", 11880, 594, 27, 2, true, RGB(255, 0, 255));
#pragma endregion BOSS

#pragma region CHEERLEADER
	IMAGEMANAGER->addFrameImage("CHEERLEADER_BACKDOWN", "Resource/IMG/character/enemy/cheerLeader/backdown.bmp", 9338, 436, 29, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_BACKFLIP", "Resource/IMG/character/enemy/cheerLeader/backflip.bmp", 6732, 612, 22, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_BEGGING", "Resource/IMG/character/enemy/cheerLeader/begging.bmp", 513, 372, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_BLOCK", "Resource/IMG/character/enemy/cheerLeader/block.bmp", 519, 428, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_COMBOATTACK_01", "Resource/IMG/character/enemy/cheerLeader/ComboAttack1.bmp", 1332, 468, 6, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_COMBOATTACK_02", "Resource/IMG/character/enemy/cheerLeader/ComboAttack2.bmp", 1827, 426, 7, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_COMBOATTACK_03", "Resource/IMG/character/enemy/cheerLeader/ComboAttack3.bmp", 4050, 498, 15, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_GETHIT", "Resource/IMG/character/enemy/cheerLeader/gethit.bmp", 1539, 426, 9, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_HELDHIT", "Resource/IMG/character/enemy/cheerLeader/HeldHit.bmp", 840, 384, 5, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_HELDRELEASE", "Resource/IMG/character/enemy/cheerLeader/HeldRelease.bmp", 840, 456, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_IDLE", "Resource/IMG/character/enemy/cheerLeader/idle.bmp", 2304, 432, 12, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_JUMP", "Resource/IMG/character/enemy/cheerLeader/jump.bmp", 540, 474, 3, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_JUMPATTACK", "Resource/IMG/character/enemy/cheerLeader/JumpAttack.bmp", 1491, 654, 7, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_LADDER", "Resource/IMG/character/enemy/cheerLeader/ladder.bmp", 900, 255, 6, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_RUN", "Resource/IMG/character/enemy/cheerLeader/run.bmp", 1368, 318, 8, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_STUN", "Resource/IMG/character/enemy/cheerLeader/stun.bmp", 540, 390, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_TRANSITION", "Resource/IMG/character/enemy/cheerLeader/transition.bmp", 396, 186, 3, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_WALK", "Resource/IMG/character/enemy/cheerLeader/walk.bmp", 2736, 438, 12, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("CHEERLEADER_WEAPONHIT", "Resource/IMG/character/enemy/cheerLeader/weaponHit.bmp", 7084, 436, 22, 2, true, RGB(255, 0, 255));
#pragma endregion CHEERLEADER

#pragma endregion ENEMYIMAGE

#pragma endregion IMAGESOURCES





	  /////////////////紫錘球 社什///////////////
#pragma region SFXSOURCE
//巴傾戚嬢 紫錘球
#pragma region PLAYERSFX



#pragma endregion PLAYERSFX

#pragma region MENUSFX
	SOUNDMANAGER->addSound("MENU_BUS_USE", "Resource/SFX/menu/interface_bus_use.wav", true, false);
	SOUNDMANAGER->addSound("MENU_GAMEOVER", "Resource/SFX/menu/interface_game_over.wav", true, false);
	SOUNDMANAGER->addSound("MENU_MAP_MARKER", "Resource/SFX/menu/interface_map_marker.wav", true, false);
	SOUNDMANAGER->addSound("MENU_WEDIDIT_JINGLE", "Resource/SFX/menu/interface_wedidit_jingle.wav", true, false);
	SOUNDMANAGER->addSound("MENU_JINGLE_MAP_01", "Resource/SFX/menu/jingle_map_01.wav", true, false);
	SOUNDMANAGER->addSound("MENU_JINGLE_TUTORIAL_03", "Resource/SFX/menu/jingle_tutorial_03.wav", true, false);
	SOUNDMANAGER->addSound("MENU_LEVELUP", "Resource/SFX/menu/level_up_sequence.wav", true, false);
	SOUNDMANAGER->addSound("MENU_ACCESSORY_EQUIP", "Resource/SFX/menu/menu_accesory_equip.wav", true, false);
	SOUNDMANAGER->addSound("MENU_ACCESSORY_UNEQUIP", "Resource/SFX/menu/menu_accesory_unequip.wav", true, false);
	SOUNDMANAGER->addSound("MENU_BACK", "Resource/SFX/menu/menu_back.wav", true, false);
	SOUNDMANAGER->addSound("MENU_CANNOT", "Resource/SFX/menu/menu_cannot.wav", true, false);
	SOUNDMANAGER->addSound("MENU_CONFIRM", "Resource/SFX/menu/menu_confirm.wav", true, false);
	SOUNDMANAGER->addSound("MENU_CURSOR", "Resource/SFX/menu/menu_cursor.wav", true, false);
	SOUNDMANAGER->addSound("MENU_EMPTY_ACRRESSORY", "Resource/SFX/menu/menu_empty_accessory.wav", true, false);
	SOUNDMANAGER->addSound("MENU_INTERACT", "Resource/SFX/menu/menu_interact.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_BACK", "Resource/SFX/menu/menu_phone_back2.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_CURSOR_01", "Resource/SFX/menu/menu_phone_cursor_01.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_CURSOR_02", "Resource/SFX/menu/menu_phone_cursor_02.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_CURSOR_03", "Resource/SFX/menu/menu_phone_cursor_03.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_PAUSE", "Resource/SFX/menu/menu_phone_pause.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_ROTATE", "Resource/SFX/menu/menu_phone_rotate.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_SELECT", "Resource/SFX/menu/menu_phone_select3.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_SLIDER_TICK", "Resource/SFX/menu/menu_phone_slider_tick.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PHONE_UNPAUSE", "Resource/SFX/menu/menu_phone_unpause.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PLAYER_SELECT_FIRST", "Resource/SFX/menu/menu_player_select_first.wav", true, false);
	SOUNDMANAGER->addSound("MENU_PLAYER_SELECT_LASE", "Resource/SFX/menu/menu_player_select_last.wav", true, false);
	SOUNDMANAGER->addSound("MENU_NOTIFICATION", "Resource/SFX/menu/notification.wav", true, false);
	SOUNDMANAGER->addSound("MENU_UI_CHAINS_APPEAR", "Resource/SFX/menu/UI_chains_appear.wav", true, false);
	SOUNDMANAGER->addSound("MENU_UI_CHAINS_BREAK", "Resource/SFX/menu/UI_chains_break.wav", true, false);
#pragma endregion MENUSFX


#pragma endregion SFXSOURCE




	return S_OK;
}
