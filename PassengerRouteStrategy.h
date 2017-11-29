
#ifndef __PASSENGERROUTESTRATEGY
#define __PASSENGERROUTESTRATEGY

#include <iostream>

#include "RouteStrategy.h"

using std::cout;
using std::endl;

class PassengerRouteStrategy : public RouteStrategy {
public:
	void calculate(void);
};

#endif
