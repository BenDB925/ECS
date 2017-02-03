// ECM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PositionComponent.h"
#include "HealthComponent.h"
#include "Entity.h"
#include "ControlComponent.h"
#include "AISystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"

int main(void*)
{
	Entity player;
	player.addComponent(Component::Health,   new HealthComponent());
	player.addComponent(Component::Position, new PositionComponent());
	player.addComponent(Component::Control, new ControlComponent());

	Entity alien;
	alien.addComponent(Component::Health, new HealthComponent());
	alien.addComponent(Component::Position, new PositionComponent());

	Entity dog;
	dog.addComponent(Component::Health, new HealthComponent());
	dog.addComponent(Component::Position, new PositionComponent());

	Entity cat;
	cat.addComponent(Component::Position, new PositionComponent());

	AISystem aiSys;
	aiSys.addEntity(&alien);
	aiSys.addEntity(&dog);
	aiSys.addEntity(&cat);
	
	ControlSystem controlSys;
	controlSys.addEntity(&player);

	RenderSystem renderSys;
	renderSys.addEntity(&player);
	renderSys.addEntity(&alien);
	renderSys.addEntity(&dog);
	renderSys.addEntity(&cat);

	controlSys.update();
	aiSys.update();
	renderSys.update();

	
	system("PAUSE");
	return 0;
}
