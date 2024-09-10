#ifndef COMPOSITE_H
#define COMPOSITE_H

#include"FarmUnit.h"
#include <vector>

class Composite : public FarmUnit
{   
    private:
    std::vector<FarmUnit*> farmUnits;

    public:
      Composite();

   
    ~Composite();

    // Methods to manage farm units
    void addFarmUnit(FarmUnit* unit);
    void removeFarmUnit(FarmUnit* unit);

    // Override FarmUnit methods
    int getTotalCapacity() override;
    std::string getCropType() override;
    std::string getSoilTypeName() override;
    void increaseProduction() override;
    void harvest() override;
    int getLeftoverCapacity() override;

    // Observer-related methods
    void checkCapacity() override;
    void checkSoilState() override;
    void notifyTruck(const std::string& truckType) override;
};

#endif
