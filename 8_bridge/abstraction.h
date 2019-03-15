#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"

class abstraction
{
public:
	abstraction(implementor *mm) { m_pImple = mm; }
	virtual ~abstraction() {}
	virtual void On() = 0;
	virtual void Off() = 0;

protected:
	implementor *m_pImple;
};


#endif
