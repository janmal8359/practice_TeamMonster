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
