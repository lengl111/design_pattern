#ifndef FACTORY_H
#define FACTORY_H

#include "real_product.h"

class AFactory
{
public:
	virtual Car *CreateCar() = 0;
};

#endif
