#include <iostream>
#include "adapter.h"

using namespace std;


int main()
{
	InputCharge *plugBase = new Adapter();
	plugBase->Charge();	
	SAFE_DELETE(plugBase);

	return 0;
}
