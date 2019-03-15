#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

class Adapter: public InputCharge, ownerCharger
{
public:
	void Charge()
	{
		ChargeWithFeetFlat();	
	}


};


#endif
