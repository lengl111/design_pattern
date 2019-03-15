#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

//Car interface
class Car
{
public:
	virtual string Name() = 0;
};

#endif
