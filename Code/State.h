#ifndef STATE_H
#define STATE_H

#include <string>


class CropField;

class State {
public:
    virtual ~State() {}
    
   
    virtual void harvestCrops(CropField* field) = 0;
    virtual void rain(CropField* field) = 0;
    virtual std::string getName() = 0;
    virtual State* clone() const = 0; 

};

#endif
