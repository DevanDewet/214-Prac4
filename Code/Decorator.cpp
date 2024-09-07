#include "Decorator.h"
void Decorator::checkCapacity() {
    decoratedUnit->checkCapacity();
}

void Decorator::checkSoilState() {
    decoratedUnit->checkSoilState();
}

void Decorator::notifyTruck(const std::string& truckType) {
    decoratedUnit->notifyTruck(truckType);
}