#ifndef STATE_H
#define STATE_H

class State
{


public:
	virtual void harvestCrops() = 0;

	virtual void rain() = 0;

	virtual string getName() = 0;
};

#endif
