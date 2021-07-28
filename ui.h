#pragma once
#include "gameNode.h"
class ui : public gameNode
{
private:
	

	image _bg2;			//�ӽù��
	image _fruit[8];		//���� �̹���
	image _life[4];		//������
	image _thorn[4];
	image _ladder[3];

	int _score;			//����
	int _topScore;		//ž����
	
	int _lifeNum;		//��� ����
	int _fruitNum;		//���� ����
	int _mapFruitNum;	//�� ���� ����


	float _fruitX, _fruitY;		//���� ��ġ
	float _lifeX, _lifeY;		//���� ��ġ
	
	///////////////////////////////////////////////////////
	RECT _rc;					//��Ʈ�浹�� ����

	float _x, _y;				//��Ʈ�浹 Ȯ�� ���ﲨ��
	
	////////////////////////////////////////////////////////
	
	RECT _thornRc[4];				//����
	RECT _fruitRc[8];				//����
	RECT _mapFruitRc[8];			//�ʿ� �ѷ��� ����
	//RECT _fruitStackRc;
	RECT _lifeRc[4];				//����
	RECT _ladderRc[4];				//��ٸ�

	bool _isThorn;					//���� �浹
	bool _isFruit[8];					//���� �浹

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
	
	
	
};

