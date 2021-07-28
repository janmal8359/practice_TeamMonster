#pragma once
#include "gameNode.h"
class ui : public gameNode
{
private:
	

	image _bg2;			//임시배경
	image _fruit[8];		//과일 이미지
	image _life[4];		//라이프
	image _thorn[4];
	image _ladder[3];

	int _score;			//점수
	int _topScore;		//탑점수
	
	int _lifeNum;		//목숨 갯수
	int _fruitNum;		//과일 갯수
	int _mapFruitNum;	//맵 과일 갯수


	float _fruitX, _fruitY;		//과일 위치
	float _lifeX, _lifeY;		//수명 위치
	
	///////////////////////////////////////////////////////
	RECT _rc;					//렉트충돌을 위해

	float _x, _y;				//렉트충돌 확인 지울꺼임
	
	////////////////////////////////////////////////////////
	
	RECT _thornRc[4];				//가시
	RECT _fruitRc[8];				//과일
	RECT _mapFruitRc[8];			//맵에 뿌려진 과일
	//RECT _fruitStackRc;
	RECT _lifeRc[4];				//생명
	RECT _ladderRc[4];				//사다리

	bool _isThorn;					//가시 충돌
	bool _isFruit[8];					//과일 충돌

public:

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	void thorn();		//가시
	void life();		//목숨
	void score();		//점수
	void fruit();		//과일
	void ladder();		//사다리
	void collision();	//충돌
	
	
	
};

