#ifndef EXTRABARN_H
#define EXTRABARN_H

#include "Decorator.h"

class ExtraBarn : public Decorator {

private:

    int additionalCapacity;
    
public:
     ExtraBarn(FarmUnit* unit, int capacity) : Decorator(unit), additionalCapacity(capacity) {}

    void increaseProduction() override;
    void harvest() override;
    int getLeftoverCapacity() override;
};

#endif
