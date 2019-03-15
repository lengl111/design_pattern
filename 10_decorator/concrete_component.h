#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H

#include "component.h"


class Coffee: public Drink
{
public:
	string Name()
	{
		return "mo ka";	
	}

	double Cost()
	{
		return 18;
	}

};

#endif
