#include "FarmUnit.h"
#include "TruckInterface.h"
#include <iostream>

FarmUnit::FarmUnit() : deliveryTruck(NULL), fertilizeTruck(NULL) {}

FarmUnit::~FarmUnit() {
    delete deliveryTruck;
    delete fertilizeTruck;
}

void FarmUnit::buyTruck(const std::string& truckType) {
    if (truckType == "Delivery") {
        if (deliveryTruck == NULL) {
            deliveryTruck = new DeliveryTruck();
            std::cout << "Delivery truck purchased.\n";
        } else {
            std::cout << "Delivery truck already exists.\n";
        }
    } else if (truckType == "Fertilize") {
        if (fertilizeTruck == NULL) {
            fertilizeTruck = new FertilizeTruck();
            std::cout << "Fertilize truck purchased.\n";
        } else {
            std::cout << "Fertilize truck already exists.\n";
        }
    }
}

void FarmUnit::sellTruck(const std::string& truckType) {
    if (truckType == "Delivery") {
        if (deliveryTruck != NULL) {
            delete deliveryTruck;
            deliveryTruck = NULL;
            std::cout << "Delivery truck sold.\n";
        } else {
            std::cout << "No delivery truck to sell.\n";
        }
    } else if (truckType == "Fertilize") {
        if (fertilizeTruck != NULL) {
            delete fertilizeTruck;
            fertilizeTruck = NULL;
            std::cout << "Fertilize truck sold.\n";
        } else {
            std::cout << "No fertilize truck to sell.\n";
        }
    }
}

void FarmUnit::callTruck(const std::string& truckType) {
    if (truckType == "Delivery" && deliveryTruck != NULL) {
        deliveryTruck->startEngine();
        std::cout << "Delivery truck dispatched.\n";
    } else if (truckType == "Fertilize" && fertilizeTruck != NULL) {
        fertilizeTruck->startEngine();
        std::cout << "Fertilize truck dispatched.\n";
    } else {
        std::cout << "No truck of type " << truckType << " available to dispatch.\n";
    }
}
