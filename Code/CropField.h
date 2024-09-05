#ifndef CROPFIELD_H
#define CROPFIELD_H

#include"FarmUnit.h"
#include"DepthFirstFarmIterator.h"
#include"BreadthFirstFarmIterator.h"

#include <string> 

class CropField : FarmUnit
{


public:
	int getTotalCapacity();

	std::string getCropType();

	std::string getSoilTypeName();

	void increaseProduction();

	void harvest();

	int getLeftoverCapacity();

	DepthFirstFarmIterator* CreateDepthFirstFarmIterator();

	BreadthFirstFarmIterator* CreateBreadthFirstFarmIterator();
};

#endif
