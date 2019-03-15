#ifndef FACTORY_H
#define FACTORY_H

#include "real_product.h"

class Factory
{
public:
	enum CAR_TYPE{
		BENZ_CAR,
		BMW_CAR,
		AUDI_CAR
	};

	Car* CreateCar(CAR_TYPE type)
	{
		Car *pCar = NULL;
		switch(type){
			case BENZ_CAR:
				pCar = new BenzCar();
				break;
			case BMW_CAR:
				pCar = new BmwCar();
				break;
			case AUDI_CAR:
				pCar = new AudiCar();
				break;
			default:
				break;
		}

		return pCar;
	}

};

#endif
