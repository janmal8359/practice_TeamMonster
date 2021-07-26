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
	
		//battle
		//보스 HP 뒤
		IMAGEMANAGER->addImage("bossHPBack", "Resource/IMG/ui/battle/boss_HP_back.bmp", 689, 120, true, RGB(255, 0, 255));

		//보스 HP 프레임
		IMAGEMANAGER->addImage("bossHPFrame", "Resource/IMG/ui/battle/boss_HP_frame.bmp", 898, 120, true, RGB(255, 0, 255));

		//보스 HP 앞
		IMAGEMANAGER->addImage("bossHPFront", "Resource/IMG/ui/battle/boss_HP_front.bmp", 689, 120, true, RGB(255, 0, 255));

		//코인
		IMAGEMANAGER->addImage("coin", "Resource/IMG/ui/battle/coin.bmp", 36, 36, true, RGB(255, 0, 255));

		//HP 한칸
		IMAGEMANAGER->addImage("HP", "Resource/IMG/ui/battle/HP_Point.bmp", 25, 23, true, RGB(255, 0, 255));

		//스테이지 화면 락 아래
		IMAGEMANAGER->addImage("stageChainBottom", "Resource/IMG/ui/battle/Stage_UI_Chain_Bottom.bmp", 1600, 43, true, RGB(255, 0, 255));

		//스테이지 화면 락 왼쪽
		IMAGEMANAGER->addImage("stageChainLeft", "Resource/IMG/ui/battle/Stage_UI_Chain_Left.bmp", 42, 900, true, RGB(255, 0, 255));

		//스테이지 화면 락 오른쪽
		IMAGEMANAGER->addImage("stageChainRight", "Resource/IMG/ui/battle/Stage_UI_Chain_Right.bmp", 41, 900, true, RGB(255, 0, 255));

		//스테이지 화면 락 위
		IMAGEMANAGER->addImage("stageChainTop", "Resource/IMG/ui/battle/Stage_UI_Chain_Top.bmp", 1600, 43, true, RGB(255, 0, 255));

		//스테이지 잠금시 자물쇠
		IMAGEMANAGER->addFrameImage("lockAppear", "Resource/IMG/ui/battle/Stage_UI_Lock_Appear.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

		//스테이지 잠금시 자물쇠 깨짐
		IMAGEMANAGER->addFrameImage("lockDamage1", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage1.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

		//스테이지 잠금시 자물쇠 더 깨짐
		IMAGEMANAGER->addFrameImage("lockDamage2", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage2.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

		//스테이지 잠금시 자물쇠 진짜 깨짐
		IMAGEMANAGER->addFrameImage("lockDisappear", "Resource/IMG/ui/battle/Stage_UI_Lock_Disappear.bmp", 840, 130, 7, 1, true, RGB(255, 0, 255));

		//하트 UI <- 게임 오버됐을 때 나오는거 같은데,.
		IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_heart.bmp", 6400, 3600, true, RGB(255, 0, 255));

		//플레이어 프로필
		IMAGEMANAGER->addImage("playerPortrait", "Resource/IMG/ui/battle/UI_Kyoko_Portrait.bmp", 120, 135, true, RGB(255, 0, 255));

		//플레이어 UI바
		IMAGEMANAGER->addImage("playerBar", "Resource/IMG/ui/battle/UI_Player_bar.bmp", 414, 94, true, RGB(255, 0, 255));

		//상점 표시-플레이어 가까울 때
		IMAGEMANAGER->addImage("shopDoor1", "Resource/IMG/ui/battle/UI_Shop_Door1.bmp", 52, 45, true, RGB(255, 0, 255));

		//상점 표시-플레이어 멀 때
		IMAGEMANAGER->addImage("shopDoor2", "Resource/IMG/ui/battle/UI_Shop_Door2.bmp", 52, 45, true, RGB(255, 0, 255));

		//문 잠김 표시
		IMAGEMANAGER->addImage("lockedDoor", "Resource/IMG/ui/battle/UI_Locked_Door.bmp", 52, 76, true, RGB(255, 0, 255));

		//문 열림-플레이어 가까울 때
		IMAGEMANAGER->addImage("unlockDoor1", "Resource/IMG/ui/battle/UI_UnLocked_Door.bmp", 52, 76, true, RGB(255, 0, 255));

		//문 열림-플레이어 멀 때
		IMAGEMANAGER->addImage("unlockDoor2", "Resource/IMG/ui/battle/UI_UnLocked_Door22.bmp", 52, 76, true, RGB(255, 0, 255));



		//inven
		//핸드폰
		IMAGEMANAGER->addImage("phone", "Resource/IMG/ui/inven/phone.bmp", 480, 642, true, RGB(255, 0, 255));

		//방망이
		IMAGEMANAGER->addImage("bat", "Resource/IMG/ui/inven/ui_bat.bmp", 80, 79, true, RGB(255, 0, 255));



		//scene
		//스타트씬 배경
		IMAGEMANAGER->addImage("startSceneBackground", "Resource/IMG/ui/scene/StartScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

		//스타트씬 프레임
		IMAGEMANAGER->addImage("startSceneFrame", "Resource/IMG/ui/scene/StartScene_Frame.bmp", 1600, 900, true, RGB(255, 0, 255));

		//스타트씬 쿄코
		IMAGEMANAGER->addImage("startSceneKyoko", "Resource/IMG/ui/scene/StartScene_Kyoko.bmp", 672, 1024, true, RGB(255, 0, 255));

		//스타트씬 미사코
		IMAGEMANAGER->addImage("startSceneMisako", "Resource/IMG/ui/scene/StartScene_Misako.bmp", 672, 1024, true, RGB(255, 0, 255));

		//스타트씬 타이틀(제목)
		IMAGEMANAGER->addImage("startSceneTitle", "Resource/IMG/ui/scene/StartScene_Title.bmp", 537, 308, true, RGB(255, 0, 255));

		//로딩씬
		IMAGEMANAGER->addImage("loadingScene", "Resource/IMG/ui/scene/LoadingScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

		//로딩씬 우측하단 스프라이트
		IMAGEMANAGER->addFrameImage("loadingSprite", "Resource/IMG/ui/scene/loadingSprite.bmp", 1152, 227, 4, 1, true, RGB(255, 0, 255));

		//샵씬 배경
		IMAGEMANAGER->addImage("shopBackground", "Resource/IMG/ui/scene/ShopScene_background.bmp", 1280, 720, true, RGB(255, 0, 255));

		//샵씬 구매 버튼
		IMAGEMANAGER->addImage("shopBuyButton", "Resource/IMG/ui/scene/ShopScene_buyButton.bmp", 145, 92, true, RGB(255, 0, 255));

		//샵씬 아이템 선택했을때-리스트
		IMAGEMANAGER->addImage("shopList", "Resource/IMG/ui/scene/ShopScene_list.bmp", 403, 168, true, RGB(255, 0, 255));

		//다이얼로그 뒷배경
		IMAGEMANAGER->addImage("dialogWindow", "Resource/IMG/ui/scene/dialogWindow.bmp", 1280, 150, true, RGB(255, 0, 255));

		//게임 엔딩 장면-이건 수정해야될듯!!!!!!!!!!!!!!!!!!!!!!!!
		IMAGEMANAGER->addImage("endScene", "Resource/IMG/ui/scene/endScene.bmp", 1280, 720, true, RGB(255, 0, 255));

		//다이얼로그 플레이어
		IMAGEMANAGER->addImage("kyoko1", "Resource/IMG/ui/scene/kyoko_1.bmp", 386, 460, true, RGB(255, 0, 255));

		//다이얼로그 플레이어
		IMAGEMANAGER->addImage("kyoko2", "Resource/IMG/ui/scene/kyoko_2.bmp", 386, 460, true, RGB(255, 0, 255));

		//다이얼로그 플레이어
		IMAGEMANAGER->addImage("kyoko3", "Resource/IMG/ui/scene/kyoko_3.bmp", 386, 460, true, RGB(255, 0, 255));

		//다이얼로그 플레이어 이름
		IMAGEMANAGER->addImage("kyokoName", "Resource/IMG/ui/scene/kyoko_name.bmp", 200, 76, true, RGB(255, 0, 255));

		//다이얼로그 보스
		IMAGEMANAGER->addImage("misuzu1", "Resource/IMG/ui/scene/misuzu_1.bmp", 386, 460, true, RGB(255, 0, 255));

		//다이얼로그 보스
		IMAGEMANAGER->addImage("misuzu2", "Resource/IMG/ui/scene/misuzu_2.bmp", 386, 460, true, RGB(255, 0, 255));

		//다이얼로그 보스
		IMAGEMANAGER->addImage("misuzu3", "Resource/IMG/ui/scene/misuzu_3.bmp", 386, 460, true, RGB(255, 0, 255));

		//다이얼로그 보스 이름
		IMAGEMANAGER->addImage("misuzuName", "Resource/IMG/ui/scene/misuzu_name.bmp", 200, 76, true, RGB(255, 0, 255));

		//다이얼로그 스킵 표시-레드
		IMAGEMANAGER->addImage("skipOutlines1", "Resource/IMG/ui/scene/UI_skip_outlines_FULL.bmp", 206, 78, true, RGB(255, 0, 255));

		//다이얼로그 스킵 표시-화이트
		IMAGEMANAGER->addImage("skipOutlines2", "Resource/IMG/ui/scene/misuzu_name.bmp", 206, 78, true, RGB(255, 0, 255));

		//세이브 로드
		IMAGEMANAGER->addImage("saveLoadClose1", "Resource/IMG/ui/scene/save_load_close.bmp", 365, 150, true, RGB(255, 0, 255));
		IMAGEMANAGER->addImage("saveLoadOpen1", "Resource/IMG/ui/scene/save_load_open.bmp", 365, 150, true, RGB(255, 0, 255));

		//세이브 로드 새파일
		IMAGEMANAGER->addImage("saveLoadClose2", "Resource/IMG/ui/scene/save_load_close0.bmp", 365, 150, true, RGB(255, 0, 255));
		IMAGEMANAGER->addImage("saveLoadOpen2", "Resource/IMG/ui/scene/save_load_open0.bmp", 365, 150, true, RGB(255, 0, 255));

		//세이브 로드 스테이지1
		IMAGEMANAGER->addImage("saveLoadClose3", "Resource/IMG/ui/scene/save_load_close1.bmp", 365, 150, true, RGB(255, 0, 255));
		IMAGEMANAGER->addImage("saveLoadOpen3", "Resource/IMG/ui/scene/save_load_open1.bmp", 365, 150, true, RGB(255, 0, 255));

		//캐릭터 셀렉트씬 배경 파란색
		IMAGEMANAGER->addImage("selectSceneBackground1", "Resource/IMG/ui/scene/SelectScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));
		
		//캐릭터 셀렉트씬 배경 초록색
		IMAGEMANAGER->addImage("selectSceneBackground2", "Resource/IMG/ui/scene/SelectScene_background2.bmp", 1280, 720, true, RGB(255, 0, 255));

		//셀렉트씬 캐릭터 일러스트
		IMAGEMANAGER->addImage("selectSceneIllust", "Resource/IMG/ui/scene/SelectScene_illust.bmp", 996, 1705, true, RGB(255, 0, 255));

		//셀렉트씬 쿄코 선택했을 때
		IMAGEMANAGER->addImage("selectSceneKyoko1", "Resource/IMG/ui/scene/SelectScene_kyoko.bmp", 375, 675, true, RGB(255, 0, 255));
		//안했을 때
		IMAGEMANAGER->addImage("selectSceneKyoko2", "Resource/IMG/ui/scene/SelectScene_kyoko2.bmp", 375, 675, true, RGB(255, 0, 255));
		//뒷배경
		IMAGEMANAGER->addImage("selectSceneKyokoBackground", "Resource/IMG/ui/scene/SelectScene_kyoko_background.bmp", 360, 563, true, RGB(255, 0, 255));

		//셀렉트씬 미사코 선택했을 때
		IMAGEMANAGER->addImage("selectSceneMisako1", "Resource/IMG/ui/scene/SelectScene_misako.bmp", 375, 675, true, RGB(255, 0, 255));
		//안했을 때
		IMAGEMANAGER->addImage("selectSceneMisako2", "Resource/IMG/ui/scene/SelectScene_misako2.bmp", 375, 675, true, RGB(255, 0, 255));
		//뒷배경
		IMAGEMANAGER->addImage("selectMisakoBackground", "Resource/IMG/ui/scene/SelectScene_misako_background.bmp", 360, 563, true, RGB(255, 0, 255));

		//셀렉트씬 메뉴얼 버튼
		IMAGEMANAGER->addImage("selectSceneManualButton", "Resource/IMG/ui/scene/SelectScene_manualButton.bmp", 650, 173, true, RGB(255, 0, 255));
	}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//ㅇㅇㅇㅇㅇㅇㅇ 음원 ㅇㅇㅇㅇㅇㅇㅇ//
	/*{

	//플레이어 음원 경로
	//Resource/SFX/Player/

	//환경// 스테이지 경로
	//Resource/SFX/environment

	//벤치 부셔
	SOUNDMANAGER->addSound("benchBreak", "Resource/SFX/environment/environment_bench_break.wav", true, false);

	//화학실 책상 부셔
	SOUNDMANAGER->addSound("chemistryTableBreak", "Resource/SFX/environment/environment_chemistry_table_break.wav", true, false);

	//나무 부셔
	SOUNDMANAGER->addSound("woodSmash", "Resource/SFX/environment/environment_wood_smash.wav", true, false);
	SOUNDMANAGER->addSound("woodCrunch", "Resource/SFX/environment/environment_wood_crunch.wav", true, false);

	//돌 부셔
	SOUNDMANAGER->addSound("rockSmash", "Resource/SFX/environment/environment_rock_smash.wav", true, false);
	SOUNDMANAGER->addSound("rockCrunch", "Resource/SFX/environment/environment_rock_crunch.wav", true, false);

	//자판기 부셔
	SOUNDMANAGER->addSound("vendingmachinePunched", "Resource/SFX/environment/environment_vending_machine_punched.wav", true, false);
	SOUNDMANAGER->addSound("vendingmachineBreak", "Resource/SFX/environment/environment_vending_machine_break.wav", true, false);

	//쓰레기통 닫힘
	SOUNDMANAGER->addSound("dumpsterClose", "Resource/SFX/environment/environment_dumpster_close.wav", true, false);

	//쓰레기통 열림
	SOUNDMANAGER->addSound("dumpsterOpen", "Resource/SFX/environment/environment_dumpster_open.wav", true, false);

	//전기 바닥
	SOUNDMANAGER->addSound("electricfloorOn", "Resource/SFX/environment/environment_electricfloor_on.wav", true, false);

	//폭발물 카운트 다운
	SOUNDMANAGER->addSound("explosivesCountdownBeep", "Resource/SFX/environment/environment_explosives_countdown_beep.wav", true, false);

	//폭발물 카운트 다운 루프..? - 안쓸거같음
	SOUNDMANAGER->addSound("explosivesCountdownBeepLoop", "Resource/SFX/environment/environment_explosives_idle_beep_loop.wav", true, true);
	
	//폭발물 폭발
	SOUNDMANAGER->addSound("explosivesExplode", "Resource/SFX/environment/environment_explosives_explode.wav", true, false);
	SOUNDMANAGER->addSound("explosivesExplodePlant", "Resource/SFX/environment/environment_explosives_plant.wav", true, false);

	//폭발물 폭발 후 이명
	SOUNDMANAGER->addSound("explosivesRinging", "Resource/SFX/environment/environment_explosives_ringing.wav", true, false);

	//장난감 눌림
	SOUNDMANAGER->addSound("toysSqueek", "Resource/SFX/environment/environment_pattinson_toys_squeek.wav", true, false);

	//카메라 프로젝터 루프
	SOUNDMANAGER->addSound("projectorLoop", "Resource/SFX/environment/environment_projector_loop.wav", true, false);



	//보스 효과음? 경로
	//Resource/SFX/global

	//메뉴음원
	//Resource/SFX/menu/

	//무기음원
	//Resource/SFX/weapons/

	//줍는 픽업음원
	//Resource/SFX/pickup/

	}*/
#pragma region WEAPONS

	//무기 타격음

	SOUNDMANAGER->addSound("야구방망이1",		"Resource/SFX/weapons/weapon_baseball_bat_hit.wav", true, false);			//야구방망이  둥
	SOUNDMANAGER->addSound("야구방망이2",		"Resource/SFX/weapons/weapon_baseball_impact.wav", true, false);			//야구방망이2 탁 
	
	SOUNDMANAGER->addSound("벤치1",				"Resource/SFX/weapons/weapon_bench_break.wav", true, false);				//벤치 부셔지는소리
	SOUNDMANAGER->addSound("벤치2",				"Resource/SFX/weapons/weapon_bench_impact.wav", true, false);				//벤치 임팩트
	
	SOUNDMANAGER->addSound("자전거1",			"Resource/SFX/weapons/weapon_bicycle_impact.wav", true, false);				//자전거
	SOUNDMANAGER->addSound("부메랑",				"Resource/SFX/weapons/weapon_boomerang_throw.wav", true, false);			//부메랑
	SOUNDMANAGER->addSound("체인",				"Resource/SFX/weapons/weapon_chain_swing.wav", true, false);				//체인
	SOUNDMANAGER->addSound("피구공",				"Resource/SFX/weapons/weapon_dodgeball_impact.wav", true, false);			//피구공
	SOUNDMANAGER->addSound("물고기1",			"Resource/SFX/weapons/weapon_fish_explode.wav", true, false);				//물고기1
	SOUNDMANAGER->addSound("물고기2",			"Resource/SFX/weapons/weapon_fish_impact.wav", true, false);				//물고기2
	SOUNDMANAGER->addSound("프라이펜",			"Resource/SFX/weapons/weapon_frying_pan_impact2.wav", true, false);			//프라이펜
	
	SOUNDMANAGER->addSound("기타1",				"Resource/SFX/weapons/weapon_guitar_impact_01.wav", true, false);			//기타1
	SOUNDMANAGER->addSound("기타2",				"Resource/SFX/weapons/weapon_guitar_impact_02.wav", true, false);			//기타2
	SOUNDMANAGER->addSound("기타3",				"Resource/SFX/weapons/weapon_guitar_impact_03.wav", true, false);			//기타3
	SOUNDMANAGER->addSound("기타4",				"Resource/SFX/weapons/weapon_guitar_impact_04.wav", true, false);			//기타4
	
	SOUNDMANAGER->addSound("라이트세이버1",		"Resource/SFX/weapons/weapon_light_saber_impact_01.wav", true, false);		//라이트세이버1
	SOUNDMANAGER->addSound("라이트세이버2",		"Resource/SFX/weapons/weapon_light_saber_impact_02.wav", true, false);		//라이트세이버2
	SOUNDMANAGER->addSound("라이트세이버3",		"Resource/SFX/weapons/weapon_light_saber_impact_03.wav", true, false);		//라이트세이버3
	
	SOUNDMANAGER->addSound("라이트세이버스윙1",	"Resource/SFX/weapons/weapon_light_saber_swing_01.wav", true, false);		//라이트세이버스윙1
	SOUNDMANAGER->addSound("라이트세이버스윙2",	"Resource/SFX/weapons/weapon_light_saber_swing_02.wav", true, false);		//라이트세이버스윙2
	SOUNDMANAGER->addSound("라이트세이버스윙3",	"Resource/SFX/weapons/weapon_light_saber_swing_03.wav", true, false);		//라이트세이버스윙3
	SOUNDMANAGER->addSound("라이트세이버스윙4",	"Resource/SFX/weapons/weapon_light_saber_swing_04.wav", true, false);		//라이트세이버스윙4

	SOUNDMANAGER->addSound("금속의자",			"Resource/SFX/weapons/weapon_metal_chair_impact.wav", true, false);			//금속의자
	SOUNDMANAGER->addSound("삽",					"Resource/SFX/weapons/weapon_shovel_impact.wav", true, false);				//삽
	SOUNDMANAGER->addSound("별지팡이",			"Resource/SFX/weapons/weapon_star_baton_impact.wav", true, false);			//별지팡이
	SOUNDMANAGER->addSound("나무판자",			"Resource/SFX/weapons/weapon_wood_plank_impact.wav", true, false);			//나무판자
	SOUNDMANAGER->addSound("렌치",				"Resource/SFX/weapons/weapon_wrench_impact.wav", true, false);				//렌치

#pragma endregion WEAPONS

#pragma endregion SFXPATH

	//========================이미지 소스======================
#pragma region IMAGESOURCES

//플레이어 이미지
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

#pragma region SCHOOLBOYIMAGE 

	//IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255)); 예시

	//SCHOOLBOYIMAGE

	IMAGEMANAGER->addFrameImage("backdown", "Resource/IMG/character/enemy/scoolBoy/backdown.bmp", 7695, 438, 27, 2, true, RGB(255, 0, 255));		//넘어졌을때
	IMAGEMANAGER->addFrameImage("begging", "Resource/IMG/character/enemy/scoolBoy/begging.bmp", 216, 354, 2, 2, true, RGB(255, 0, 255));			//항복
	IMAGEMANAGER->addFrameImage("block", "Resource/IMG/character/enemy/scoolBoy/block.bmp", 459, 438, 3, 2, true, RGB(255, 0, 255));				//막기
	IMAGEMANAGER->addFrameImage("ComboAttack1", "Resource/IMG/character/enemy/scoolBoy/ComboAttack1.bmp", 2352, 426, 7, 2, true, RGB(255, 0, 255));	//공격1
	IMAGEMANAGER->addFrameImage("ComboAttack2", "Resource/IMG/character/enemy/scoolBoy/ComboAttack2.bmp", 1757, 444, 7, 2, true, RGB(255, 0, 255));	//공격2
	IMAGEMANAGER->addFrameImage("ComboAttack3", "Resource/IMG/character/enemy/scoolBoy/ComboAttack3.bmp", 1890, 558, 9, 2, true, RGB(255, 0, 255));	//공격3

	IMAGEMANAGER->addFrameImage("gethit", "Resource/IMG/character/enemy/scoolBoy/gethit.bmp", 1728, 450, 9, 2, true, RGB(255, 0, 255));				//맞는 동작
	IMAGEMANAGER->addFrameImage("HeldHit", "Resource/IMG/character/enemy/scoolBoy/HeldHit.bmp", 576, 372, 3, 2, true, RGB(255, 0, 255));			//잡히고 맞는 동작
	IMAGEMANAGER->addFrameImage("HeldRelease", "Resource/IMG/character/enemy/scoolBoy/HeldRelease.bmp", 660, 480, 4, 2, true, RGB(255, 0, 255));	//잡히고 푼 동작
	IMAGEMANAGER->addFrameImage("idle", "Resource/IMG/character/enemy/scoolBoy/idle.bmp", 1224, 432, 8, 2, true, RGB(255, 0, 255));					//기본
	IMAGEMANAGER->addFrameImage("jump", "Resource/IMG/character/enemy/scoolBoy/jump.bmp", 423, 486, 3, 2, true, RGB(255, 0, 255));					//점프
	IMAGEMANAGER->addFrameImage("jumpAttack", "Resource/IMG/character/enemy/scoolBoy/jumpAttack.bmp", 1224, 468, 6, 2, true, RGB(255, 0, 255));		//점프 공격
	IMAGEMANAGER->addFrameImage("ladder", "Resource/IMG/character/enemy/scoolBoy/ladder.bmp", 738, 264, 6, 1, true, RGB(255, 0, 255));				//기어올라가는동작
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/character/enemy/scoolBoy/run.bmp", 1920, 390, 10, 2, true, RGB(255, 0, 255));					//달리기
	IMAGEMANAGER->addFrameImage("Stun", "Resource/IMG/character/enemy/scoolBoy/Stun.bmp", 633, 408, 4, 2, true, RGB(255, 0, 255));					//스턴
	IMAGEMANAGER->addFrameImage("transition", "Resource/IMG/character/enemy/scoolBoy/transition.bmp", 405, 183, 3, 1, true, RGB(255, 0, 255));		//기어올라온 후
	IMAGEMANAGER->addFrameImage("upercut", "Resource/IMG/character/enemy/scoolBoy/upercut.bmp", 1386, 502, 7, 2, true, RGB(255, 0, 255));			//어퍼컷
	IMAGEMANAGER->addFrameImage("Walk", "Resource/IMG/character/enemy/scoolBoy/Walk.bmp", 1620, 444, 12, 2, true, RGB(255, 0, 255));				//걷기
	IMAGEMANAGER->addFrameImage("WAttack", "Resource/IMG/character/enemy/scoolBoy/WAttack.bmp", 1830, 660, 5, 2, true, RGB(255, 0, 255));			//무기 휘둘기

	IMAGEMANAGER->addFrameImage("weapon_swing", "Resource/IMG/character/enemy/scoolBoy/weapon_swing.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));//무기 맞는 동작
	IMAGEMANAGER->addFrameImage("weaponHit", "Resource/IMG/character/enemy/scoolBoy/weaponHit.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));		//무기 맞은 동작

	IMAGEMANAGER->addFrameImage("WIdle", "Resource/IMG/character/enemy/scoolBoy/WIdle.bmp", 1224, 552, 8, 2, true, RGB(255, 0, 255));				//무기 든 상태
	IMAGEMANAGER->addFrameImage("WJump", "Resource/IMG/character/enemy/scoolBoy/WJump.bmp", 432, 468, 3, 2, true, RGB(255, 0, 255));				//무기 점프
	IMAGEMANAGER->addFrameImage("WRun", "Resource/IMG/character/enemy/scoolBoy/WRun.bmp", 2250, 516, 10, 2, true, RGB(255, 0, 255));				//무기 런
	IMAGEMANAGER->addFrameImage("WThrow", "Resource/IMG/character/enemy/scoolBoy/WThrow.bmp", 1752, 564, 8, 2, true, RGB(255, 0, 255));				//무기 던지기
	IMAGEMANAGER->addFrameImage("WWalk", "Resource/IMG/character/enemy/scoolBoy/WWalk.bmp", 1572, 556, 12, 2, true, RGB(255, 0, 255));				//무기 들고 걷기



	//Resource/IMG/character/enemy/

#pragma endregion SCHOOLBOYIMAGE

#pragma region SCHOOLGIRL

	//SCHOOLGIRLIMAGE

	IMAGEMANAGER->addFrameImage("attack1", "Resource/IMG/character/enemy/schoolGirl/attack1.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));				//어택1 있는이유가? 
	IMAGEMANAGER->addFrameImage("backdown", "Resource/IMG/character/enemy/schoolGirl/backdown.bmp", 6939, 376, 27, 2, true, RGB(255, 0, 255));			//넘어졌다 일어남
	IMAGEMANAGER->addFrameImage("begging", "Resource/IMG/character/enemy/schoolGirl/begging.bmp", 378, 336, 3, 2, true, RGB(255, 0, 255));				//항복
	IMAGEMANAGER->addFrameImage("block", "Resource/IMG/character/enemy/schoolGirl/block.bmp", 351, 338, 3, 2, true, RGB(255, 0, 255));					//막기
	IMAGEMANAGER->addFrameImage("comboAttack1", "Resource/IMG/character/enemy/schoolGirl/comboAttack1.bmp", 1239, 354, 7, 2, true, RGB(255, 0, 255));	//콤보 어택1
	IMAGEMANAGER->addFrameImage("comboAttack2", "Resource/IMG/character/enemy/schoolGirl/comboAttack2.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));	//콤보 어택2
	IMAGEMANAGER->addFrameImage("comboAttack3", "Resource/IMG/character/enemy/schoolGirl/comboAttack3.bmp", 2412, 414, 12, 2, true, RGB(255, 0, 255));	//콤보 어택3
	IMAGEMANAGER->addFrameImage("gethit", "Resource/IMG/character/enemy/schoolGirl/gethit.bmp", 1431, 360, 9, 2, true, RGB(255, 0, 255));				//피격당함
	IMAGEMANAGER->addFrameImage("HeldHit", "Resource/IMG/character/enemy/schoolGirl/HeldHit.bmp", 576, 336, 4, 2, true, RGB(255, 0, 255));				//잡힌후 피격당함
	IMAGEMANAGER->addFrameImage("HeldRelease", "Resource/IMG/character/enemy/schoolGirl/HeldRelease.bmp", 528, 360, 4, 2, true, RGB(255, 0, 255));		//잡힌거 해제
	IMAGEMANAGER->addFrameImage("idle", "Resource/IMG/character/enemy/schoolGirl/idle.bmp", 1170, 354, 10, 2, true, RGB(255, 0, 255));					//기본
	IMAGEMANAGER->addFrameImage("jump", "Resource/IMG/character/enemy/schoolGirl/jump.bmp", 342, 366, 3, 2, true, RGB(255, 0, 255));					//점프
	IMAGEMANAGER->addFrameImage("jumpAttack", "Resource/IMG/character/enemy/schoolGirl/jumpAttack.bmp", 1197, 354, 7, 2, true, RGB(255, 0, 255));		//점프 공격
	IMAGEMANAGER->addFrameImage("ladder", "Resource/IMG/character/enemy/schoolGirl/ladder.bmp", 594, 219, 6, 1, true, RGB(255, 0, 255));				//기어올라가기
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/character/enemy/schoolGirl/run.bmp", 1470, 330, 10, 2, true, RGB(255, 0, 255));					//달리기
	IMAGEMANAGER->addFrameImage("stun", "Resource/IMG/character/enemy/schoolGirl/stun.bmp", 456, 324, 4, 2, true, RGB(255, 0, 255));					//스턴
	IMAGEMANAGER->addFrameImage("transition", "Resource/IMG/character/enemy/schoolGirl/transition.bmp", 387, 168, 3, 1, true, RGB(255, 0, 255));		//기어올라 온 후
	IMAGEMANAGER->addFrameImage("walk", "Resource/IMG/character/enemy/schoolGirl/walk.bmp", 1296, 372, 12, 2, true, RGB(255, 0, 255));					//걷기
	IMAGEMANAGER->addFrameImage("WAttack", "Resource/IMG/character/enemy/schoolGirl/WAttack.bmp", 1580, 558, 5, 2, true, RGB(255, 0, 255));				//무기 어택
	IMAGEMANAGER->addFrameImage("weapon_swing", "Resource/IMG/character/enemy/schoolGirl/weapon_swing.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));	//무기 스윙 피격당할시
	IMAGEMANAGER->addFrameImage("weaponHit", "Resource/IMG/character/enemy/schoolGirl/weaponHit.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));		//무기 피격당할시
	IMAGEMANAGER->addFrameImage("WIdle", "Resource/IMG/character/enemy/schoolGirl/WIdle.bmp", 1950, 408, 10, 2, true, RGB(255, 0, 255));				//무기 기본
	IMAGEMANAGER->addFrameImage("WJump", "Resource/IMG/character/enemy/schoolGirl/WJump.bmp", 429, 450, 3, 2, true, RGB(255, 0, 255));					//무기 점프
	IMAGEMANAGER->addFrameImage("WRun", "Resource/IMG/character/enemy/schoolGirl/WRun.bmp", 1880, 458, 10, 2, true, RGB(255, 0, 255));					//무기 달리기
	IMAGEMANAGER->addFrameImage("WThrow", "Resource/IMG/character/enemy/schoolGirl/WThrow.bmp", 1488, 540, 8, 2, true, RGB(255, 0, 255));				//무기 던지기
	IMAGEMANAGER->addFrameImage("WWalk", "Resource/IMG/character/enemy/schoolGirl/WWalk.bmp", 2232, 502, 12, 2, true, RGB(255, 0, 255));				//무기 걷기
	
#pragma endregion SCHOOLGIRL

#pragma endregion ENEMYIMAGE


#pragma endregion IMAGESOURCES





	  /////////////////사운드 소스///////////////
#pragma region SFXSOURCE
//플레이어 사운드
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
