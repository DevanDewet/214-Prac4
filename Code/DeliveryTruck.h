#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H
#include "TruckInterface.h"

class DeliveryTruck : public TruckInterface {
public:
    void startEngine() override; 
};

#endif
