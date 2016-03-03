#ifndef __GAMELAYER_H__
#define __GAMELAYER_H__

#include "cocos2d.h"
#include "cocostudio\CocoStudio.h"
//#include "ui\CocosGUI.h"

USING_NS_CC;

class game_layer : public cocos2d::Layer
{
public:
	game_layer(void){}
	~game_layer(){}

	virtual bool init();

	void backgrounMove(float dt);

	

	CREATE_FUNC(game_layer);
private:
	Sprite* background_1;
	Sprite*	background_2;

	
};



#endif