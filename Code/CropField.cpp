#include "CropField.h"

// Getters
int CropField::getTotalCapacity() 
{
    return totalCapacity;
}

std::string CropField::getCropType() 
{
    return cropType;
}

std::string CropField::getSoilTypeName() 
{
    return soilState->getName();  
}

void CropField::increaseProduction() 
{


    std::cout << "Increasing production based on soil state: " << soilState->getName() << "\n";
}

void CropField::harvest() 
{
     soilState->harvestCrops(this);  
	
	 currentStoredCrops += yield;
}

int CropField::getLeftoverCapacity() 
{

    return totalCapacity - currentStoredCrops;
}


void CropField::setState(State* state) 
{
   delete soilState;
    soilState = state;
}


void CropField::rain() 
{
    soilState->rain(this); 
}

std::string CropField::getSoilStateName() 
{
    return soilState->getName(); 
}

int CropField::getYield() 
{
    return yield; 
}

void CropField::setYield(int yield) 
{
     yield = yield;
}

DepthFirstFarmIterator* CropField::CreateDepthFirstFarmIterator() 
{
    // Implement as needed
    return nullptr;
}

BreadthFirstFarmIterator* CropField::CreateBreadthFirstFarmIterator() 
{
    // Implement as needed
    return nullptr;
}
