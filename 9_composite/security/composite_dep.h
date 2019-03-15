#ifndef COMPOSITE_DEP_H
#define COMPOSITE_DEP_H

#include "abstract.h"
#include <list>

class CompositeDep: public AbsCompany
{
public:
	CompositeDep(string name): AbsCompany(name) {}
	 void Add(AbsCompany *add)
	 {
		m_ComList.push_back(add); 
	 }

	 void Remove(AbsCompany *rm)
	 {
		m_ComList.remove(rm); 
	 }

	 void Display()
	 {
		 cout << this->m_Name << endl; 
#if 1
		 //list 容器方式遍历
		 list<AbsCompany *>::iterator  iter;
		 for (iter=m_ComList.begin(); iter!=m_ComList.end(); iter++)
		 {
			cout << "****";
			(*iter)->Display(); 
		 }
#else
		 //c++ 11 特性，for循环自动遍历
		 for(AbsCompany *com: m_ComList)
		 {
			cout << "****";
			com->Display();
		 }
#endif
	 }

private:
	list<AbsCompany *> m_ComList;

};

#endif
