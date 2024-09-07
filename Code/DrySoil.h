#ifndef DRYSOIL_H
#define DRYSOIL_H

#include <string>
#include "State.h"

class CropField;

class DrySoil : public State {
public:
    
    void harvestCrops(CropField* field) override;
    void rain(CropField* field) override;
    std::string getName() override;
    State* clone() const override {
        return new DrySoil(*this);  
    }
};

#endif
