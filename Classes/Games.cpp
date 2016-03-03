#include "Games.h"
#include "cocostudio\CocoStudio.h"
#include "cocos2d.h"

USING_NS_CC;



bool games::init()
{
	bool bRet = false;

	do
	{
		CC_BREAK_IF(!Scene::init());

		_game_layer = game_layer::create();

		CC_BREAK_IF(!_game_layer);		this->addChild(_game_layer);		bRet = true;

	} while (false);

	return true;


}

