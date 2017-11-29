
#ifndef __ROUTESTRATEGY
#define __ROUTESTRATEGY

#include <iostream>

using std::cout;
using std::endl;

class RouteStrategy {
public:
	virtual void calculate(void) = 0;
};

#endif