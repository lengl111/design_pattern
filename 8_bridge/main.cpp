#include "refined_abstraction.h"
#include "concrete_implementor.h"


int main()
{
	implementor *p1 = new Light();
	PullChainSwitch *aa = new PullChainSwitch(p1);
	TwoPositionSwitch *cc = new TwoPositionSwitch(p1);
	aa->On();
	aa->Off();
	cc->On();
	cc->Off();



	cout << "----------------------------" << endl;

	implementor *p2 = new Fan();
	PullChainSwitch *bb = new PullChainSwitch(p2);
	TwoPositionSwitch *dd = new TwoPositionSwitch(p2);
	bb->On();
	bb->Off();
	dd->On();
	dd->Off();

	delete bb;
	delete dd;
	delete p2;
	delete aa;
	delete cc;
	delete p1;

	return 0;
}
