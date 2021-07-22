#pragma once
#include "singletonBase.h"
#include <map>

#include "inc/fmod.hpp"
#pragma comment(lib, "lib/fmodex64_vc.lib")

using namespace FMOD;

#define SOUNDBUFFER 10
#define EXTRACHANNELBUFFER 5

#define TOTALSOUNDBUFFER SOUNDBUFFER + EXTRACHANNELBUFFER

class soundManager : public singletonBase<soundManager>
{
private:
	typedef map<string, Sound**>				arrSounds;
	typedef map<string, Sound**>::iterator		arrSoundsIter;

	typedef map<string, Channel**>				arrChannels;
	typedef map<string, Channel**>::iterator	arrChannelIter;

private:
	System*			_system;
	Sound**			_sound;
	Channel**		_channel;

	arrSounds		_mTotalSounds;
	arrChannels		_mTotalChannels;

	unsigned int _totalTime;
	unsigned int _currentTime;

public:
	soundManager();
	~soundManager();

	HRESULT init();
	void release();
	void update();

	void addSound(string keyName, string soundName, bool bgm, bool loop);

	//0.0 ~ 1.0f  0 ~ 255
	void play(string keyName, float volume = 1.0f);
	void stop(string keyName);
	void pause(string keyName);
	void resume(string keyName);

	Sound** findSound(string keyName);

	Sound** getSound() { return _sound; }
	Channel** getChannel() { return _channel; }

	unsigned int getTotalTime(string keyName);
	unsigned int getCurrentTime(string keyName);
	void setCurrentTime(string keyName, unsigned int currentTime);

	void setVolume(string keyName, float volume);

	//»£ø¡Ω√¿Ã ∏Ù∂Ûº≠ «ÿµ“
	bool isPlaySound(string keyName);
	bool isPauseSound(string keyName);
};

