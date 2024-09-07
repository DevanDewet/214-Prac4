#include "ExtraBarn.h"
#include <iostream>

void ExtraBarn::increaseProduction() {
    Decorator::increaseProduction();
}

void ExtraBarn::harvest() {
    Decorator::harvest();
}

int ExtraBarn::getLeftoverCapacity() {
    return Decorator::getLeftoverCapacity() + additionalCapacity;  
}