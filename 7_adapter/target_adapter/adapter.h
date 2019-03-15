#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

class Adapter: public InputCharge
{
public:
	Adapter(): m_pCharge(new ownerCharger()){}
	~Adapter()
	{
		SAFE_DELETE(m_pCharge);
	}

	void Charge()
	{
		m_pCharge->ChargeWithFeetFlat();	
	}

private:
	ownerCharger *m_pCharge;

};


#endif
