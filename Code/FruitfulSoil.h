#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H


#include <string>
#include "State.h"

class FruitfulSoil : State
{


public:
	void harvestCrops();

	void rain();

	std::string getName();
};

#endif
