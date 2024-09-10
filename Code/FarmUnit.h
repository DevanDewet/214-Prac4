#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <string>
#include "TruckInterface.h"
#include "FertilizeTruck.h"
#include "DeliveryTruck.h"
#include "FarmIterator.h"
#include <vector>


class FarmUnit {
protected:
    FertilizeTruck* fertilizeTruck;  // Pointer to the fertilize truck
    DeliveryTruck* deliveryTruck;    // Pointer to the delivery truck
    std::vector<FarmUnit*> connectedFarms;


public:
    FarmUnit();
    virtual ~FarmUnit();

    // Pure virtual methods to be implemented by derived classes
    virtual int getTotalCapacity() = 0;
    virtual std::string getCropType() = 0;
    virtual std::string getSoilTypeName() = 0;
    virtual void increaseProduction() = 0;
    virtual void harvest() = 0;
    virtual int getLeftoverCapacity() = 0;

    // Truck management methods
    void buyTruck(const std::string& truckType);
    void sellTruck(const std::string& truckType);
    void callTruck(const std::string& truckType);

    // Observer functions to be overridden by concrete observers (CropField)
    virtual void checkCapacity() = 0;
    virtual void checkSoilState() = 0;
    virtual void notifyTruck(const std::string& truckType) = 0;

     virtual void addFarmUnit(FarmUnit* unit) {
       
    }

    virtual void removeFarmUnit(FarmUnit* unit) {
       
    }
};

#endif
