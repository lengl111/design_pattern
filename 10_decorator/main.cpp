#include "concrete_component.h"
#include "concrete_decorate.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p) {delete p; p = NULL;}}
#endif

int main()
{
	Coffee *src = new Coffee();
	NewDrink *dest = new NewDrink(src);

	cout << "name: " << dest->Name() << endl;
	cout << "cost: " << dest->Cost() << endl;

	SAFE_DELETE(dest);
	SAFE_DELETE(src);

	return 0;
}

