#ifndef ABSTRACT_BUILDER_H
#define ABSTRACT_BUILDER_H

#include "product.h"

class AbstractBuilder
{
public:
	virtual void BuildCpu() = 0;
	virtual void BuildMainBoard() = 0;
	virtual void BuildRam() = 0;
	virtual void BuildVideoCard() = 0;
	
	virtual Computer *GetProduct() = 0;
};

#endif
