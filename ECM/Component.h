#pragma once
class Component
{
public:
	Component(){}
	~Component(){}

	enum Types
	{
		Position,
		Render,
		Control,
		Health
	};
};