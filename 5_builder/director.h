#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "abstract_builder.h"

class Director
{
public:
	void Creator(AbstractBuilder *build)
	{
		build->BuildCpu();
		build->BuildMainBoard();
		build->BuildRam();
		build->BuildVideoCard();
	}
};

#endif
