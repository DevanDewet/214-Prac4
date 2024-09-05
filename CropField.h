#ifndef CROPFIELD_H
#define CROPFIELD_H

class CropField : FarmUnit
{


public:
	int getTotalCapacity();

	string getCropType();

	string getSoilTypeName();

	void increaseProduction();

	void harvest();

	int getLeftoverCapacity();
};

#endif
