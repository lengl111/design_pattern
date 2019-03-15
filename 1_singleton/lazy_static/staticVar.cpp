#include <iostream>

using namespace std;

/*********可以是：静态局部变量懒汉单例模式*************
*  非真正意义上的单例
*  1.如果Singleton ins 用局部变量，会有栈空间内存的重新分配，失去单例的意义
*  2.使用Singleton &ins 引用或指针的方式，才使得静态局部变量的方法成为简单的单例模式。

***********************/

class Singleton {
public:
	static Singleton& getInstance()
	{
		//C++11 (C++ 0X) 之后这里不需要加 mutex.lock,之前需要加.
		static Singleton instance; //放在函数中可以被多次调用，共享一个代码段，表示同一块data段内存
		return instance;
	}

private:
	Singleton() {}
	//Singleton& operator=(const Singleton &);
	Singleton(Singleton &); //显示的声明拷贝构造函数，避免用默认的，可以
							//使Singleton ins= Singleton::getIntance()的使用报错。
};


int main()
{
	Singleton &ins = Singleton::getInstance(); 
	cout << "0x" << &ins<<endl;
	Singleton &aa = Singleton::getInstance();
	cout << "0x" << &aa <<endl;

	return 0;
}
