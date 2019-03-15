#ifndef ABSTRACT_H
#define ABSTRACT_H

#include <iostream>
#include <string>

using namespace std;

class AbsCompany
{
public:
	AbsCompany(string name)
	{
		m_Name = name;
	}

	//virtual void Add(AbsCompany *add) = 0;
	//virtual void Remove(AbsCompany *rm) = 0;
	virtual void Display() = 0;

protected:
	string m_Name;
};


#endif

