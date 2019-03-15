#include "singleton.h"
#include <iostream>
#include <thread>

//加锁经典懒汉单例

using namespace std;


Singleton *Singleton::m_pSingleton = NULL;
mutex Singleton::m_mutex;
Singleton::GC garbage;

Singleton *Singleton::getInstance()
{
	if(m_pSingleton == NULL)
	{
		m_mutex.lock();
		if(m_pSingleton == NULL)
			m_pSingleton = new Singleton();
		m_mutex.unlock();
	}
	return m_pSingleton;
}



void thread01()
{
	for(int i=0; i<5;i++)
	{			
		Singleton *t1 = Singleton::getInstance();
		cout << "thread01 singleton addr= " << t1 << endl;
	}

}

void thread02()
{
	for(int i=0; i<5;i++)
	{			
		Singleton *t2 = Singleton::getInstance();
		cout << "thread02 singleton addr= " << t2 << endl;
	}
}

//编译命令：g++ lazy.cpp -std=c++11 -pthread

int main()
{
	thread aa(thread01);
	thread bb(thread02);
	aa.detach();
	bb.detach();
	//aa.join();
	//bb.join();
	
	for(int i=0; i<5;i++)
	{			
		Singleton *main = Singleton::getInstance();
		cout << "main singleton addr= " << main << endl;
	}


	return 0;
}

