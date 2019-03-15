#include "leaf_dep.h"
#include "composite_dep.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	CompositeDep * root = new CompositeDep("杰科电子");
	CompositeDep * dep1 = new CompositeDep("人事行政");
	CompositeDep * dep2 = new CompositeDep("财务部");
	CompositeDep * dep3 = new CompositeDep("互联网");
	LeafDep *leaf1 = new LeafDep("硬件组");
	LeafDep *leaf2 = new LeafDep("软件组");

	root->Add(dep1);
	root->Add(dep2);
	root->Add(dep3);

	dep3->Add(leaf1);
	dep3->Add(leaf2);

	root->Display();


	SAFE_DELETE(leaf2)
	SAFE_DELETE(leaf1)
	SAFE_DELETE(dep3)
	SAFE_DELETE(dep2)
	SAFE_DELETE(dep1)
	SAFE_DELETE(root)

	return 0;
}


