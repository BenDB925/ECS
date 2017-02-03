#pragma once
#include "Component.h"
#include <iostream>

class ControlComponent : public Component
{
public:
	ControlComponent() {}

	void getVal()
	{
		cout << "control component getter" << endl;
	}
};
