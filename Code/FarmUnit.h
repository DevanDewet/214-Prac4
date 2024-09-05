#ifndef FARMUNIT_H
#define FARMUNIT_H

class FarmUnit
{


public:
	virtual void buyTruck() = 0;

	virtual void sellTruck() = 0;

	void callTruck();

	virtual int getTotalCapacity() = 0;

	virtual string getCropType() = 0;

	virtual string getSoilTypeName() = 0;

	void increaseProduction();

	virtual void harvest() = 0;

	int getLeftoverCapacity();
};

#endif
