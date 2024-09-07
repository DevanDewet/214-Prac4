#ifndef DEPTHFIRSTFARMITERATOR_H
#define DEPTHFIRSTFARMITERATOR_H

#include "FarmIterator.h"
#include <stack>
#include <vector>

class CropField;

class DepthFirstFarmIterator : public FarmIterator {
private:
    std::stack<FarmUnit*> farmStack;
    FarmUnit* currentFarmUnit;

public:
    DepthFirstFarmIterator(std::vector<FarmUnit*> farmUnits);
    void firstFarm() override;
    void next() override;
    bool isDone() override;
    FarmUnit* currentFarm() override;
};

#endif
