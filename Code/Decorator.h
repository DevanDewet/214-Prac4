#ifndef DECORATOR_H
#define DECORATOR_H

#include"FarmUnit.h"

class Decorator : FarmUnit
{

public:
	//FarmUnit component;

	void increaseProduction();

	virtual void harvest() = 0;

	int getLeftoverCapacity();
};

#endif
