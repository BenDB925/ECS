#pragma once
#include "Component.h"
#include <iostream>

class PositionComponent : public Component
{
public:
	PositionComponent() {  }
		
	void getVal()
	{
		std::cout << "position component getter" << std::endl;
	}
};
