#include "factory.h"
#include "product.h"
#include <iostream>


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete (p); (p) = NULL;}}
#endif
int main()
{
	Factory *pfa = new Factory();

	//Car *pcar = pfa->CreateCar(Factory::CAR_TYPE::BENZ_CAR);//C++11 enum可以用这种方式，否则不需要CAR_TYPE
	Car *pcar = pfa->CreateCar(Factory::BENZ_CAR);
	cout << pcar->Name() << endl;
	SAFE_DELETE(pcar);

	pcar = pfa->CreateCar(Factory::BMW_CAR);
	cout << pcar->Name() << endl;
	SAFE_DELETE(pcar);
	
	pcar = pfa->CreateCar(Factory::AUDI_CAR);
	cout << pcar->Name() << endl;
	SAFE_DELETE(pcar);

	
	SAFE_DELETE(pfa);
	return 0;
}
