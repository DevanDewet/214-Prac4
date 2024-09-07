#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"
#include "DepthFirstFarmIterator.h"
#include "BreadthFirstFarmIterator.h"
#include "State.h"  

#include <string> 
#include <iostream>

class CropField : public FarmUnit {
private:
    std::string cropType;    
    int totalCapacity;       
    int currentStoredCrops;  
    State* soilState;       
	int yield;

    std::vector<FarmUnit*> connectedFarms;

public:
   
     CropField(const std::string& crop, int capacity, State* initialSoilState) : cropType(crop), totalCapacity(capacity), currentStoredCrops(0), soilState(initialSoilState), yield(0) {
            soilState = initialSoilState->clone();
     }
	
	~CropField() {
        delete soilState;
    }
    int getTotalCapacity() override;
    std::string getCropType() override;
    std::string getSoilTypeName() override;
    void increaseProduction() override;
    void harvest() override;
    int getLeftoverCapacity() override;

    void setState(State* state);
    void rain();
    std::string getSoilStateName();
	int getYield(); 
    void setYield(int yield);

    void checkCapacity() override;
    void checkSoilState() override;
    void notifyTruck(const std::string& truckType) override;

    DepthFirstFarmIterator* CreateDepthFirstFarmIterator();
    BreadthFirstFarmIterator* CreateBreadthFirstFarmIterator();
    FarmIterator* createDepthFirstIterator();
    FarmIterator* createBreadthFirstIterator();

    void addConnectedFarm(FarmUnit* farm);
};

#endif
