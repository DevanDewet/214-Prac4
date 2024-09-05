#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string> 
#include <iostream>

class FarmUnit
{


public:

 	virtual void buyTruck() = 0;
    virtual void sellTruck() = 0;
    virtual int getTotalCapacity() = 0;
    virtual std::string getCropType() = 0;
    virtual std::string getSoilTypeName() = 0;
    virtual void increaseProduction() = 0;
    virtual void harvest() = 0;
    virtual int getLeftoverCapacity() = 0;
	void callTruck();
};

#endif
