#ifndef BREADTHFIRSTFARMITERATOR_H
#define BREADTHFIRSTFARMITERATOR_H

#include "FarmIterator.h"
#include "FarmUnit.h"
#include <queue>
#include <vector>

class CropField;

class BreadthFirstFarmIterator : public FarmIterator {
private:
    std::queue<FarmUnit*> farmQueue;
    FarmUnit* currentFarmUnit;

public:
    BreadthFirstFarmIterator(std::vector<FarmUnit*> farmUnits);
    void firstFarm() override;
    void next() override;
    bool isDone() override;
    FarmUnit* currentFarm() override;
};

#endif
