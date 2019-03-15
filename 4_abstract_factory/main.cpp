#include "real_factory.h"
#include "product.h"
#include <iostream>


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete (p); (p) = NULL;}}
#endif
int main()
{
	AFactory *pfa = new BenzFactory();

	Car *pcar = pfa->CreateCar();
	Bike *pbike = pfa->CreateBike();
	cout << pcar->Name() << endl;
	cout << pbike->Name() << endl;
	SAFE_DELETE(pcar);
	SAFE_DELETE(pbike);
	SAFE_DELETE(pfa);

	pfa = new BmwFactory();
	pcar = pfa->CreateCar();
	pbike = pfa->CreateBike();
	cout << pcar->Name() << endl;
	cout << pbike->Name() << endl;
	SAFE_DELETE(pcar);
	SAFE_DELETE(pbike);
	SAFE_DELETE(pfa);
	
	pfa = new AudiFactory();
	pcar = pfa->CreateCar();
	pbike = pfa->CreateBike();
	cout << pcar->Name() << endl;
	cout << pbike->Name() << endl;
	SAFE_DELETE(pcar);
	SAFE_DELETE(pbike);
	SAFE_DELETE(pfa);

	return 0;
}
