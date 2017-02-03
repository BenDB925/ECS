#pragma once
#include "stdafx.h"
#include <map>
#include "Component.h"

using namespace std;

class Entity
{
	int id;
public:
	Entity() {};
	void addComponent(int type, Component * c) { components.insert_or_assign(type, c); }
	void removeComponent(Component * c) { /* TBI */ }
	
	map<int, Component *> getComponents()
	{
		return components;
	}
	
	template <class Template>
	Template * getComponent(int pIndex)
	{
		Template * returnVal;
		returnVal = static_cast <Template*>(components[pIndex]);
		return returnVal;
	}

private:
	map<int, Component *> components;
};
