#pragma once
#include "Entity.h"
#include <iostream>

using namespace std;

class RenderSystem
{
	vector<Entity *> entities;

public:
	void addEntity(Entity * e) { entities.push_back(e); }


	void update()
	{
		cout << "RenderSystem Update" << endl << endl;

		for (int i = 0; i < entities.size(); ++i)
		{
			PositionComponent * positionComponent = entities.at(i)->getComponent<PositionComponent>(Component::Position);
			positionComponent->getVal();
		}

		cout << endl << endl;
	}
};
