#include "DepthFirstFarmIterator.h"
#include "FarmUnit.h"
#include <vector>
#include <stack>
#include <iostream>

DepthFirstFarmIterator::DepthFirstFarmIterator(std::vector<FarmUnit*> farmUnits) : currentFarmUnit(NULL) {
    for (std::vector<FarmUnit*>::reverse_iterator it = farmUnits.rbegin(); it != farmUnits.rend(); ++it) {
        if (*it) {
            farmStack.push(*it);
        }
    }
    firstFarm();
}


void DepthFirstFarmIterator::firstFarm() {
    if (!farmStack.empty()) {
        currentFarmUnit = farmStack.top();
    } else {
        std::cerr << "Farm stack is empty!\n";
        currentFarmUnit = NULL;
    }
}


void DepthFirstFarmIterator::next() {
    if (!farmStack.empty()) {
        farmStack.pop();
        if (!farmStack.empty()) {
            currentFarmUnit = farmStack.top();
        } else {
            currentFarmUnit = NULL;
        }
    }
}

bool DepthFirstFarmIterator::isDone() {
    return farmStack.empty();
}

FarmUnit* DepthFirstFarmIterator::currentFarm() {
    return currentFarmUnit;
}
