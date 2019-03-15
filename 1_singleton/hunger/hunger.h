#ifndef HUNGER_H
#define HUNGER_H

class Singleton
{
public:
	static Singleton *getInstance()
	{
		return &m_pSingleton;	
	}

private:
	Singleton(){};
	Singleton(const Singleton &);
	Singleton& operator=(const Singleton &);

	static Singleton m_pSingleton;
};

Singleton Singleton::m_pSingleton; //在程序开始就分配对象实例，内存在全局数据区


#endif
