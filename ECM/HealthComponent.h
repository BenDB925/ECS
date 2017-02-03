#pragma once
#include "Component.h"
#include <iostream>

class HealthComponent : public Component
{
public:
	HealthComponent(){ }
	/* Data Only */
	void getHealth() { std::cout << "health getter" << std::endl; }
};
