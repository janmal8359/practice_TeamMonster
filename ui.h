#pragma once
#include "gameNode.h"



class ui : public gameNode
{
private:
	float _timer;

	image _bg2;			//임시배경
	
	image _life[4];		//라이프
	image _thorn[4];	//가시
	image _ladder[3];	//사다리
	image _jar[2];		//항아리

	image _fruit[8];	//과일 이미지
	
	//image _timerBar;	//타이머

	int _score;			//점수
	int _topScore;		//탑점수
	
	int _lifeNum;		//목숨 갯수
	int _fruitNum;		//과일 갯수
	int _mapFruitNum;	//맵 과일 갯수

	int _timeXWidth;		//타이머x의 가로축
	int _timeCount;			//타이머 카운트


	float _fruitX, _fruitY;			//과일 위치
	float _lifeX, _lifeY;			//수명 위치

	float _jarX[2], _jarY[2];		//항아리 XY축
	
	///////////////////////////////////////////////////////
	RECT _rc;						//렉트충돌을 위해

	float _x, _y;					//렉트충돌 확인 지울꺼임
	
	////////////////////////////////////////////////////////
	
	RECT _thornRc[4];				//가시
	RECT _fruitRc[8];				//과일
	RECT _mapFruitRc[8];			//맵에 뿌려진 과일
	//RECT _fruitStackRc;
	RECT _lifeRc[4];				//생명
	RECT _ladderRc[4];				//사다리
	RECT _jarRc[2];					//항아리
	RECT _timerBar;					//타이머

	bool _isThorn;					//가시 충돌
	bool _isFruit[8];				//과일 충돌
	bool _isJar[2];					//항아리충돌

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
	void jar();			//항아리
	void time();		//타이머
	
	
	//플레이어 한테 항아리 전해줄거

	float getJarX0() { return _jarX[0]; }
	void setJarX0(float jarX0) { _jarX[0] = jarX0; }
	
	float getJarY0() { return _jarY[0]; }
	void setJarY0(float jarY0) { _jarY[0] = jarY0; }

	float getJarX1() { return _jarX[1]; }
	void setJarX1(float jarX1) { _jarX[1] = jarX1; }

	float getJarY1() { return _jarY[1]; }
	void setJarY1(float jarY1) { _jarY[1] = jarY1; }

};

