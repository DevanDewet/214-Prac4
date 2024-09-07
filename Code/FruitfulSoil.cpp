#include "FruitfulSoil.h"
#include "CropField.h" 

void FruitfulSoil::harvestCrops(CropField* field) 
{

    int currentYield = field->getYield();
    field->setYield(currentYield * 3);

	std::cout << "Harvesting crops from Fruitful.\n";
}

void FruitfulSoil::rain(CropField* field) 
{
 std::cout << "It is raining. Soil is already fruitful, no change in state." << std::endl;
}


std::string FruitfulSoil::getName() 
{
    return "Fruitful";
}
