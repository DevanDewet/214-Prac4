#ifndef FERTILIZETRUCK_H
#define FERTILIZETRUCK_H
#include "TruckInterface.h"

class FertilizeTruck : public TruckInterface {
	public:
    	void startEngine() override;  
};

#endif
