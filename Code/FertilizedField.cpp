#include "FertilizedField.h"
#include <iostream>

void FertilizedField::increaseProduction() {
    // Implement logic to increase production
}

void FertilizedField::harvest() {
    // Implement logic to harvest with enhanced soil state
}

int FertilizedField::getLeftoverCapacity() {
    return decoratedUnit->getLeftoverCapacity();  // Use base functionality or adjust as needed
}

std::string FertilizedField::getSoilTypeName() {
    return "Fertilized Soil";  // Or use some logic to get the name
}