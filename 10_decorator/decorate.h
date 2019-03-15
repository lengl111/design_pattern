#ifndef DECORATE_H
#define DECORATE_H

#include <iostream>
#include "component.h"


class Decorate: public Drink
{
public:
	Decorate(Drink *drink): m_pDrink(drink){}
	string Name()
	{
		return m_pDrink->Name();
	}

	double Cost()
	{
		return m_pDrink->Cost();
	}

private:
	Drink *m_pDrink;
};

#endif
