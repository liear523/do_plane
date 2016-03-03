#ifndef __GAMES_H__
#define __GAMES_H__
#include "GameLayer.h"




class games : public cocos2d::Scene
{
public:
	games(void){}
	~games(){}

	

	virtual bool init();
	
	CREATE_FUNC(games);
private:

	
	game_layer* _game_layer;
};
#endif