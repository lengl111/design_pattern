#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>


class Singleton
{
public:
	static Singleton *getInstance();

	// 实现一个内嵌垃圾回收类    
	class GC 
	{
	public:
		~GC()
	    {
			if(Singleton::m_pSingleton) 
			    delete Singleton::m_pSingleton;
		}
	};

private:
	Singleton(){}
	static Singleton *m_pSingleton;
	static std::mutex m_mutex;

	static GC garbage; // 定义一个静态成员变量，程序结束时，系统会自动调用它的析构函数从而释放单例对象
};


#endif

