#ifndef FLODDEDSOIL_H
#define FLODDEDSOIL_H

#include <string>
#include "State.h"

class FloddedSoil : State
{


public:
	void harvestCrops();

	void rain();

	std::string getName();
};

#endif
