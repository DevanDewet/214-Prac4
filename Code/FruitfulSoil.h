#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include <string>
#include "State.h"

class FruitfulSoil : public State {
public:
    void harvestCrops(CropField* field) override;
    void rain(CropField* field) override;
    std::string getName() override;
};

#endif
