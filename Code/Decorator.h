#ifndef DECORATOR_H
#define DECORATOR_H

#include "FarmUnit.h"

class Decorator : public FarmUnit {
protected:
    FarmUnit* decoratedUnit;

public:
       Decorator(FarmUnit* unit) : decoratedUnit(unit) {}

    virtual void increaseProduction() = 0;
    virtual void harvest() = 0;
    virtual int getLeftoverCapacity() = 0;

    void checkCapacity() override;
    void checkSoilState() override;
    void notifyTruck(const std::string& truckType) override;

    int getTotalCapacity() override {
        return decoratedUnit->getTotalCapacity();
    }

    std::string getCropType() override {
        return decoratedUnit->getCropType();
    }

    std::string getSoilTypeName() override {
        return decoratedUnit->getSoilTypeName();
    }
};

#endif
