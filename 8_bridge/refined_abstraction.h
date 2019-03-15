#ifndef REFINED_ABSTRACTION_H
#define REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>
using namespace std;

class PullChainSwitch: public abstraction
{
public:
	PullChainSwitch(implementor *ee): abstraction(ee) {}
	void On()
	{
		cout << "Power on with a Pull Chain Switch." << endl;
		m_pImple->PowerOn();
	}

	void Off()
	{
		cout << "Power off with a Pull Chain Switch." << endl;
		m_pImple->PowerOff();
	}

};

class TwoPositionSwitch: public abstraction
{
public:
	TwoPositionSwitch(implementor *ee): abstraction(ee) {}
	void On()
	{
		cout << "Power on with a Two Position Switch." << endl;
		m_pImple->PowerOn();
	}

	void Off()
	{
		cout << "Power off with a Two Position Switch." << endl;
		m_pImple->PowerOff();
	}
};


#endif
