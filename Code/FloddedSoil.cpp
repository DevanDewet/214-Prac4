#include "FloddedSoil.h"
#include "CropField.h"

void FloodedSoil::harvestCrops(CropField* field) {
 std::cout << "Attempting to harvest crops in flooded soil. No crops can be harvested." << std::endl;
}

void FloodedSoil::rain(CropField* field) {
 std::cout << "It is raining. Soil is already flooded, no change in state." << std::endl;
}

std::string FloodedSoil::getName() {
    return "Flooded";
}