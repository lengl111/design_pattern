#include <iostream>

using namespace std;

/**********************
*  非真正意义上的单例
***********************/

class AA
{
public:
	AA()
	{
		cout << "hello" << endl;
	}
	~AA()
	{
		cout << "bye" << endl;
	}
	
};

void tt()
{
	static int a;
	cout <<  &a<<endl;
}

int main()
{
#if 0
	int cc;
	for(cc=0;cc <10;cc++)
		tt();
#endif
	AA();
	return 0;
}
