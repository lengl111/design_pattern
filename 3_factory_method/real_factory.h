#ifndef REAL_FACTORY_H
#define REAL_FACTORY_H

#include "factory.h"
#include "real_product.h"

class BenzFactory: public AFactory
{
public:
	Car *CreateCar()
	{
		return new BenzCar();	
	}
};

class BmwFactory: public AFactory
{
public:
	Car *CreateCar()
	{
		return new BmwCar();	
	}
};

class AudiFactory: public AFactory
{
public:
	Car *CreateCar()
	{
		return new AudiCar();	
	}
};



#endif
