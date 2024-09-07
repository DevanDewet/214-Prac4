#include "CropField.h"

// Getters
int CropField::getTotalCapacity() {
    return totalCapacity;
}

std::string CropField::getCropType() {
    return cropType;
}

std::string CropField::getSoilTypeName() {
    return soilState->getName();
}

void CropField::increaseProduction() {
    std::cout << "Increasing production based on soil state: " << soilState->getName() << "\n";
}

void CropField::harvest() {
    soilState->harvestCrops(this);  
    currentStoredCrops += yield;
}

int CropField::getLeftoverCapacity() {
    return totalCapacity - currentStoredCrops;
}

void CropField::setState(State* state) {
    // Manage previous state memory safely
    if (soilState) {
        delete soilState;
    }
    soilState = state;
}

void CropField::rain() {
    soilState->rain(this);
}

std::string CropField::getSoilStateName() {
    return soilState->getName();
}

int CropField::getYield() {
    return yield;
}

void CropField::setYield(int newYield) {
    yield = newYield;
}

void CropField::checkCapacity() {
    if (getLeftoverCapacity() <= 20) {
        std::cout << "Storage nearing capacity for crop field: " << getCropType() << ". Notifying delivery truck.\n";
        notifyTruck("Delivery");
    }
}

void CropField::checkSoilState() {
    if (soilState->getName() == "Dry") {
        std::cout << "Soil is dry for crop field: " << getCropType() << ". Notifying fertilize truck.\n";
        notifyTruck("Fertilize");
    }
}

void CropField::notifyTruck(const std::string& truckType) {
    callTruck(truckType); // Calls the appropriate truck based on state
}

FarmIterator* CropField::createDepthFirstIterator() {
    return new DepthFirstFarmIterator(connectedFarms);
}

FarmIterator* CropField::createBreadthFirstIterator() {
    return new BreadthFirstFarmIterator(connectedFarms);
}

void CropField::addConnectedFarm(FarmUnit* farm) {
    connectedFarms.push_back(farm);
}