#include "pch.h"
#include "playGround.h"

#define STR 128


playGround::playGround()
{
}


playGround::~playGround()
{
	//�ּ�ó���� ����. � ���� ����. 
	//    adwdvvvsc
	// git Desktop push
	// dsfwfdsf
}

//������Ʈ �׽�Ʈ �ƾƾƾ�!
//Ŀ�� �׽�Ʈ
// git desttop Test

//�ʱ�ȭ�� ���⿡�� �ض�!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	// �ּ� ���Ѻ� �Դϴ�
	//SCENEMANAGER->addScene("��Ÿ��", new soundTest);
	//SCENEMANAGER->changeScene("��Ÿ��");

	//SOUNDMANAGER->init();

	//�������������� �ֿ� �ι� ��������������//
	//*{

	//�÷��̾� �̹��� ���
	//Resource/IMG/character/player/

	//���� �̹��� ���
	//Resource/IMG/character/enemy/

	//NPC �̹��� ���
	//Resource/IMG/character/npc/

	//}*/

	//�������������� ȿ��  ��������������//
	//*{

	//ȿ��
	//Resource/IMG/effect
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
	//UI
	//Resource/IMG/ui

	//}*/

	return S_OK;
}

//�޸� ������ ����� �ض�!!!!
void playGround::release()
{
	gameNode::release();
}

//����ó���� ����ٰ�!
void playGround::update()
{
	gameNode::update();

	//SCENEMANAGER->update();
	//SOUNDMANAGER->update();
}

//����� �׷����!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, BLACKNESS);
	//==============������ ���� �ǵ帮�� ���� ============
	
	//IMAGEMANAGER->render("���", getMemDC(), 0, 0);


	//SCENEMANAGER->render();

	//TIMEMANAGER->render(getMemDC());

	//=============== �ؿ��� �ǵ������� ================
	_backBuffer->render(getHDC(), 0, 0);

}

