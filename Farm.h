#ifndef FARM_H
#define FARM_H

class Farm : FarmCollection
{


public:
	DepthFirstFarmIterator* CreateDepthFirstFarmIterator();

	BreadthFirstFarmIterator* CreateBreadthFirstFarmIterator();
};

#endif
