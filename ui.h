#pragma once
#include "gameNode.h"



class ui : public gameNode
{
private:
	float _timer;

	image _bg2;			//�ӽù��
	
	image _life[4];		//������
	image _thorn[4];	//����
	image _ladder[3];	//��ٸ�
	image _jar[2];		//�׾Ƹ�

	image _fruit[8];	//���� �̹���
	
	//image _timerBar;	//Ÿ�̸�

	int _score;			//����
	int _topScore;		//ž����
	
	int _lifeNum;		//��� ����
	int _fruitNum;		//���� ����
	int _mapFruitNum;	//�� ���� ����

	int _timeXWidth;		//Ÿ�̸�x�� ������
	int _timeCount;			//Ÿ�̸� ī��Ʈ


	float _fruitX, _fruitY;			//���� ��ġ
	float _lifeX, _lifeY;			//���� ��ġ

	float _jarX[2], _jarY[2];		//�׾Ƹ� XY��
	
	///////////////////////////////////////////////////////
	RECT _rc;						//��Ʈ�浹�� ����

	float _x, _y;					//��Ʈ�浹 Ȯ�� ���ﲨ��
	
	////////////////////////////////////////////////////////
	
	RECT _thornRc[4];				//����
	RECT _fruitRc[8];				//����
	RECT _mapFruitRc[8];			//�ʿ� �ѷ��� ����
	//RECT _fruitStackRc;
	RECT _lifeRc[4];				//����
	RECT _ladderRc[4];				//��ٸ�
	RECT _jarRc[2];					//�׾Ƹ�
	RECT _timerBar;					//Ÿ�̸�

	bool _isThorn;					//���� �浹
	bool _isFruit[8];				//���� �浹
	bool _isJar[2];					//�׾Ƹ��浹

public:

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	void thorn();		//����
	void life();		//���
	void score();		//����
	void fruit();		//����
	void ladder();		//��ٸ�
	void collision();	//�浹
	void jar();			//�׾Ƹ�
	void time();		//Ÿ�̸�
	
	
	//�÷��̾� ���� �׾Ƹ� �����ٰ�

	float getJarX0() { return _jarX[0]; }
	void setJarX0(float jarX0) { _jarX[0] = jarX0; }
	
	float getJarY0() { return _jarY[0]; }
	void setJarY0(float jarY0) { _jarY[0] = jarY0; }

	float getJarX1() { return _jarX[1]; }
	void setJarX1(float jarX1) { _jarX[1] = jarX1; }

	float getJarY1() { return _jarY[1]; }
	void setJarY1(float jarY1) { _jarY[1] = jarY1; }

};

