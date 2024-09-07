#include <iostream>
#include <vector>
#include "CropField.h"
#include "Barn.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"
#include "FertilizedField.h"
#include "ExtraBarn.h"
#include "Decorator.h"
#include "FarmUnit.h"

void Decorator::increaseProduction() {
    decoratedUnit->increaseProduction();
}

void Decorator::harvest() {
    decoratedUnit->harvest();
}



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
   
    std::cout << "Crop Type: " << field1->getCropType() << std::endl;
    std::cout << "Total Capacity: " << field1->getTotalCapacity() << std::endl;
    std::cout << "Soil State: " << field1->getSoilStateName() << std::endl;
    field1->rain();  // Simulate rain
    std::cout << "After Rain - Soil State: " << field1->getSoilStateName() << std::endl;
    field1->harvest();
    std::cout << "After Harvest - Leftover Capacity: " << field1->getLeftoverCapacity() << std::endl;

    std::cout << std::endl;

    
    std::cout << "Crop Type: " << field2->getCropType() << std::endl;
    std::cout << "Total Capacity: " << field2->getTotalCapacity() << std::endl;
    std::cout << "Soil State: " << field2->getSoilStateName() << std::endl;
    field2->rain();  // Simulate rain
    std::cout << "After Rain - Soil State: " << field2->getSoilStateName() << std::endl;
    field2->harvest();
    std::cout << "After Harvest - Leftover Capacity: " << field2->getLeftoverCapacity() << std::endl;

    std::cout << std::endl;

    
    std::cout << "Crop Type: " << field3->getCropType() << std::endl;
    std::cout << "Total Capacity: " << field3->getTotalCapacity() << std::endl;
    std::cout << "Soil State: " << field3->getSoilStateName() << std::endl;
    field3->rain();  // Simulate rain
    std::cout << "After Rain - Soil State: " << field3->getSoilStateName() << std::endl;
    field3->harvest();  // Shouldn't affect due to Flooded Soil
    std::cout << "After Harvest - Leftover Capacity: " << field3->getLeftoverCapacity() << std::endl;
    std::cout << std::endl;

    // Clean up
    delete field1;
    delete field2;
    delete field3;
}

void Test2() {
    // Create initial state and fields
    State* drySoil = new DrySoil();
    State* fruitfulSoil = new FruitfulSoil();

    // Create crop fields
    CropField* wheatField = new CropField("Wheat", 100, drySoil);
    CropField* cornField = new CropField("Corn", 150, fruitfulSoil);

 

    // Buying trucks
  
    wheatField->buyTruck("Fertilize");
    wheatField->buyTruck("Delivery");

    cornField->buyTruck("Fertilize");
    cornField->buyTruck("Delivery");

    std::cout << std::endl;
    // Simulating soil drying out

    wheatField->rain();  // Transitioning to Fruitful soil (simulate rain)
    wheatField->checkSoilState();  // Should not dispatch FertilizeTruck

    wheatField->setState(new DrySoil());  // Manually setting to dry soil again
    wheatField->checkSoilState();  // Should dispatch FertilizeTruck

    std::cout << std::endl;

    // Harvesting crop and checking delivery truck

    wheatField->setYield(90);  // Assume 90 units of crops harvested
    wheatField->harvest();     // Field's stored crops will now be at 90
    wheatField->checkCapacity();  // Should not dispatch DeliveryTruck (still below limit)

    wheatField->setYield(20);  // Setting yield to exceed total capacity
    wheatField->harvest();     // Exceeding the field's capacity
    wheatField->checkCapacity();  // Should dispatch DeliveryTruck

    std::cout << std::endl;
    // Selling trucks

    wheatField->sellTruck("Fertilize");
    wheatField->sellTruck("Delivery");

    std::cout << std::endl;
    // Trying to call trucks after they were sold (should not start trucks)

    wheatField->callTruck("Fertilize");
    wheatField->callTruck("Delivery");

    // Cleanup
    delete wheatField;
    delete cornField;
}

void Test3() {
    CropField* field = new CropField("Wheat", 50, new DrySoil());

  

 
    std::cout << "Crop Type: " << field->getCropType() << "\n";
    std::cout << "Soil State: " << field->getSoilTypeName() << "\n";
    std::cout << "Total Capacity: " << field->getTotalCapacity() << "\n";
    std::cout << "Leftover Capacity: " << field->getLeftoverCapacity() << "\n";

    std::cout << std::endl;
    // Apply Fertilizer
    FertilizedField* fertilizedField = new FertilizedField(field);
    fertilizedField->increaseProduction();
    fertilizedField->harvest();

    std::cout << "Soil State: " << fertilizedField->getSoilTypeName() << "\n";
    std::cout << "Leftover Capacity: " << fertilizedField->getLeftoverCapacity() << "\n";

    std::cout << std::endl;
    // Add Extra Barn
    ExtraBarn* extraBarn = new ExtraBarn(fertilizedField, 50);
  
    std::cout << "Leftover Capacity: " << extraBarn->getLeftoverCapacity() << "\n";

    std::cout << std::endl;
    // Clean up
    delete extraBarn;
    delete fertilizedField;
    delete field;
}

int main() {

    Test1();
    Test2();
    Test3();
}

