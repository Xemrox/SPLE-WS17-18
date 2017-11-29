
#ifndef __TRUCKROUTESTRATEGY
#define __TRUCKROUTESTRATEGY

#include <iostream>

#include "RouteStrategy.h"

using std::cout;
using std::endl;

class TruckRouteStrategy : public RouteStrategy {
public:
	void calculate(void);
};

#endif