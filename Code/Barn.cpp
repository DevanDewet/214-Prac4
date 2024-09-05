#include "Barn.h"
#include <iostream>

// Constructor
Barn::Barn(int storageCapacity, int trucksAvailable)
    : storageCapacity(storageCapacity), trucksAvailable(trucksAvailable) {}


void Barn::buyTruck() 
{
    trucksAvailable++;
    std::cout << "Truck purchased! Total trucks available: " << trucksAvailable << "\n";
}

void Barn::sellTruck() {

    if (trucksAvailable > 0) 
    {
        trucksAvailable--;
        std::cout << "Truck sold! Total trucks available: " << trucksAvailable << "\n";
    } 
    else 
    {
        std::cout << "No trucks available to sell!\n";
    }
}

int Barn::getTotalCapacity() 
{
    return storageCapacity;
}

std::string Barn::getCropType() 
{
    return "No crops stored in Barn."; 
}

std::string Barn::getSoilTypeName() 
{
    return "Barn does not have soil."; 
}

void Barn::harvest() {
    std::cout << "Barn cannot harvest crops!\n"; 
}

int Barn::getLeftoverCapacity() 
{
    return storageCapacity; 
}

// Extra functionality for Barn
void Barn::storeEquipment() 
{
    std::cout << "Storing equipment in the barn.\n";
}

void Barn::increaseStorageCapacity(int amount) 
{
    storageCapacity += amount;
    std::cout << "Barn capacity increased by " << amount << ". New capacity: " << storageCapacity << "\n";
}

void Barn::dispatchTruck() {

    if (trucksAvailable > 0) 
    {
        trucksAvailable--;
        std::cout << "Truck dispatched. Trucks available: " << trucksAvailable << "\n";
    } 
    else 
    {
        std::cout << "No trucks available to dispatch!\n";
    }
}
