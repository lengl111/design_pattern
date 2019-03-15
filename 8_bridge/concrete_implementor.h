#ifndef CONCRETE_IMPLEMENTOR_H
#define CONCRETE_IMPLEMENTOR_H

#include "implementor.h"
#include <iostream>

using namespace std;

class Light: public implementor
{
public:
	void PowerOn()
	{
		cout << "Light is on." << endl;
	}

	void PowerOff()
	{
		cout << "Light is off." << endl;
	}
};

class Fan: public implementor
{
public:
	void PowerOn()
	{
		cout << "Fan is on." << endl;
	}

	void PowerOff()
	{
		cout << "Fan is off." << endl;
	}

};


#endif
