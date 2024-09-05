#ifndef DRYSOIL_H
#define DRYSOIL_H

#include <string> 
#include "State.h"

class DrySoil : State
{


public:
	void harvestCrops();

	void rain();

	std::string getName();
};

#endif
