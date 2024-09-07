#ifndef FERTILIZEDFIELD_H
#define FERTILIZEDFIELD_H

#include "Decorator.h"
#include "FarmIterator.h"

class FertilizedField : public Decorator {

private:    
        int additionalCapacity;

public:
    FertilizedField(FarmUnit* unit) : Decorator(unit) {}

    void increaseProduction() override;
    void harvest() override;
    int getLeftoverCapacity() override;
    std::string getSoilTypeName();
};

#endif
