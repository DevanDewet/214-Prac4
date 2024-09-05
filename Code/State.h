#ifndef STATE_H
#define STATE_H



#include <string>


class State
{


public:
	virtual void harvestCrops() = 0;

	virtual void rain() = 0;

	virtual std::string getName() = 0;
};

#endif
