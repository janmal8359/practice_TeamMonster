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
	
		//���� HP ��
		IMAGEMANAGER->addImage("bossHPBack", "Resource/IMG/ui/battle/boss_HP_back.bmp", 689, 120, true, RGB(255, 0, 255));

		//���� HP ������
		IMAGEMANAGER->addImage("bossHPFrame", "Resource/IMG/ui/battle/boss_HP_frame.bmp", 898, 120, true, RGB(255, 0, 255));

		//���� HP ��
		IMAGEMANAGER->addImage("bossHPFront", "Resource/IMG/ui/battle/boss_HP_front.bmp", 689, 120, true, RGB(255, 0, 255));

		//����
		IMAGEMANAGER->addImage("coin", "Resource/IMG/ui/battle/coin.bmp", 36, 36, true, RGB(255, 0, 255));

		//HP ��ĭ
		IMAGEMANAGER->addImage("HP", "Resource/IMG/ui/battle/HP_Point.bmp", 25, 23, true, RGB(255, 0, 255));

		//�������� ȭ�� �� �Ʒ�
		IMAGEMANAGER->addImage("stageChainBottom", "Resource/IMG/ui/battle/Stage_UI_Chain_Bottom.bmp", 1600, 43, true, RGB(255, 0, 255));

		//�������� ȭ�� �� ����
		IMAGEMANAGER->addImage("stageChainLeft", "Resource/IMG/ui/battle/Stage_UI_Chain_Left.bmp", 42, 900, true, RGB(255, 0, 255));

		//�������� ȭ�� �� ������
		IMAGEMANAGER->addImage("stageChainRight", "Resource/IMG/ui/battle/Stage_UI_Chain_Right.bmp", 41, 900, true, RGB(255, 0, 255));

		//�������� ȭ�� �� ��
		IMAGEMANAGER->addImage("stageChainTop", "Resource/IMG/ui/battle/Stage_UI_Chain_Top.bmp", 1600, 43, true, RGB(255, 0, 255));

		//�������� ��ݽ� �ڹ���
		IMAGEMANAGER->addImage("lockAppear", "Resource/IMG/ui/battle/Stage_UI_Lock_Appear.bmp", 650, 116, true, RGB(255, 0, 255));

		//�������� ��ݽ� �ڹ��� ����
		IMAGEMANAGER->addImage("lockDamage1", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage1.bmp", 650, 116, true, RGB(255, 0, 255));

		//�������� ��ݽ� �ڹ��� �� ����
		IMAGEMANAGER->addImage("lockDamage2", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage2.bmp", 650, 116, true, RGB(255, 0, 255));

		//�������� ��ݽ� �ڹ��� ��¥ ����
		IMAGEMANAGER->addImage("lockDisappear", "Resource/IMG/ui/battle/Stage_UI_Lock_Disappear.bmp", 840, 130, true, RGB(255, 0, 255));

		//��Ʈ UI <- ���� �������� �� �����°� ������,.
		IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_heart.bmp", 6400, 3600, true, RGB(255, 0, 255));

		//ĳ����
		IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_Kyoko_Portrait.bmp", 6400, 3600, true, RGB(255, 0, 255));
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

#pragma endregion SFXPATH

	//========================�̹��� �ҽ�======================
#pragma region IMAGESOURCES

//�÷��̾� �̹���
#pragma region PLAYERIMAGE

#pragma endregion PLAYERIMAGE

#pragma region ENEMYIMAGE

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
