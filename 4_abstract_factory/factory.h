#ifndef FACTORY_H
#define FACTORY_H

#include "real_product.h"

class AFactory
{
public:

	virtual Car *CreateCar() = 0;
	virtual Bike *CreateBike() = 0;
};

#endif
