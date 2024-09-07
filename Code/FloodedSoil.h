#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include <string>
#include "State.h"

class FloodedSoil : public State {
public:
    void harvestCrops(CropField* field) override;
    void rain(CropField* field) override;
    std::string getName() override;
    State* clone() const override {
        return new FloodedSoil(*this);
    }
};

#endif
