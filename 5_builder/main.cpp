#include <iostream>
#include "builder.h"
#include "director.h"

using namespace std;



#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif



int main()
{
	Director *work = new Director();
	ThinkPadBuilder *p1 = new ThinkPadBuilder();
	work->Creator(p1);
	Computer *mypc1 = p1->GetProduct();

	cout << "xxxxxxxxxx1xxxxxxxxxxxx" << endl;
	cout << "CPU: " << mypc1->getCpu() << endl;
	cout << "MainBoard: " <<  mypc1->getMainBoard() << endl;
	cout << "RAM: " << mypc1->getRam() << endl;
	cout << "VideoBoard: " << mypc1->getVideoCard() << endl;
	cout << "xxxxxxxxxx2xxxxxxxxxxxx" << endl;

	SAFE_DELETE(mypc1);
	SAFE_DELETE(p1);

	YogaBuilder *p2 = new YogaBuilder();
	work->Creator(p2);
	Computer *mypc2 = p2->GetProduct();

	cout << "CPU: " << mypc2->getCpu() << endl;
	cout << "MainBoard: " <<  mypc2->getMainBoard() << endl;
	cout << "RAM: " << mypc2->getRam() << endl;
	cout << "VideoBoard: " << mypc2->getVideoCard() << endl;
	cout << "xxxxxxxxxendxxxxxxxxxxxx" << endl;

	SAFE_DELETE(mypc1);
	SAFE_DELETE(p1);

	SAFE_DELETE(work);

	return 0;
}
