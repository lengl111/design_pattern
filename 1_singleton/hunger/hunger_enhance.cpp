#include <iostream>
#include "hunger_enhance.h"

using namespace std;


//因为程序一开始就完成了单例对象的初始化，
//所以后续不再需要考虑多线程安全性问题，
//就可以避免懒汉模式里频繁加锁解锁带来的开销。

/*hunger_base 存在的问题：

虽然这种实现在一定程度下能良好工作，但是在某些情况下会带来问题,
比如在C++中 ”非局部静态对象“ 的 ”初始化“ 顺序 的 ”不确定性“， 参见Effective c++ 条款47。

	考虑： 如果有两个这样的单例类，将分别生成单例对象A, 单例对象B. 它们分别定义在不同的编译单元（cpp中），
	而A的初始化依赖于B 【 即A的构造函数中要调用B::GetInstance() ，而此时B::m_instance 可能还未初始化，
	显然调用结果就是非法的 】， 所以说只有B在A之前完成初始化程序才能正确运行，而这种跨编译单元
	的初始化顺序编译器是无法保证的。 
*/

/* 解决 hunger_base 中存在的问题
首先，代理类ObjCreator这个static变量初始化时，在其构造函数内部调用 Singleton::GetInstance();
从而间接完成单例对象的初始化，这就通过该代理类实现了饿汉模式的特性。

其次，仍然考虑hunger_base模式的缺陷。 当A的初始化依赖于B， 
【 即A的构造函数中要调用B::GetInstance() ，而此时B::m_instance 可能还未初始化，
显然调用结果就是非法的 】 现在就变为【在A的构造函数中要调用B::GetInstance() ，
如果B尚未初始化，就会引发B的初始化】，所以在不同编译单元内全局变量的初始化顺序不定
的问题就随之解决。  
*/

int main()
{
	Singleton *tt = Singleton::getInstance();
	//cout << "hello" << endl;
	return 0;
}
