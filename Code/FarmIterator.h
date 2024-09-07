#ifndef FARMITERATOR_H
#define FARMITERATOR_H

class FarmUnit;

class FarmIterator {
public:
    virtual ~FarmIterator() {}
    
    // Move to the first farm
    virtual void firstFarm() = 0;
    
    // Move to the next farm
    virtual void next() = 0;
    
    // Check if the traversal is done
    virtual bool isDone() = 0;
    
    // Return the current farm
    virtual FarmUnit* currentFarm() = 0;
};

#endif
