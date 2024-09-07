#include "FertilizedField.h"
#include "FarmIterator.h"
#include "BreadthFirstFarmIterator.h"
#include "DepthFirstFarmIterator.h"
#include "CropField.h"
#include <iostream>

void FertilizedField::increaseProduction() {
    Decorator::increaseProduction();
}

void FertilizedField::harvest() {
    Decorator::harvest();
}

int FertilizedField::getLeftoverCapacity() {
    return Decorator::getLeftoverCapacity() + additionalCapacity;  
}

std::string FertilizedField::getSoilTypeName() {
    return "Fertilized Soil";  
}
