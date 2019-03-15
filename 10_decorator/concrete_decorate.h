#ifndef CONCRETE_DECORATE_H
#define CONCRETE_DECORATE_H

#include "decorate.h"

class NewDrink: public Decorate
{
public:
	NewDrink(Drink *dk): Decorate(dk) {}
	string Name()
	{
		//return m_pDrink->Name()+ " + Cream"; error
		return Decorate::Name()+ " + Cream";
	}

	double Cost()
	{
		scoreService();
		//return m_pDrink->Cost() + 3.5; error
		return Decorate::Cost() + 3.5;
	}

	void scoreService()
	{
		cout << "exchange other snacks." << endl;	
	}
};

#endif
