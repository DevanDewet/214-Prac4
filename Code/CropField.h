#ifndef CROPFIELD_H
#define CROPFIELD_H

#include"FarmUnit.h"
#include"DepthFirstFarmIterator.h"
#include"BreadthFirstFarmIterator.h"

#include <string> 
#include <iostream>

class CropField : public  FarmUnit
{

	private:
		std::string cropType;    
		int totalCapacity;       
		int currentStoredCrops;  
		std::string soilState;

	public:

		CropField(const std::string& crop, int capacity, const std::string& soil)
        : cropType(crop), totalCapacity(capacity), currentStoredCrops(0), soilState(soil) {}

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
