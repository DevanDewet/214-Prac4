#include "DrySoil.h"
#include "CropField.h"
#include "FruitfulSoil.h"

void DrySoil::harvestCrops(CropField* field) {

    int yield = field->getYield();  // Assume getYield() gets the current yield
    field->setYield(yield);  // Adjust yield
    std::cout << "Harvesting crops from DrySoil.\n";
}

void DrySoil::rain(CropField* field) {
 
    field->setState(new FruitfulSoil());  
	 delete this;
    std::cout << "Rain has turned the soil to Fruitful.\n";
}

std::string DrySoil::getName() {
    return "Dry";
}
