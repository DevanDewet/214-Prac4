#include "Composite.h"
#include <algorithm>
// Constructor
Composite::Composite() {}

// Destructor
Composite::~Composite() 
{
    for (FarmUnit* unit : farmUnits) {
        delete unit;
    }
}


void Composite::addFarmUnit(FarmUnit* unit) 
{
    farmUnits.push_back(unit);
}


void Composite::removeFarmUnit(FarmUnit* unit) 
{
  auto it = std::find(farmUnits.begin(), farmUnits.end(), unit);
    if (it != farmUnits.end()) {
        farmUnits.erase(it);
    }
}


int Composite::getTotalCapacity() 
{
    int totalCapacity = 0;
    for (FarmUnit* unit : farmUnits) {
        totalCapacity += unit->getTotalCapacity();
    }
    return totalCapacity;
}

std::string Composite::getCropType() 
{
   
    return "Mixed Crops";
}

std::string Composite::getSoilTypeName() 
{
    
    return "Composite Soil";
}

void Composite::increaseProduction() 
{
    for (FarmUnit* unit : farmUnits) {
        unit->increaseProduction();
    }
}

void Composite::harvest() 
{
    for (FarmUnit* unit : farmUnits) {
        unit->harvest();
    }
}

int Composite::getLeftoverCapacity() 
{
    int leftoverCapacity = 0;
    for (FarmUnit* unit : farmUnits) {
        leftoverCapacity += unit->getLeftoverCapacity();
    }
    return leftoverCapacity;
}

// Observer-related methods
void Composite::checkCapacity() 
{
    for (FarmUnit* unit : farmUnits) {
        unit->checkCapacity();
    }
}

void Composite::checkSoilState() 
{
    for (FarmUnit* unit : farmUnits) {
        unit->checkSoilState();
    }
}

void Composite::notifyTruck(const std::string& truckType) 
{
    for (FarmUnit* unit : farmUnits) {
        unit->notifyTruck(truckType);
    }
}
