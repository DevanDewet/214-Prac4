#ifndef DECORATOR_H
#define DECORATOR_H

class Decorator : FarmUnit
{

public:
	FarmUnit component;

	void increaseProduction();

	virtual void harvest() = 0;

	int getLeftoverCapacity();
};

#endif
