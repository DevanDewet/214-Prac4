#include "CropField.h"
#include "DepthFirstFarmIterator.h"
#include "BreadthFirstFarmIterator.h"


int CropField::getTotalCapacity() 
{
	return totalCapacity;
}

std::string CropField::getCropType() 
{
	return cropType;
}

std::string CropField::getSoilTypeName() 
{
	return soilState;
}

void CropField::increaseProduction()  
{
	if (soilState == "Dry") 
		{
				soilState = "Fruitful";  
				std::cout << "Fertilizer applied. Soil state changed to Fruitful.\n";
		} 
		else 
		{
            std::cout << "Soil state is already fruitful or flooded, cannot apply fertilizer.\n";
        }
}

void CropField::harvest()
{
	if (soilState == "Fruitful") 
	{
        int harvestedAmount = 3;  
        currentStoredCrops += harvestedAmount;
        std::cout << harvestedAmount << " crops harvested from " << cropType << ".\n";
    } 
	else if (soilState == "Dry") 
	{
        int harvestedAmount = 1;
        currentStoredCrops += harvestedAmount;
        std::cout << harvestedAmount << " crops harvested from " << cropType << ".\n";
    } 
	else if (soilState == "Flooded") 
	{
        std::cout << "Field is flooded. No crops can be harvested.\n";
    }
}

int CropField::getLeftoverCapacity()
{
	return totalCapacity - currentStoredCrops;
}

DepthFirstFarmIterator* CropField::CreateDepthFirstFarmIterator()
{
	return new DepthFirstFarmIterator(); // just put this here to get erros away 
}

BreadthFirstFarmIterator* CropField::CreateBreadthFirstFarmIterator()
{
	 return new BreadthFirstFarmIterator(); // just put this here to get erros away
}
