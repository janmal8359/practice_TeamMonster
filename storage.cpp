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

	//�������������� �ֿ� �ι� ��������������//
	/*{

	//�÷��̾� �̹��� ���
	//Resource/IMG/character/player/imageName.bmp

	//���� �̹��� ���
	//Resource/IMG/character/enemy/

	//NPC �̹��� ���
	//Resource/IMG/character/npc/

	}*/

	//�������������� ȿ��  ��������������//
	/*{

	//ȿ��
	//Resource/IMG/effect

	}*/



	//�������������� ������ & ������Ʈ ��������������//
	/*{
	*
	//������
	//Resource/IMG/item

	//������Ʈ
	//Resource/IMG/object

	}*/


	//�������������� �������� & UI ��������������//
	/*{

	//��������
	//Resource/IMG/stage

	//UI
	//Resource/IMG/ui

	}*/

#pragma endregion IMGPATH

#pragma region SFXPATH

	//�������������� ���� ��������������//
	/*{

	//�÷��̾� ���� ���
	//Resource/SFX/Player/

	//ȯ��// �������� ���
	//Resource/SFX/environment

	//���� ȿ����? ���
	//Resource/SFX/global

	//�޴�����
	//Resource/SFX/menu/

	//��������
	//Resource/SFX/weapons/

	//�ݴ� �Ⱦ�����
	//Resource/SFX/pickup/

	}*/
#pragma region WEAPONS

	//���� Ÿ����

	SOUNDMANAGER->addSound("�߱������1",		"Resource/SFX/weapons/weapon_baseball_bat_hit.wav", true, false);			//�߱������  ��
	SOUNDMANAGER->addSound("�߱������2",		"Resource/SFX/weapons/weapon_baseball_impact.wav", true, false);			//�߱������2 Ź 
	
	SOUNDMANAGER->addSound("��ġ1",				"Resource/SFX/weapons/weapon_bench_break.wav", true, false);				//��ġ �μ����¼Ҹ�
	SOUNDMANAGER->addSound("��ġ2",				"Resource/SFX/weapons/weapon_bench_impact.wav", true, false);				//��ġ ����Ʈ
	
	SOUNDMANAGER->addSound("������1",			"Resource/SFX/weapons/weapon_bicycle_impact.wav", true, false);				//������
	SOUNDMANAGER->addSound("�θ޶�",				"Resource/SFX/weapons/weapon_boomerang_throw.wav", true, false);			//�θ޶�
	SOUNDMANAGER->addSound("ü��",				"Resource/SFX/weapons/weapon_chain_swing.wav", true, false);				//ü��
	SOUNDMANAGER->addSound("�Ǳ���",				"Resource/SFX/weapons/weapon_dodgeball_impact.wav", true, false);			//�Ǳ���
	SOUNDMANAGER->addSound("�����1",			"Resource/SFX/weapons/weapon_fish_explode.wav", true, false);				//�����1
	SOUNDMANAGER->addSound("�����2",			"Resource/SFX/weapons/weapon_fish_impact.wav", true, false);				//�����2
	SOUNDMANAGER->addSound("��������",			"Resource/SFX/weapons/weapon_frying_pan_impact2.wav", true, false);			//��������
	
	SOUNDMANAGER->addSound("��Ÿ1",				"Resource/SFX/weapons/weapon_guitar_impact_01.wav", true, false);			//��Ÿ1
	SOUNDMANAGER->addSound("��Ÿ2",				"Resource/SFX/weapons/weapon_guitar_impact_02.wav", true, false);			//��Ÿ2
	SOUNDMANAGER->addSound("��Ÿ3",				"Resource/SFX/weapons/weapon_guitar_impact_03.wav", true, false);			//��Ÿ3
	SOUNDMANAGER->addSound("��Ÿ4",				"Resource/SFX/weapons/weapon_guitar_impact_04.wav", true, false);			//��Ÿ4
	
	SOUNDMANAGER->addSound("����Ʈ���̹�1",		"Resource/SFX/weapons/weapon_light_saber_impact_01.wav", true, false);		//����Ʈ���̹�1
	SOUNDMANAGER->addSound("����Ʈ���̹�2",		"Resource/SFX/weapons/weapon_light_saber_impact_02.wav", true, false);		//����Ʈ���̹�2
	SOUNDMANAGER->addSound("����Ʈ���̹�3",		"Resource/SFX/weapons/weapon_light_saber_impact_03.wav", true, false);		//����Ʈ���̹�3
	
	SOUNDMANAGER->addSound("����Ʈ���̹�����1",	"Resource/SFX/weapons/weapon_light_saber_swing_01.wav", true, false);		//����Ʈ���̹�����1
	SOUNDMANAGER->addSound("����Ʈ���̹�����2",	"Resource/SFX/weapons/weapon_light_saber_swing_02.wav", true, false);		//����Ʈ���̹�����2
	SOUNDMANAGER->addSound("����Ʈ���̹�����3",	"Resource/SFX/weapons/weapon_light_saber_swing_03.wav", true, false);		//����Ʈ���̹�����3
	SOUNDMANAGER->addSound("����Ʈ���̹�����4",	"Resource/SFX/weapons/weapon_light_saber_swing_04.wav", true, false);		//����Ʈ���̹�����4

	SOUNDMANAGER->addSound("�ݼ�����",			"Resource/SFX/weapons/weapon_metal_chair_impact.wav", true, false);			//�ݼ�����
	SOUNDMANAGER->addSound("��",					"Resource/SFX/weapons/weapon_shovel_impact.wav", true, false);				//��
	SOUNDMANAGER->addSound("��������",			"Resource/SFX/weapons/weapon_star_baton_impact.wav", true, false);			//��������
	SOUNDMANAGER->addSound("��������",			"Resource/SFX/weapons/weapon_wood_plank_impact.wav", true, false);			//��������
	SOUNDMANAGER->addSound("��ġ",				"Resource/SFX/weapons/weapon_wrench_impact.wav", true, false);				//��ġ

#pragma endregion WEAPONS

#pragma endregion SFXPATH

	//========================�̹��� �ҽ�======================
#pragma region IMAGESOURCES

//�÷��̾� �̹���
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma region ENEMYIMAGE


#pragma region SCHOOLBOYIMAGE 

	//IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255)); ����

	//SCHOOLBOYIMAGE

	IMAGEMANAGER->addFrameImage("backdown", "Resource/IMG/character/enemy/scoolBoy/backdown.bmp", 7695, 438, 27, 2, true, RGB(255, 0, 255));		//�Ѿ�������
	IMAGEMANAGER->addFrameImage("begging", "Resource/IMG/character/enemy/scoolBoy/begging.bmp", 216, 354, 2, 2, true, RGB(255, 0, 255));			//�׺�
	IMAGEMANAGER->addFrameImage("block", "Resource/IMG/character/enemy/scoolBoy/block.bmp", 459, 438, 3, 2, true, RGB(255, 0, 255));				//����
	IMAGEMANAGER->addFrameImage("ComboAttack1", "Resource/IMG/character/enemy/scoolBoy/ComboAttack1.bmp", 2352, 426, 7, 2, true, RGB(255, 0, 255));	//����1
	IMAGEMANAGER->addFrameImage("ComboAttack2", "Resource/IMG/character/enemy/scoolBoy/ComboAttack2.bmp", 1757, 444, 7, 2, true, RGB(255, 0, 255));	//����2
	IMAGEMANAGER->addFrameImage("ComboAttack3", "Resource/IMG/character/enemy/scoolBoy/ComboAttack3.bmp", 1890, 558, 9, 2, true, RGB(255, 0, 255));	//����3
	IMAGEMANAGER->addFrameImage("gethit", "Resource/IMG/character/enemy/scoolBoy/gethit.bmp", 1728, 450, 9, 2, true, RGB(255, 0, 255));				//�´� ����
	IMAGEMANAGER->addFrameImage("HeldHit", "Resource/IMG/character/enemy/scoolBoy/HeldHit.bmp", 576, 372, 3, 2, true, RGB(255, 0, 255));			//������ �´� ����
	IMAGEMANAGER->addFrameImage("HeldRelease", "Resource/IMG/character/enemy/scoolBoy/HeldRelease.bmp", 660, 480, 4, 2, true, RGB(255, 0, 255));	//������ Ǭ ����
	IMAGEMANAGER->addFrameImage("idle", "Resource/IMG/character/enemy/scoolBoy/idle.bmp", 1224, 432, 8, 2, true, RGB(255, 0, 255));					//�⺻
	IMAGEMANAGER->addFrameImage("jump", "Resource/IMG/character/enemy/scoolBoy/jump.bmp", 423, 486, 3, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("jumpAttack", "Resource/IMG/character/enemy/scoolBoy/jumpAttack.bmp", 1224, 468, 6, 2, true, RGB(255, 0, 255));		//���� ����
	IMAGEMANAGER->addFrameImage("ladder", "Resource/IMG/character/enemy/scoolBoy/ladder.bmp", 738, 264, 6, 1, true, RGB(255, 0, 255));				//���ö󰡴µ���
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/character/enemy/scoolBoy/run.bmp", 1920, 390, 10, 2, true, RGB(255, 0, 255));					//�޸���
	IMAGEMANAGER->addFrameImage("Stun", "Resource/IMG/character/enemy/scoolBoy/Stun.bmp", 633, 408, 4, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("transition", "Resource/IMG/character/enemy/scoolBoy/transition.bmp", 405, 183, 3, 1, true, RGB(255, 0, 255));		//���ö�� ��
	IMAGEMANAGER->addFrameImage("upercut", "Resource/IMG/character/enemy/scoolBoy/upercut.bmp", 1386, 502, 7, 2, true, RGB(255, 0, 255));			//������
	IMAGEMANAGER->addFrameImage("Walk", "Resource/IMG/character/enemy/scoolBoy/Walk.bmp", 1620, 444, 12, 2, true, RGB(255, 0, 255));				//�ȱ�
	IMAGEMANAGER->addFrameImage("WAttack", "Resource/IMG/character/enemy/scoolBoy/WAttack.bmp", 1830, 660, 5, 2, true, RGB(255, 0, 255));			//���� �ֵѱ�
	IMAGEMANAGER->addFrameImage("weapon_swing", "Resource/IMG/character/enemy/scoolBoy/weapon_swing.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));//���� �´� ����
	IMAGEMANAGER->addFrameImage("weaponHit", "Resource/IMG/character/enemy/scoolBoy/weaponHit.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));		//���� ���� ����
	IMAGEMANAGER->addFrameImage("WIdle", "Resource/IMG/character/enemy/scoolBoy/WIdle.bmp", 1224, 552, 8, 2, true, RGB(255, 0, 255));				//���� �� ����
	IMAGEMANAGER->addFrameImage("WJump", "Resource/IMG/character/enemy/scoolBoy/WJump.bmp", 432, 468, 3, 2, true, RGB(255, 0, 255));				//���� ����
	IMAGEMANAGER->addFrameImage("WRun", "Resource/IMG/character/enemy/scoolBoy/WRun.bmp", 2250, 516, 10, 2, true, RGB(255, 0, 255));				//���� ��
	IMAGEMANAGER->addFrameImage("WThrow", "Resource/IMG/character/enemy/scoolBoy/WThrow.bmp", 1752, 564, 8, 2, true, RGB(255, 0, 255));				//���� ������
	IMAGEMANAGER->addFrameImage("WWalk", "Resource/IMG/character/enemy/scoolBoy/WWalk.bmp", 1572, 556, 12, 2, true, RGB(255, 0, 255));				//���� ��� �ȱ�



	//Resource/IMG/character/enemy/

#pragma endregion SCHOOLBOYIMAGE

#pragma region SCHOOLGIRL

	//SCHOOLGIRLIMAGE

	IMAGEMANAGER->addFrameImage("attack1", "Resource/IMG/character/enemy/schoolGirl/attack1.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));				//����1 �ִ�������? 
	IMAGEMANAGER->addFrameImage("backdown", "Resource/IMG/character/enemy/schoolGirl/backdown.bmp", 6939, 376, 27, 2, true, RGB(255, 0, 255));			//�Ѿ����� �Ͼ
	IMAGEMANAGER->addFrameImage("begging", "Resource/IMG/character/enemy/schoolGirl/begging.bmp", 378, 336, 3, 2, true, RGB(255, 0, 255));				//�׺�
	IMAGEMANAGER->addFrameImage("block", "Resource/IMG/character/enemy/schoolGirl/block.bmp", 351, 338, 3, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("comboAttack1", "Resource/IMG/character/enemy/schoolGirl/comboAttack1.bmp", 1239, 354, 7, 2, true, RGB(255, 0, 255));	//�޺� ����1
	IMAGEMANAGER->addFrameImage("comboAttack2", "Resource/IMG/character/enemy/schoolGirl/comboAttack2.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));	//�޺� ����2
	IMAGEMANAGER->addFrameImage("comboAttack3", "Resource/IMG/character/enemy/schoolGirl/comboAttack3.bmp", 2412, 414, 12, 2, true, RGB(255, 0, 255));	//�޺� ����3
	IMAGEMANAGER->addFrameImage("gethit", "Resource/IMG/character/enemy/schoolGirl/gethit.bmp", 1431, 360, 9, 2, true, RGB(255, 0, 255));				//�ǰݴ���
	IMAGEMANAGER->addFrameImage("HeldHit", "Resource/IMG/character/enemy/schoolGirl/HeldHit.bmp", 576, 336, 4, 2, true, RGB(255, 0, 255));				//������ �ǰݴ���
	IMAGEMANAGER->addFrameImage("HeldRelease", "Resource/IMG/character/enemy/schoolGirl/HeldRelease.bmp", 528, 360, 4, 2, true, RGB(255, 0, 255));		//������ ����
	IMAGEMANAGER->addFrameImage("idle", "Resource/IMG/character/enemy/schoolGirl/idle.bmp", 1170, 354, 10, 2, true, RGB(255, 0, 255));					//�⺻
	IMAGEMANAGER->addFrameImage("jump", "Resource/IMG/character/enemy/schoolGirl/jump.bmp", 342, 366, 3, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("jumpAttack", "Resource/IMG/character/enemy/schoolGirl/jumpAttack.bmp", 1197, 354, 7, 2, true, RGB(255, 0, 255));		//���� ����
	IMAGEMANAGER->addFrameImage("ladder", "Resource/IMG/character/enemy/schoolGirl/ladder.bmp", 594, 219, 6, 1, true, RGB(255, 0, 255));				//���ö󰡱�
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/character/enemy/schoolGirl/run.bmp", 1470, 330, 10, 2, true, RGB(255, 0, 255));					//�޸���
	IMAGEMANAGER->addFrameImage("stun", "Resource/IMG/character/enemy/schoolGirl/stun.bmp", 456, 324, 4, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("transition", "Resource/IMG/character/enemy/schoolGirl/transition.bmp", 387, 168, 3, 1, true, RGB(255, 0, 255));		//���ö� �� ��
	IMAGEMANAGER->addFrameImage("walk", "Resource/IMG/character/enemy/schoolGirl/walk.bmp", 1296, 372, 12, 2, true, RGB(255, 0, 255));					//�ȱ�
	IMAGEMANAGER->addFrameImage("WAttack", "Resource/IMG/character/enemy/schoolGirl/WAttack.bmp", 1580, 558, 5, 2, true, RGB(255, 0, 255));				//���� ����
	IMAGEMANAGER->addFrameImage("weapon_swing", "Resource/IMG/character/enemy/schoolGirl/weapon_swing.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));	//���� ���� �ǰݴ��ҽ�
	IMAGEMANAGER->addFrameImage("weaponHit", "Resource/IMG/character/enemy/schoolGirl/weaponHit.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));		//���� �ǰݴ��ҽ�
	IMAGEMANAGER->addFrameImage("WIdle", "Resource/IMG/character/enemy/schoolGirl/WIdle.bmp", 1950, 408, 10, 2, true, RGB(255, 0, 255));				//���� �⺻
	IMAGEMANAGER->addFrameImage("WJump", "Resource/IMG/character/enemy/schoolGirl/WJump.bmp", 429, 450, 3, 2, true, RGB(255, 0, 255));					//���� ����
	IMAGEMANAGER->addFrameImage("WRun", "Resource/IMG/character/enemy/schoolGirl/WRun.bmp", 1880, 458, 10, 2, true, RGB(255, 0, 255));					//���� �޸���
	IMAGEMANAGER->addFrameImage("WThrow", "Resource/IMG/character/enemy/schoolGirl/WThrow.bmp", 1488, 540, 8, 2, true, RGB(255, 0, 255));				//���� ������
	IMAGEMANAGER->addFrameImage("WWalk", "Resource/IMG/character/enemy/schoolGirl/WWalk.bmp", 2232, 502, 12, 2, true, RGB(255, 0, 255));				//���� �ȱ�
	
#pragma endregion SCHOOLGIRL

#pragma endregion ENEMYIMAGE


#pragma endregion IMAGESOURCES





	  /////////////////���� �ҽ�///////////////
#pragma region SFXSOURCE
//�÷��̾� ����
#pragma region PLAYERSFX



#pragma endregion PLAYERSFX


#pragma endregion SFXSOURCE




	return S_OK;
}
