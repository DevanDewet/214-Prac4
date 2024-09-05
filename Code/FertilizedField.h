#ifndef FERTILIZEDFIELD_H
#define FERTILIZEDFIELD_H


#include "Decorator.h"

class FertilizedField : Decorator
{


public:
	void increaseProduction2();

	void harvest2();

	int getLeftoverCapacity2();
};

#endif
