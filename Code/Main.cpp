#include <iostream>
#include <vector>
#include "CropField.h"
#include "Barn.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"

void Test1() {

    State* drySoil = new DrySoil();
    State* fruitfulSoil = new FruitfulSoil();
    State* floodedSoil = new FloodedSoil();

    CropField* field1 = new CropField("Wheat", 100, drySoil);
    CropField* field2 = new CropField("Corn", 150, fruitfulSoil);
    CropField* field3 = new CropField("Barley", 200, floodedSoil);

    field1->setYield(10);
    field2->setYield(30);
    field3->setYield(20);

      // Show initial states and actions
    std::cout << "Crop Field 1 (Dry Soil):" << std::endl;
    std::cout << "Crop Type: " << field1->getCropType() << std::endl;
    std::cout << "Total Capacity: " << field1->getTotalCapacity() << std::endl;
    std::cout << "Soil State: " << field1->getSoilStateName() << std::endl;
    field1->rain();  // Simulate rain
    std::cout << "After Rain - Soil State: " << field1->getSoilStateName() << std::endl;
    field1->harvest();
    std::cout << "After Harvest - Leftover Capacity: " << field1->getLeftoverCapacity() << std::endl;

    std::cout << "\nCrop Field 2 (Fruitful Soil):" << std::endl;
    std::cout << "Crop Type: " << field2->getCropType() << std::endl;
    std::cout << "Total Capacity: " << field2->getTotalCapacity() << std::endl;
    std::cout << "Soil State: " << field2->getSoilStateName() << std::endl;
    field2->rain();  // Simulate rain
    std::cout << "After Rain - Soil State: " << field2->getSoilStateName() << std::endl;
    field2->harvest();
    std::cout << "After Harvest - Leftover Capacity: " << field2->getLeftoverCapacity() << std::endl;

    std::cout << "\nCrop Field 3 (Flooded Soil):" << std::endl;
    std::cout << "Crop Type: " << field3->getCropType() << std::endl;
    std::cout << "Total Capacity: " << field3->getTotalCapacity() << std::endl;
    std::cout << "Soil State: " << field3->getSoilStateName() << std::endl;
    field3->rain();  // Simulate rain
    std::cout << "After Rain - Soil State: " << field3->getSoilStateName() << std::endl;
    field3->harvest();  // Shouldn't affect due to Flooded Soil
    std::cout << "After Harvest - Leftover Capacity: " << field3->getLeftoverCapacity() << std::endl;

    // Clean up
    delete field1;
    delete field2;
    delete field3;

}

int main() {

    Test1();
}

