#include "GameLayer.h"

bool game_layer::init()
{
	if (!Layer::init())
	{
		return false;
	}

	auto rootNode = CSLoader::createNode("Scene.csb");
	addChild(rootNode);

	background_1 = (Sprite *)rootNode->getChildByName("background_1");
	//addChild(background_1);
	background_2 = (Sprite *)rootNode->getChildByName("background_2");
	//addChild(background_2);
	
	this->schedule(SEL_SCHEDULE(&game_layer::backgrounMove));

	return true;
}

void game_layer::backgrounMove(float dt)
{
	background_1->setPositionY(background_1->getPositionY()-2);

	background_2->setPositionY(background_2->getPositionY()-2);

	if (background_1->getPositionY() == 0)
	{
		background_1->setPositionY(0);
	}


}