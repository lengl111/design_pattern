#ifndef LEAF_DEP_H
#define LEAF_DEP_H

#include "abstract.h"

class LeafDep: public AbsCompany
{
public:
	LeafDep(string name):AbsCompany(name) {}	
	//void Add(AbsCompany *add) {}
	//void Remove(AbsCompany *rm) {}
	void Display()
	{
		cout << "****"
			 << m_Name << endl;
	}

private:
	
};

#endif
