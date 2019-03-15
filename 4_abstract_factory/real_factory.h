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

	Bike *CreateBike()
	{
		return new BenzBike();	
	}

};

class BmwFactory: public AFactory
{
public:
	Car *CreateCar()
	{
		return new BmwCar();	
	}

	Bike *CreateBike()
	{
		return new BmwBike();	
	}
};

class AudiFactory: public AFactory
{
public:
	Car *CreateCar()
	{
		return new AudiCar();	
	}
	Bike *CreateBike()
	{
		return new AudiBike();	
	}
};



#endif
