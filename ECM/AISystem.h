#pragma once

#include "Entity.h"
#include <iostream>
#include <vector>

using namespace std;

class AISystem
{
	vector<Entity *> entities;

public:
	void addEntity(Entity * e) { entities.push_back(e); }

	void update()
	{
		cout << "AISystem Update" << endl << endl;

		for (int i = 0; i < entities.size(); ++i)
		{
			HealthComponent * controlComp = entities.at(i)->getComponent<HealthComponent>(Component::Health);
			controlComp->getHealth();

			PositionComponent * positionComponent = entities.at(i)->getComponent<PositionComponent>(Component::Position);
			positionComponent->getVal();
		}
		cout << endl;
	}
};