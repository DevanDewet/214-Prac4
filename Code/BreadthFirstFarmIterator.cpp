#include "BreadthFirstFarmIterator.h"
#include "FarmUnit.h"
#include <queue>
#include <vector>
#include <iostream>

BreadthFirstFarmIterator::BreadthFirstFarmIterator(std::vector<FarmUnit*> farmUnits) : currentFarmUnit(NULL) {
    for (std::vector<FarmUnit*>::iterator it = farmUnits.begin(); it != farmUnits.end(); ++it) {
        if (*it != NULL) {
            farmQueue.push(*it);
        }
    }
    firstFarm();
}


void BreadthFirstFarmIterator::firstFarm() {
    if (!farmQueue.empty()) {
        currentFarmUnit = farmQueue.front();
    } else {
        std::cerr << "Farm queue is empty!\n";
        currentFarmUnit = NULL;
    }
}


void BreadthFirstFarmIterator::next() {
    if (!farmQueue.empty()) {
        farmQueue.pop();  // Remove the front of the queue
        if (!farmQueue.empty()) {
            currentFarmUnit = farmQueue.front();  // Set to next farm in the queue
        } else {
            currentFarmUnit = NULL;  // Queue is empty, no more farms
        }
    }
}

bool BreadthFirstFarmIterator::isDone() {
    return farmQueue.empty();  // Return whether there are any farms left to process
}

FarmUnit* BreadthFirstFarmIterator::currentFarm() {
    return currentFarmUnit;  // Return the current farm or NULL if none
}
