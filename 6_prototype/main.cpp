#include "real_prototype.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif


int main()
{
	Monkey *aa = new SunWuKong("Qi Tian Da Sheng");	
	Monkey *bb = aa->Clone();
	Monkey *cc = aa->Clone();

	aa->Play();
	bb->Play();
	cc->Play();

	SAFE_DELETE(cc);
	SAFE_DELETE(bb);
	SAFE_DELETE(aa);
	
	return 0;
}

