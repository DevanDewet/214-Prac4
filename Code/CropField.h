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
public:
   
     CropField(const std::string& crop, int capacity, State* initialSoilState) 
        : cropType(crop), totalCapacity(capacity), currentStoredCrops(0), soilState(initialSoilState), yield(0) {}
	
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

    DepthFirstFarmIterator* CreateDepthFirstFarmIterator();
    BreadthFirstFarmIterator* CreateBreadthFirstFarmIterator();
};

#endif
