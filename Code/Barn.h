#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"
#include <string>

class Barn : public FarmUnit {
private:
    int storageCapacity;
    int trucksAvailable;

public:
    // Constructor
    Barn(int storageCapacity, int trucksAvailable);

    // Implementing FarmUnit methods
    void buyTruck() override;

    void sellTruck() override;

    int getTotalCapacity() override;

    std::string getCropType() override;

    std::string getSoilTypeName() override;

    void harvest() override;

    int getLeftoverCapacity() override;

    // Extra functionality for Barn
    void storeEquipment();

    void increaseStorageCapacity(int amount);

    void dispatchTruck();
};

#endif
