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
	//��� �ǰ�
	IMAGEMANAGER->addFrameImage("attack", "Resource/IMG/effect/attack.bmp", 612, 196, 3, 1, true, RGB(255, 0, 255));
	//�ֳʹ� �׺�
	IMAGEMANAGER->addFrameImage("beg", "Resource/IMG/effect/beg.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
	//����Ʈ ����
	IMAGEMANAGER->addFrameImage("blueAttack", "Resource/IMG/effect/blueAttack.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
	//���� ��ý�����
	IMAGEMANAGER->addFrameImage("BossDash", "Resource/IMG/effect/Boss dash.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("BossHowling", "Resource/IMG/effect/Boss howling.bmp", 1821, 165, 8, 1, true, RGB(255, 0, 255));
	//���� ���
	IMAGEMANAGER->addFrameImage("BossHowling2", "Resource/IMG/effect/Boss howling2.bmp", 416, 208, 2, 1, true, RGB(255, 0, 255));
	//���� ���� ���� frameY(2)
	IMAGEMANAGER->addFrameImage("BossMeteor", "Resource/IMG/effect/Boss meteor.bmp", 1620, 640, 4, 2, true, RGB(255, 0, 255));
	//���� ���� ����
	IMAGEMANAGER->addFrameImage("BossMeteor2", "Resource/IMG/effect/Boss meteor2.bmp", 2424, 320, 6, 1, true, RGB(255, 0, 255));
	//���� ��Ʈ ������
	IMAGEMANAGER->addFrameImage("BossPhase1", "Resource/IMG/effect/Boss phase1.bmp", 299, 82, 3, 1, true, RGB(255, 0, 255));
	//���� ������� �ǰ�
	IMAGEMANAGER->addFrameImage("BossSmash", "Resource/IMG/effect/Boss smash.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("BossStand", "Resource/IMG/effect/Boss stand.bmp", 607, 55, 8, 1, true, RGB(255, 0, 255));
	//�ٴڱտ� 1��
	IMAGEMANAGER->addFrameImage("BossStand2", "Resource/IMG/effect/Boss stand2.bmp", 3390, 144, 7, 1, true, RGB(255, 0, 255));
	//��� �ı�(����)
	IMAGEMANAGER->addFrameImage("boss_effect5", "Resource/IMG/effect/boss_effect5.bmp", 800, 90, 7, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("crush", "Resource/IMG/effect/crush.bmp", 190, 193, 1, 1, true, RGB(255, 0, 255));
	//��� �ı�(���)
	IMAGEMANAGER->addFrameImage("dashAttackEffect", "Resource/IMG/effect/dashAttackEffect.bmp", 400, 45, 7, 1, true, RGB(255, 0, 255));
	//����Ʈ ����
	IMAGEMANAGER->addFrameImage("effecBlue", "Resource/IMG/effect/effec_blue.bmp", 720, 80, 9, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("effectSpark", "Resource/IMG/effect/effect_spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("effectStar", "Resource/IMG/effect/effect_star.bmp", 900, 60, 15, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("etBoomBig", "Resource/IMG/effect/et_boom_big.bmp", 960, 89, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("explosion", "Resource/IMG/effect/explosion.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
	//??(���� ��ý����� ��ø)
	IMAGEMANAGER->addFrameImage("explosion1", "Resource/IMG/effect/explosion1.bmp", 12480, 900, 10, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("explosion2", "Resource/IMG/effect/explosion2.bmp", 1701, 247, 7, 1, true, RGB(255, 0, 255));
	//�ٴڱտ� 2��
	IMAGEMANAGER->addFrameImage("groundbreak", "Resource/IMG/effect/groundbreak.bmp", 256, 128, 1, 1, true, RGB(255, 0, 255));
	//���Ǳ� �ı�
	IMAGEMANAGER->addFrameImage("objBreak", "Resource/IMG/effect/obj break.bmp", 3304, 248, 14, 1, true, RGB(255, 0, 255));
	//�÷��̾� �ν�
	IMAGEMANAGER->addFrameImage("point", "Resource/IMG/effect/point.bmp", 560, 70, 8, 1, true, RGB(255, 0, 255));
	//�÷��̾� ���� frameY(2)
	IMAGEMANAGER->addFrameImage("run", "Resource/IMG/effect/run.bmp", 2544, 246, 12, 2, true, RGB(255, 0, 255));
	//���� ����
	IMAGEMANAGER->addFrameImage("runL", "Resource/IMG/effect/runL.bmp", 2784, 126, 12, 1, true, RGB(255, 0, 255));
	//���� ����
	IMAGEMANAGER->addFrameImage("runR", "Resource/IMG/effect/runR.bmp", 2544, 123, 12, 1, true, RGB(255, 0, 255));
	//���ͱ���
	IMAGEMANAGER->addFrameImage("shake", "Resource/IMG/effect/shake.bmp", 268, 127, 2, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("spark", "Resource/IMG/effect/spark.bmp", 512, 128, 4, 1, true, RGB(255, 0, 255));
	//??
	IMAGEMANAGER->addFrameImage("star", "Resource/IMG/effect/star.bmp", 1350, 90, 15, 1, true, RGB(255, 0, 255));
	//����
	IMAGEMANAGER->addFrameImage("stun", "Resource/IMG/effect/stun.bmp", 420, 54, 6, 1, true, RGB(255, 0, 255));
	//}*/



	//�������������� ������ & ������Ʈ ��������������//
	//*{

	//������
	//Resource/IMG/item
	//�˷ο�
	IMAGEMANAGER->addImage("aloe", "Resource/IMG/item/aloe.bmp", 50, 76, true, RGB(255, 0, 255));
	//�ܹ���
	IMAGEMANAGER->addImage("hamburger", "Resource/IMG/item/hamburger.bmp", 64, 55, true, RGB(255, 0, 255));
	//���̽�ũ��
	IMAGEMANAGER->addImage("icecream", "Resource/IMG/item/icecream.bmp", 55, 70, true, RGB(255, 0, 255));
	//���
	IMAGEMANAGER->addImage("meat", "Resource/IMG/item/meat.bmp", 60, 51, true, RGB(255, 0, 255));
	//����Ƣ��
	IMAGEMANAGER->addImage("tempura", "Resource/IMG/item/tempura.bmp", 58, 60, true, RGB(255, 0, 255));

	//������Ʈ
	//Resource/IMG/object
	//���
	IMAGEMANAGER->addImage("apple", "Resource/IMG/object/apple.bmp", 100, 100, true, RGB(255, 0, 255));
	//����
	IMAGEMANAGER->addImage("chili", "Resource/IMG/object/chili.bmp", 100, 100, true, RGB(255, 0, 255));
	//ġŲ
	IMAGEMANAGER->addImage("hen", "Resource/IMG/object/hen.bmp", 100, 100, true, RGB(255, 0, 255));
	//å��
	IMAGEMANAGER->addImage("desk", "Resource/IMG/object/desk.bmp", 147, 162, true, RGB(255, 0, 255));
	//���� å��
	IMAGEMANAGER->addImage("teachers_desk", "Resource/IMG/object/teachers_desk.bmp", 83, 34, true, RGB(255, 0, 255));
	//���̺�
	IMAGEMANAGER->addImage("table", "Resource/IMG/object/table.bmp", 339, 162, true, RGB(255, 0, 255));
	//��Ÿ��
	IMAGEMANAGER->addImage("fence", "Resource/IMG/object/fence.bmp", 476, 71, true, RGB(255, 0, 255));
	//��� ����1
	IMAGEMANAGER->addImage("particle_1", "Resource/IMG/object/pillar_particle_1.bmp", 64, 64, true, RGB(255, 0, 255));
	//��� ����2																					 
	IMAGEMANAGER->addImage("particle_2", "Resource/IMG/object/pillar_particle_2.bmp", 64, 64, true, RGB(255, 0, 255));
	//��� ����3																					
	IMAGEMANAGER->addImage("particle_3", "Resource/IMG/object/pillar_particle_3.bmp", 64, 64, true, RGB(255, 0, 255));
	//����
	IMAGEMANAGER->addFrameImage("gold", "Resource/IMG/object/gold_coin_spin.bmp", 512, 512, 4, 4, true, RGB(255, 0, 255));
	//����
	IMAGEMANAGER->addFrameImage("money", "Resource/IMG/object/money_green.bmp", 576, 432, 4, 4, true, RGB(255, 0, 255));
	//�Ĺ� ���
	IMAGEMANAGER->addFrameImage("back_pillar", "Resource/IMG/object/pillar.bmp", 390, 678, 2, 1, true, RGB(255, 0, 255));
	//���� ���
	IMAGEMANAGER->addFrameImage("first_pillar", "Resource/IMG/object/pillar_big.bmp", 390, 957, 2, 1, true, RGB(255, 0, 255));
	//�ҿ�
	IMAGEMANAGER->addFrameImage("pet", "Resource/IMG/object/pet.bmp", 576, 96, 6, 1, true, RGB(255, 0, 255));
	//�����
	IMAGEMANAGER->addFrameImage("bat", "Resource/IMG/object/bat.bmp", 179, 104, 1, 2, true, RGB(255, 0, 255));
	//���Ǳ�
	IMAGEMANAGER->addFrameImage("vendingMachine", "Resource/IMG/object/vendingMachine.bmp", 525, 260, 2, 1, true, RGB(255, 0, 255));
	//}*/


	//�������������� �������� & UI ��������������//
	//*{

	//��������
	//Resource/IMG/stage
	IMAGEMANAGER->addImage("boss1", "Resource/IMG/stage/boss1.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("boss2", "Resource/IMG/stage/boss2.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("easy", "Resource/IMG/stage/easy.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("hard", "Resource/IMG/stage/hard.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("normal", "Resource/IMG/stage/normal.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));

#pragma endregion SFXPATH

	//========================�̹��� �ҽ�======================
#pragma region IMAGESOURCES

//�÷��̾� �̹���
#pragma region PLAYERIMAGE

	//��ٸ�
	//��ٸ� ������
	IMAGEMANAGER->addFrameImage("PLAYER_climb", "Resource/IMG/character/player/climb.bmp", 720, 237, 6, 1, true, RGB(255, 0, 255));

	//��ٸ� Ÿ�� �� �ö����� �̹���
	IMAGEMANAGER->addFrameImage("PLAYER_climbTop", "Resource/IMG/character/player/climbTop.bmp", 288, 192, 3, 1, true, RGB(255, 0, 255));

	//��ٸ� Ÿ�� �����÷��� �Ҷ� �̹���
	IMAGEMANAGER->addFrameImage("PLAYER_climbTopDown", "Resource/IMG/character/player/climbDown.bmp", 288, 234, 3, 1, true, RGB(255, 0, 255));

	//�޺� ����
	//�޺����� 1�϶� // �ָ�
	IMAGEMANAGER->addFrameImage("PLAYER_comboAttack1", "Resource/IMG/character/player/comboAttack1.bmp", 1548, 390, 6, 2, true, RGB(255, 0, 255));

	//�޺����� 2�϶� // ������
	IMAGEMANAGER->addFrameImage("PLAYER_comboAttack2", "Resource/IMG/character/player/comboAttack2.bmp", 1869, 402, 7, 2, true, RGB(255, 0, 255));

	//�޺����� 3�϶� /�ٸ� ����������̤�
	IMAGEMANAGER->addFrameImage("PLAYER_comboAttack3", "Resource/IMG/character/player/comboAttack3.bmp", 2970, 462, 9, 2, true, RGB(255, 0, 255));

	//�޸��� ����
	//�뽬 ����  //�ָ�
	IMAGEMANAGER->addFrameImage("PLAYER_dashAttack", "Resource/IMG/character/player/dashAttack.bmp", 2565, 414, 8, 2, true, RGB(255, 0, 255));

	//�뽬 ���Ƽ� ����
	IMAGEMANAGER->addFrameImage("PLAYER_dashSAttack", "Resource/IMG/character/player/dashSAttack.bmp", 5460, 456, 21, 2, true, RGB(255, 0, 255));


	//�տ��� �¾����� ������� �Ѿ����鼭 ���
	IMAGEMANAGER->addFrameImage("PLAYER_dead", "Resource/IMG/character/player/dead.bmp", 7280, 478, 26, 2, true, RGB(255, 0, 255));

	//�ذ� �¾Ƽ� ���󰡸鼭 �ȸ����� �Ѿ����鼭 ���
	IMAGEMANAGER->addFrameImage("PLAYER_down", "Resource/IMG/character/player/down.bmp", 4968, 390, 23, 2, true, RGB(255, 0, 255));

	//�ڿ��� �¾����� ������� �Ѿ����鼭 ��� ���ӳ�����
	IMAGEMANAGER->addFrameImage("PLAYER_gameOver", "Resource/IMG/character/player/gameOver.bmp", 6240, 282, 26, 2, true, RGB(255, 0, 255));

	//���
	IMAGEMANAGER->addFrameImage("PLAYER_grab", "Resource/IMG/character/player/grab.bmp", 270, 384, 2, 2, true, RGB(255, 0, 255));

	//������
	IMAGEMANAGER->addFrameImage("PLAYER_grabFail", "Resource/IMG/character/player/grabFail.bmp", 812, 422, 4, 2, true, RGB(255, 0, 255));

	//����
	IMAGEMANAGER->addFrameImage("PLAYER_guard", "Resource/IMG/character/player/guard.bmp", 351, 378, 3, 2, true, RGB(255, 0, 255));

	//Ÿ��
	IMAGEMANAGER->addFrameImage("PLAYER_hit", "Resource/IMG/character/player/hit.bmp", 246, 420, 2, 2, true, RGB(255, 0, 255));

	//IDLE
	IMAGEMANAGER->addFrameImage("PLAYER_Idle", "Resource/IMG/character/player/idle.bmp", 1440, 450, 12, 2, true, RGB(255, 0, 255));

	//JUMP
	IMAGEMANAGER->addFrameImage("PLAYER_jump", "Resource/IMG/character/player/jump.bmp", 480, 640, 3, 2, true, RGB(255, 0, 255));

	//JUMPAttack
	IMAGEMANAGER->addFrameImage("PLAYER_jumpAttack", "Resource/IMG/character/player/jump_Attack.bmp", 1560, 432, 10, 2, true, RGB(255, 0, 255));

	//PICK
	IMAGEMANAGER->addFrameImage("PLAYER_pick", "Resource/IMG/character/player/pick.bmp", 222, 450, 2, 2, true, RGB(255, 0, 255));

	//ROLL
	IMAGEMANAGER->addFrameImage("PLAYER_roll", "Resource/IMG/character/player/roll.bmp", 900, 402, 9, 2, true, RGB(255, 0, 255));

	//RUN
	IMAGEMANAGER->addFrameImage("PLAYER_run", "Resource/IMG/character/player/run.bmp", 2736, 384, 16, 2, true, RGB(255, 0, 255));

	//������� ����
	IMAGEMANAGER->addFrameImage("PLAYER_sAttack", "Resource/IMG/character/player/sAttack.bmp", 3030, 560, 10, 2, true, RGB(255, 0, 255));

	//ȸ��ȸ���� ����
	IMAGEMANAGER->addFrameImage("PLAYER_sAttackDown", "Resource/IMG/character/player/sAttackDown.bmp", 7992, 438, 24, 2, true, RGB(255, 0, 255));

	//�ٿ���¿��� �ٽ� idle��
	IMAGEMANAGER->addFrameImage("PLAYER_stand", "Resource/IMG/character/player/stand.bmp", 1863, 450, 9, 2, true, RGB(255, 0, 255));

	//���鿡 �پ��ִ�
	IMAGEMANAGER->addFrameImage("PLAYER_stick", "Resource/IMG/character/player/stick.bmp", 294, 330, 2, 2, true, RGB(255, 0, 255));

	//�ٴ��� �� ����
	IMAGEMANAGER->addFrameImage("PLAYER_stomp", "Resource/IMG/character/player/stomp.bmp", 1290, 420, 10, 2, true, RGB(255, 0, 255));

	//���ϻ���
	IMAGEMANAGER->addFrameImage("PLAYER_stun", "Resource/IMG/character/player/stun.bmp", 384, 384, 4, 2, true, RGB(255, 0, 255));

	//������
	IMAGEMANAGER->addFrameImage("PLAYER_wait", "Resource/IMG/character/player/wait.bmp", 2520, 440, 18, 2, true, RGB(255, 0, 255));

	//�ȴ»���
	IMAGEMANAGER->addFrameImage("PLAYER_walk", "Resource/IMG/character/player/walk.bmp", 1476, 402, 12, 2, true, RGB(255, 0, 255));

	//����...?
	IMAGEMANAGER->addFrameImage("PLAYER_wallet", "Resource/IMG/character/player/wallet.bmp", 2964, 420, 26, 2, true, RGB(255, 0, 255));

	//�߱�����̷� ����
	IMAGEMANAGER->addFrameImage("PLAYER_batAttack", "Resource/IMG/character/player/wBatAttack.bmp", 1700, 700, 5, 2, true, RGB(255, 0, 255));

	//�߱������ IDLE
	IMAGEMANAGER->addFrameImage("PLAYER_batIdle", "Resource/IMG/character/player/wBatIdle.bmp", 1440, 560, 12, 2, true, RGB(255, 0, 255));

	//�߱������ JUMP
	IMAGEMANAGER->addFrameImage("PLAYER_batJump", "Resource/IMG/character/player/wBatJump.bmp", 480, 640, 3, 2, true, RGB(255, 0, 255));

	//�߱������ RUN
	IMAGEMANAGER->addFrameImage("PLAYER_batRun", "Resource/IMG/character/player/wBatRun.bmp", 6784, 560, 16, 2, true, RGB(255, 0, 255));

	//�߱������ WALK
	IMAGEMANAGER->addFrameImage("PLAYER_batWalk", "Resource/IMG/character/player/wBatWalk.bmp", 1476, 500, 8, 2, true, RGB(255, 0, 255));

	//�߱������ THROW
	IMAGEMANAGER->addFrameImage("PLAYER_batThrow", "Resource/IMG/character/player/wBatThrow.bmp", 1616, 600, 8, 2, true, RGB(255, 0, 255));

#pragma endregion PLAYERIMAGE

	//NPC �̹���=============================(��)
#pragma region NPCIMAGE
	//����1
	IMAGEMANAGER->addFrameImage("BOY1", "Resource/IMG/character/npc/boy1.bmp", 396, 480, 4, 2, true, RGB(255, 0, 255));
	//����1 ����
	IMAGEMANAGER->addFrameImage("BOY1", "Resource/IMG/character/npc/boy1_react.bmp", 306, 480, 3, 2, true, RGB(255, 0, 255));

	//����1
	IMAGEMANAGER->addFrameImage("GIRL1", "Resource/IMG/character/npc/girl.bmp", 312, 396, 4, 2, true, RGB(255, 0, 255));
	//����1 ����
	IMAGEMANAGER->addFrameImage("GIRL1", "Resource/IMG/character/npc/girl1_react.bmp", 297, 384, 3, 2, true, RGB(255, 0, 255));

	//����2
	IMAGEMANAGER->addFrameImage("GIRL2", "Resource/IMG/character/npc/girl2.bmp", 324, 522, 4, 2, true, RGB(255, 0, 255));
	//����2 ����
	IMAGEMANAGER->addFrameImage("GIRL2", "Resource/IMG/character/npc/girl2_react.bmp", 360, 504, 3, 2, true, RGB(255, 0, 255));

#pragma endregion NPCIMAGE

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

	//IMAGEMANAGER->addImage("volumeBack", "resources/bmp/volumeBarBack.bmp", 381, 4, true, RGB(255, 0, 255)); ����

	//SCHOOLBOYIMAGE

	IMAGEMANAGER->addFrameImage("SCHOOLBOY_backdown", "Resource/IMG/character/enemy/scoolBoy/backdown.bmp", 7695, 438, 27, 2, true, RGB(255, 0, 255));			//�Ѿ�������
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_begging", "Resource/IMG/character/enemy/scoolBoy/begging.bmp", 216, 354, 2, 2, true, RGB(255, 0, 255));				//�׺�
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_block", "Resource/IMG/character/enemy/scoolBoy/block.bmp", 459, 438, 3, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_ComboAttack1", "Resource/IMG/character/enemy/scoolBoy/ComboAttack1.bmp", 2352, 426, 7, 2, true, RGB(255, 0, 255));	//����1
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_ComboAttack2", "Resource/IMG/character/enemy/scoolBoy/ComboAttack2.bmp", 1757, 444, 7, 2, true, RGB(255, 0, 255));	//����2
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_ComboAttack3", "Resource/IMG/character/enemy/scoolBoy/ComboAttack3.bmp", 1890, 558, 9, 2, true, RGB(255, 0, 255));	//����3
								 
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_gethit", "Resource/IMG/character/enemy/scoolBoy/gethit.bmp", 1728, 450, 9, 2, true, RGB(255, 0, 255));				//�´� ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_HeldHit", "Resource/IMG/character/enemy/scoolBoy/HeldHit.bmp", 576, 372, 3, 2, true, RGB(255, 0, 255));				//������ �´� ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_HeldRelease", "Resource/IMG/character/enemy/scoolBoy/HeldRelease.bmp", 660, 480, 4, 2, true, RGB(255, 0, 255));		//������ Ǭ ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_idle", "Resource/IMG/character/enemy/scoolBoy/idle.bmp", 1224, 432, 8, 2, true, RGB(255, 0, 255));					//�⺻
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_jump", "Resource/IMG/character/enemy/scoolBoy/jump.bmp", 423, 486, 3, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_jumpAttack", "Resource/IMG/character/enemy/scoolBoy/jumpAttack.bmp", 1224, 468, 6, 2, true, RGB(255, 0, 255));		//���� ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_ladder", "Resource/IMG/character/enemy/scoolBoy/ladder.bmp", 738, 264, 6, 1, true, RGB(255, 0, 255));				//���ö󰡴µ���
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_run", "Resource/IMG/character/enemy/scoolBoy/run.bmp", 1920, 390, 10, 2, true, RGB(255, 0, 255));					//�޸���
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_Stun", "Resource/IMG/character/enemy/scoolBoy/Stun.bmp", 633, 408, 4, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_transition", "Resource/IMG/character/enemy/scoolBoy/transition.bmp", 405, 183, 3, 1, true, RGB(255, 0, 255));		//���ö�� ��
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_upercut", "Resource/IMG/character/enemy/scoolBoy/upercut.bmp", 1386, 502, 7, 2, true, RGB(255, 0, 255));				//������
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_Walk", "Resource/IMG/character/enemy/scoolBoy/Walk.bmp", 1620, 444, 12, 2, true, RGB(255, 0, 255));					//�ȱ�
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_WAttack", "Resource/IMG/character/enemy/scoolBoy/WAttack.bmp", 1830, 660, 5, 2, true, RGB(255, 0, 255));				//���� �ֵѱ�
								 
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_weapon_swing", "Resource/IMG/character/enemy/scoolBoy/weapon_swing.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));//���� �´� ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_weaponHit", "Resource/IMG/character/enemy/scoolBoy/weaponHit.bmp", 5415, 438, 19, 2, true, RGB(255, 0, 255));		//���� ���� ����
								 
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_WIdle", "Resource/IMG/character/enemy/scoolBoy/WIdle.bmp", 1224, 552, 8, 2, true, RGB(255, 0, 255));					//���� �� ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_WJump", "Resource/IMG/character/enemy/scoolBoy/WJump.bmp", 432, 468, 3, 2, true, RGB(255, 0, 255));					//���� ����
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_WRun", "Resource/IMG/character/enemy/scoolBoy/WRun.bmp", 2250, 516, 10, 2, true, RGB(255, 0, 255));					//���� ��
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_WThrow", "Resource/IMG/character/enemy/scoolBoy/WThrow.bmp", 1752, 564, 8, 2, true, RGB(255, 0, 255));				//���� ������
	IMAGEMANAGER->addFrameImage("SCHOOLBOY_WWalk", "Resource/IMG/character/enemy/scoolBoy/WWalk.bmp", 1572, 556, 12, 2, true, RGB(255, 0, 255));				//���� ��� �ȱ�



	//Resource/IMG/character/enemy/

#pragma endregion SCHOOLBOYIMAGE

#pragma region SCHOOLGIRL

	//SCHOOLGIRLIMAGE

	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_attack1", "Resource/IMG/character/enemy/schoolGirl/attack1.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));				//����1 �ִ�������? 
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_backdown", "Resource/IMG/character/enemy/schoolGirl/backdown.bmp", 6939, 376, 27, 2, true, RGB(255, 0, 255));			//�Ѿ����� �Ͼ
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_begging", "Resource/IMG/character/enemy/schoolGirl/begging.bmp", 378, 336, 3, 2, true, RGB(255, 0, 255));				//�׺�
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_block", "Resource/IMG/character/enemy/schoolGirl/block.bmp", 351, 338, 3, 2, true, RGB(255, 0, 255));					//����
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_ComboAttack1", "Resource/IMG/character/enemy/schoolGirl/ComboAttack1.bmp", 1239, 354, 7, 2, true, RGB(255, 0, 255));	//�޺� ����1
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_ComboAttack2", "Resource/IMG/character/enemy/schoolGirl/ComboAttack2.bmp", 2208, 354, 8, 2, true, RGB(255, 0, 255));	//�޺� ����2
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_ComboAttack3", "Resource/IMG/character/enemy/schoolGirl/ComboAttack3.bmp", 2412, 414, 12, 2, true, RGB(255, 0, 255));	//�޺� ����3
	
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_gethit", "Resource/IMG/character/enemy/schoolGirl/gethit.bmp", 1431, 360, 9, 2, true, RGB(255, 0, 255));				//�ǰݴ���
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_HeldHit", "Resource/IMG/character/enemy/schoolGirl/HeldHit.bmp", 576, 336, 4, 2, true, RGB(255, 0, 255));				//������ �ǰݴ���
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_HeldRelease", "Resource/IMG/character/enemy/schoolGirl/HeldRelease.bmp", 528, 360, 4, 2, true, RGB(255, 0, 255));		//������ ����
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_idle", "Resource/IMG/character/enemy/schoolGirl/idle.bmp", 1170, 354, 10, 2, true, RGB(255, 0, 255));					//�⺻
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_jump", "Resource/IMG/character/enemy/schoolGirl/jump.bmp", 342, 366, 3, 2, true, RGB(255, 0, 255));						//����
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_jumpAttack", "Resource/IMG/character/enemy/schoolGirl/jumpAttack.bmp", 1197, 354, 7, 2, true, RGB(255, 0, 255));		//���� ����
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_ladder", "Resource/IMG/character/enemy/schoolGirl/ladder.bmp", 594, 219, 6, 1, true, RGB(255, 0, 255));					//���ö󰡱�
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_run", "Resource/IMG/character/enemy/schoolGirl/run.bmp", 1470, 330, 10, 2, true, RGB(255, 0, 255));						//�޸���
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_stun", "Resource/IMG/character/enemy/schoolGirl/stun.bmp", 456, 324, 4, 2, true, RGB(255, 0, 255));						//����
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_transition", "Resource/IMG/character/enemy/schoolGirl/transition.bmp", 387, 168, 3, 1, true, RGB(255, 0, 255));			//���ö� �� ��
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_walk", "Resource/IMG/character/enemy/schoolGirl/walk.bmp", 1296, 372, 12, 2, true, RGB(255, 0, 255));					//�ȱ�
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_WAttack", "Resource/IMG/character/enemy/schoolGirl/WAttack.bmp", 1580, 558, 5, 2, true, RGB(255, 0, 255));				//���� ����
	
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_weapon_swing", "Resource/IMG/character/enemy/schoolGirl/weapon_swing.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));	//���� ���� �ǰݴ��ҽ�
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_weaponHit", "Resource/IMG/character/enemy/schoolGirl/weaponHit.bmp", 4369, 336, 17, 2, true, RGB(255, 0, 255));			//���� �ǰݴ��ҽ�
	
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_WIdle", "Resource/IMG/character/enemy/schoolGirl/WIdle.bmp", 1950, 408, 10, 2, true, RGB(255, 0, 255));					//���� �⺻
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_WJump", "Resource/IMG/character/enemy/schoolGirl/WJump.bmp", 429, 450, 3, 2, true, RGB(255, 0, 255));					//���� ����
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_WRun", "Resource/IMG/character/enemy/schoolGirl/WRun.bmp", 1880, 458, 10, 2, true, RGB(255, 0, 255));					//���� �޸���
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_WThrow", "Resource/IMG/character/enemy/schoolGirl/WThrow.bmp", 1488, 540, 8, 2, true, RGB(255, 0, 255));				//���� ������
	IMAGEMANAGER->addFrameImage("SCHOOLGIRL_WWalk", "Resource/IMG/character/enemy/schoolGirl/WWalk.bmp", 2232, 502, 12, 2, true, RGB(255, 0, 255));					//���� �ȱ�
	
#pragma endregion SCHOOLGIRL

#pragma endregion ENEMYIMAGE

#pragma region UI

		//battle
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
	IMAGEMANAGER->addFrameImage("lockAppear", "Resource/IMG/ui/battle/Stage_UI_Lock_Appear.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

	//�������� ��ݽ� �ڹ��� ����
	IMAGEMANAGER->addFrameImage("lockDamage1", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage1.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

	//�������� ��ݽ� �ڹ��� �� ����
	IMAGEMANAGER->addFrameImage("lockDamage2", "Resource/IMG/ui/battle/Stage_UI_Lock_Damage2.bmp", 650, 116, 7, 1, true, RGB(255, 0, 255));

	//�������� ��ݽ� �ڹ��� ��¥ ����
	IMAGEMANAGER->addFrameImage("lockDisappear", "Resource/IMG/ui/battle/Stage_UI_Lock_Disappear.bmp", 840, 130, 7, 1, true, RGB(255, 0, 255));

	//��Ʈ UI <- ���� �������� �� �����°� ������,.
	IMAGEMANAGER->addImage("UIHeart", "Resource/IMG/ui/battle/UI_heart.bmp", 6400, 3600, true, RGB(255, 0, 255));

	//�÷��̾� ������
	IMAGEMANAGER->addImage("playerPortrait", "Resource/IMG/ui/battle/UI_Kyoko_Portrait.bmp", 120, 135, true, RGB(255, 0, 255));

	//�÷��̾� UI��
	IMAGEMANAGER->addImage("playerBar", "Resource/IMG/ui/battle/UI_Player_bar.bmp", 414, 94, true, RGB(255, 0, 255));

	//���� ǥ��-�÷��̾� ����� ��
	IMAGEMANAGER->addImage("shopDoor1", "Resource/IMG/ui/battle/UI_Shop_Door1.bmp", 52, 45, true, RGB(255, 0, 255));

	//���� ǥ��-�÷��̾� �� ��
	IMAGEMANAGER->addImage("shopDoor2", "Resource/IMG/ui/battle/UI_Shop_Door2.bmp", 52, 45, true, RGB(255, 0, 255));

	//�� ��� ǥ��
	IMAGEMANAGER->addImage("lockedDoor", "Resource/IMG/ui/battle/UI_Locked_Door.bmp", 52, 76, true, RGB(255, 0, 255));

	//�� ����-�÷��̾� ����� ��
	IMAGEMANAGER->addImage("unlockDoor1", "Resource/IMG/ui/battle/UI_UnLocked_Door.bmp", 52, 76, true, RGB(255, 0, 255));

	//�� ����-�÷��̾� �� ��
	IMAGEMANAGER->addImage("unlockDoor2", "Resource/IMG/ui/battle/UI_UnLocked_Door22.bmp", 52, 76, true, RGB(255, 0, 255));



	//inven
	//�ڵ���
	IMAGEMANAGER->addImage("phone", "Resource/IMG/ui/inven/phone.bmp", 480, 642, true, RGB(255, 0, 255));

	//�����
	IMAGEMANAGER->addImage("bat", "Resource/IMG/ui/inven/ui_bat.bmp", 80, 79, true, RGB(255, 0, 255));



	//scene
	//��ŸƮ�� ���
	IMAGEMANAGER->addImage("startSceneBackground", "Resource/IMG/ui/scene/StartScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

	//��ŸƮ�� ������
	IMAGEMANAGER->addImage("startSceneFrame", "Resource/IMG/ui/scene/StartScene_Frame.bmp", 1600, 900, true, RGB(255, 0, 255));

	//��ŸƮ�� ����
	IMAGEMANAGER->addImage("startSceneKyoko", "Resource/IMG/ui/scene/StartScene_Kyoko.bmp", 672, 1024, true, RGB(255, 0, 255));

	//��ŸƮ�� �̻���
	IMAGEMANAGER->addImage("startSceneMisako", "Resource/IMG/ui/scene/StartScene_Misako.bmp", 672, 1024, true, RGB(255, 0, 255));

	//��ŸƮ�� Ÿ��Ʋ(����)
	IMAGEMANAGER->addImage("startSceneTitle", "Resource/IMG/ui/scene/StartScene_Title.bmp", 537, 308, true, RGB(255, 0, 255));

	//�ε���
	IMAGEMANAGER->addImage("loadingScene", "Resource/IMG/ui/scene/LoadingScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

	//�ε��� �����ϴ� ��������Ʈ
	IMAGEMANAGER->addFrameImage("loadingSprite", "Resource/IMG/ui/scene/loadingSprite.bmp", 1152, 227, 4, 1, true, RGB(255, 0, 255));

	//���� ���
	IMAGEMANAGER->addImage("shopBackground", "Resource/IMG/ui/scene/ShopScene_background.bmp", 1280, 720, true, RGB(255, 0, 255));

	//���� ���� ��ư
	IMAGEMANAGER->addImage("shopBuyButton", "Resource/IMG/ui/scene/ShopScene_buyButton.bmp", 145, 92, true, RGB(255, 0, 255));

	//���� ������ ����������-����Ʈ
	IMAGEMANAGER->addImage("shopList", "Resource/IMG/ui/scene/ShopScene_list.bmp", 403, 168, true, RGB(255, 0, 255));

	//���̾�α� �޹��
	IMAGEMANAGER->addImage("dialogWindow", "Resource/IMG/ui/scene/dialogWindow.bmp", 1280, 150, true, RGB(255, 0, 255));

	//���� ���� ���-�̰� �����ؾߵɵ�!!!!!!!!!!!!!!!!!!!!!!!!
	IMAGEMANAGER->addImage("endScene", "Resource/IMG/ui/scene/endScene.bmp", 1280, 720, true, RGB(255, 0, 255));

	//���̾�α� �÷��̾�
	IMAGEMANAGER->addImage("kyoko1", "Resource/IMG/ui/scene/kyoko_1.bmp", 386, 460, true, RGB(255, 0, 255));

	//���̾�α� �÷��̾�
	IMAGEMANAGER->addImage("kyoko2", "Resource/IMG/ui/scene/kyoko_2.bmp", 386, 460, true, RGB(255, 0, 255));

	//���̾�α� �÷��̾�
	IMAGEMANAGER->addImage("kyoko3", "Resource/IMG/ui/scene/kyoko_3.bmp", 386, 460, true, RGB(255, 0, 255));

	//���̾�α� �÷��̾� �̸�
	IMAGEMANAGER->addImage("kyokoName", "Resource/IMG/ui/scene/kyoko_name.bmp", 200, 76, true, RGB(255, 0, 255));

	//���̾�α� ����
	IMAGEMANAGER->addImage("misuzu1", "Resource/IMG/ui/scene/misuzu_1.bmp", 386, 460, true, RGB(255, 0, 255));

	//���̾�α� ����
	IMAGEMANAGER->addImage("misuzu2", "Resource/IMG/ui/scene/misuzu_2.bmp", 386, 460, true, RGB(255, 0, 255));

	//���̾�α� ����
	IMAGEMANAGER->addImage("misuzu3", "Resource/IMG/ui/scene/misuzu_3.bmp", 386, 460, true, RGB(255, 0, 255));

	//���̾�α� ���� �̸�
	IMAGEMANAGER->addImage("misuzuName", "Resource/IMG/ui/scene/misuzu_name.bmp", 200, 76, true, RGB(255, 0, 255));

	//���̾�α� ��ŵ ǥ��-����
	IMAGEMANAGER->addImage("skipOutlines1", "Resource/IMG/ui/scene/UI_skip_outlines_FULL.bmp", 206, 78, true, RGB(255, 0, 255));

	//���̾�α� ��ŵ ǥ��-ȭ��Ʈ
	IMAGEMANAGER->addImage("skipOutlines2", "Resource/IMG/ui/scene/misuzu_name.bmp", 206, 78, true, RGB(255, 0, 255));

	//���̺� �ε�
	IMAGEMANAGER->addImage("saveLoadClose1", "Resource/IMG/ui/scene/save_load_close.bmp", 365, 150, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("saveLoadOpen1", "Resource/IMG/ui/scene/save_load_open.bmp", 365, 150, true, RGB(255, 0, 255));

	//���̺� �ε� ������
	IMAGEMANAGER->addImage("saveLoadClose2", "Resource/IMG/ui/scene/save_load_close0.bmp", 365, 150, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("saveLoadOpen2", "Resource/IMG/ui/scene/save_load_open0.bmp", 365, 150, true, RGB(255, 0, 255));

	//���̺� �ε� ��������1
	IMAGEMANAGER->addImage("saveLoadClose3", "Resource/IMG/ui/scene/save_load_close1.bmp", 365, 150, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("saveLoadOpen3", "Resource/IMG/ui/scene/save_load_open1.bmp", 365, 150, true, RGB(255, 0, 255));

	//ĳ���� ����Ʈ�� ��� �Ķ���
	IMAGEMANAGER->addImage("selectSceneBackground1", "Resource/IMG/ui/scene/SelectScene_Background.bmp", 1280, 720, true, RGB(255, 0, 255));

	//ĳ���� ����Ʈ�� ��� �ʷϻ�
	IMAGEMANAGER->addImage("selectSceneBackground2", "Resource/IMG/ui/scene/SelectScene_background2.bmp", 1280, 720, true, RGB(255, 0, 255));

	//����Ʈ�� ĳ���� �Ϸ���Ʈ
	IMAGEMANAGER->addImage("selectSceneIllust", "Resource/IMG/ui/scene/SelectScene_illust.bmp", 996, 1705, true, RGB(255, 0, 255));

	//����Ʈ�� ���� �������� ��
	IMAGEMANAGER->addImage("selectSceneKyoko1", "Resource/IMG/ui/scene/SelectScene_kyoko.bmp", 375, 675, true, RGB(255, 0, 255));
	//������ ��
	IMAGEMANAGER->addImage("selectSceneKyoko2", "Resource/IMG/ui/scene/SelectScene_kyoko2.bmp", 375, 675, true, RGB(255, 0, 255));
	//�޹��
	IMAGEMANAGER->addImage("selectSceneKyokoBackground", "Resource/IMG/ui/scene/SelectScene_kyoko_background.bmp", 360, 563, true, RGB(255, 0, 255));

	//����Ʈ�� �̻��� �������� ��
	IMAGEMANAGER->addImage("selectSceneMisako1", "Resource/IMG/ui/scene/SelectScene_misako.bmp", 375, 675, true, RGB(255, 0, 255));
	//������ ��
	IMAGEMANAGER->addImage("selectSceneMisako2", "Resource/IMG/ui/scene/SelectScene_misako2.bmp", 375, 675, true, RGB(255, 0, 255));
	//�޹��
	IMAGEMANAGER->addImage("selectMisakoBackground", "Resource/IMG/ui/scene/SelectScene_misako_background.bmp", 360, 563, true, RGB(255, 0, 255));

	//����Ʈ�� �޴��� ��ư
	IMAGEMANAGER->addImage("selectSceneManualButton", "Resource/IMG/ui/scene/SelectScene_manualButton.bmp", 650, 173, true, RGB(255, 0, 255));

#pragma endregion UI


#pragma endregion IMAGESOURCES





	  /////////////////���� �ҽ�///////////////
#pragma region SFXSOURCE
//�÷��̾� ����
#pragma region PLAYERSFX
//��������
	SOUNDMANAGER->addSound("PLAYER_knee", "Resource/SFX/Player/DD2_knee.wav", false, false);

	//�׾ �������¼Ҹ�1
	SOUNDMANAGER->addSound("PLAYER_death", "Resource/SFX/Player/player_death_pitfall.wav", false, false);


	//�ȴ¼Ҹ�1
	SOUNDMANAGER->addSound("PLAYER_footStep1", "Resource/SFX/Player/player_footsteps_run_01.wav", false, false);
	//�ȴ¼Ҹ�2
	SOUNDMANAGER->addSound("PLAYER_footStep2", "Resource/SFX/Player/player_footsteps_run_02.wav", false, false);
	//�ȴ¼Ҹ�3
	SOUNDMANAGER->addSound("PLAYER_footStep3", "Resource/SFX/Player/player_footsteps_run_03.wav", false, false);



	//�°������¼Ҹ�
	SOUNDMANAGER->addSound("PLAYER_knockDown_01", "Resource/SFX/Player/gethit_knockdown_01.wav", false, false);

	//����
	SOUNDMANAGER->addSound("PLAYER_block", "Resource/SFX/Player/player_block.wav", false, false);
	//�¾����� ����
	SOUNDMANAGER->addSound("PLAYER_getHitBlock", "Resource/SFX/Player/player_gethit_blocked.wav", false, false);


	//�����¼Ҹ�1
	SOUNDMANAGER->addSound("PLAYER_climb1", "Resource/SFX/Player/player_climb_01.wav", false, false);
	//�����¼Ҹ�2
	SOUNDMANAGER->addSound("PLAYER_climb2", "Resource/SFX/Player/player_climb_02.wav", false, false);

	//��ٸ������ͼ� �����������
	SOUNDMANAGER->addSound("PLAYER_climb_Down_Ledge", "Resource/SFX/Player/player_climb_down_ledge.wav", false, false);
	//��ٸ������ͼ� �ö󰬾�����
	SOUNDMANAGER->addSound("PLAYER_climb_Up_Ledge", "Resource/SFX/Player/player_climb_up_ledge.wav", false, false);

	//�����
	SOUNDMANAGER->addSound("PLAYER_grabWall", "Resource/SFX/Player/player_grab_wall.wav", false, false);


	//�۷ι����
	SOUNDMANAGER->addSound("PLAYER_global_Catch", "Resource/SFX/Player/player_global_catch.wav", false, false);
	//���
	SOUNDMANAGER->addSound("PLAYER_grab", "Resource/SFX/Player/player_grab.wav", false, false);


	//����
	SOUNDMANAGER->addSound("PLAYER_dizzy", "Resource/SFX/Player/player_global_dizzy.wav", false, false);
	//����
	SOUNDMANAGER->addSound("PLAYER_parry", "Resource/SFX/Player/player_global_parry.wav", false, false);



	//���ſ��������
	SOUNDMANAGER->addSound("PLAYER_pickUpHeavy", "Resource/SFX/Player/player_global_pickup_weapon_heavy.wav", false, false);
	//�������������
	SOUNDMANAGER->addSound("PLAYER_pickUpLight", "Resource/SFX/Player/player_global_pickup_weapon_light.wav", false, false);
	//���ſ�����������
	SOUNDMANAGER->addSound("PLAYER_throwHeavy", "Resource/SFX/Player/player_global_throw_weapon_heavy.wav", false, false);
	//��������������
	SOUNDMANAGER->addSound("PLAYER_throwLight", "Resource/SFX/Player/player_global_throw_weapon_light.wav", false, false);


	//����
	SOUNDMANAGER->addSound("PLAYER_jump", "Resource/SFX/Player/player_jump.wav", false, false);
	//����ű
	SOUNDMANAGER->addSound("PLAYER_jumpKick", "Resource/SFX/Player/player_jump_kick.wav", false, false);
	//������ġ
	SOUNDMANAGER->addSound("PLAYER_jumpPunch", "Resource/SFX/Player/player_jump_punch.wav", false, false);
	//ȸ��ű
	SOUNDMANAGER->addSound("PLAYER_rollKick", "Resource/SFX/Player/player_kyoko_roundhouse.wav", false, false);


	//����
	SOUNDMANAGER->addSound("PLAYER_land", "Resource/SFX/Player/player_land.wav", false, false);



	//��ų��������
	SOUNDMANAGER->addSound("PLAYER_powerBomb_falling", "Resource/SFX/Player/player_misako_powerbomb_falling.wav", false, false);
	//��ų����
	SOUNDMANAGER->addSound("PLAYER_powerBomb_landing", "Resource/SFX/Player/player_misako_powerbomb_landing.wav.wav", false, false);
	//��ų����
	SOUNDMANAGER->addSound("PLAYER_powerBomb_StartUp", "Resource/SFX/Player/player_misako_powerbomb_startup.wav.wav", false, false);






	//��ġ1
	SOUNDMANAGER->addSound("PLAYER_punch1", "Resource/SFX/Player/player_punch_01.wav", false, false);
	//��ġ2
	SOUNDMANAGER->addSound("PLAYER_punch2", "Resource/SFX/Player/player_punch_02.wav", false, false);
	//��ġ3
	SOUNDMANAGER->addSound("PLAYER_punch3", "Resource/SFX/Player/player_punch_03.wav", false, false);

	//������
	SOUNDMANAGER->addSound("PLAYER_throw", "Resource/SFX/Player/player_throw.wav", false, false);

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

#pragma region GLOBAL & PICKUP

	//���� Ŭ����
	SOUNDMANAGER->addSound("bossFinal", "Resource/SFX/global/boss_finalhit.wav", true, true);
	//���� ����
	SOUNDMANAGER->addSound("bossIntro", "Resource/SFX/global/boss_intro_placard", true, true);
	//�޴�����
	//Resource/SFX/menu/

	//��������
	//Resource/SFX/weapons/

	//�ݴ� �Ⱦ�����
	//Resource/SFX/pickup/
	//���� �Ұ�
	SOUNDMANAGER->addSound("cannot", "Resource/SFX/pickup/cannot_pickup.wav", true, true);
	//??
	SOUNDMANAGER->addSound("confirm", "Resource/SFX/pickup/interface_item_pickup_confirm.wav", true, true);
	//���� ���� ������ ȹ��
	SOUNDMANAGER->addSound("intro", "Resource/SFX/pickup/interface_item_pickup_intro.wav", true, true);
	//ȹ��
	SOUNDMANAGER->addSound("outro", "Resource/SFX/pickup/interface_item_pickup_outro.wav", true, true);
	//û���� ����
	SOUNDMANAGER->addSound("bill", "Resource/SFX/pickup/pickup_bill.wav", true, true);
	//??
	SOUNDMANAGER->addSound("cat1", "Resource/SFX/pickup/pickup_cat_01.wav", true, true);
	//??
	SOUNDMANAGER->addSound("cat2", "Resource/SFX/pickup/pickup_cat_02.wav", true, true);
	//??
	SOUNDMANAGER->addSound("cat3", "Resource/SFX/pickup/pickup_cat_03.wav", true, true);
	//�Ӵ� ����
	SOUNDMANAGER->addSound("coin", "Resource/SFX/pickup/pickup_coin.wav", true, true);
	//���� ����
	SOUNDMANAGER->addSound("food", "Resource/SFX/pickup/pickup_food.wav", true, true);
	//�� ����
	SOUNDMANAGER->addSound("med", "Resource/SFX/pickup/pickup_med_01.wav", true, true);

#pragma endregion GLOBAL & PICKUP

#pragma region ENVIRONMENT

	//��ġ �μ�
	SOUNDMANAGER->addSound("benchBreak", "Resource/SFX/environment/environment_bench_break.wav", true, false);

	//ȭ�н� å�� �μ�
	SOUNDMANAGER->addSound("chemistryTableBreak", "Resource/SFX/environment/environment_chemistry_table_break.wav", true, false);

	//���� �μ�
	SOUNDMANAGER->addSound("woodSmash", "Resource/SFX/environment/environment_wood_smash.wav", true, false);
	SOUNDMANAGER->addSound("woodCrunch", "Resource/SFX/environment/environment_wood_crunch.wav", true, false);

	//�� �μ�
	SOUNDMANAGER->addSound("rockSmash", "Resource/SFX/environment/environment_rock_smash.wav", true, false);
	SOUNDMANAGER->addSound("rockCrunch", "Resource/SFX/environment/environment_rock_crunch.wav", true, false);

	//���Ǳ� �μ�
	SOUNDMANAGER->addSound("vendingmachinePunched", "Resource/SFX/environment/environment_vending_machine_punched.wav", true, false);
	SOUNDMANAGER->addSound("vendingmachineBreak", "Resource/SFX/environment/environment_vending_machine_break.wav", true, false);

	//�������� ����
	SOUNDMANAGER->addSound("dumpsterClose", "Resource/SFX/environment/environment_dumpster_close.wav", true, false);

	//�������� ����
	SOUNDMANAGER->addSound("dumpsterOpen", "Resource/SFX/environment/environment_dumpster_open.wav", true, false);

	//���� �ٴ�
	SOUNDMANAGER->addSound("electricfloorOn", "Resource/SFX/environment/environment_electricfloor_on.wav", true, false);

	//���߹� ī��Ʈ �ٿ�
	SOUNDMANAGER->addSound("explosivesCountdownBeep", "Resource/SFX/environment/environment_explosives_countdown_beep.wav", true, false);

	//���߹� ī��Ʈ �ٿ� ����..? - �Ⱦ��Ű���
	SOUNDMANAGER->addSound("explosivesCountdownBeepLoop", "Resource/SFX/environment/environment_explosives_idle_beep_loop.wav", true, true);

	//���߹� ����
	SOUNDMANAGER->addSound("explosivesExplode", "Resource/SFX/environment/environment_explosives_explode.wav", true, false);
	SOUNDMANAGER->addSound("explosivesExplodePlant", "Resource/SFX/environment/environment_explosives_plant.wav", true, false);

	//���߹� ���� �� �̸�
	SOUNDMANAGER->addSound("explosivesRinging", "Resource/SFX/environment/environment_explosives_ringing.wav", true, false);

	//�峭�� ����
	SOUNDMANAGER->addSound("toysSqueek", "Resource/SFX/environment/environment_pattinson_toys_squeek.wav", true, false);

	//ī�޶� �������� ����
	SOUNDMANAGER->addSound("projectorLoop", "Resource/SFX/environment/environment_projector_loop.wav", true, false);

#pragma endregion ENVIRONMENT

#pragma endregion SFXSOURCE




	return S_OK;
}
