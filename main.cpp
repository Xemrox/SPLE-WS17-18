#include <iostream>

#include "DriverInfoSystem.h"
#include "PassengerRouteStrategy.h"
#include "TruckRouteStrategy.h"

using std::cout;
using std::endl;

int main() {
	cout << "SPLE 6 Test" << endl;

	RouteStrategy* pRs = new PassengerRouteStrategy();
	RouteStrategy* tRs = new TruckRouteStrategy();

	DriverInfoSystem disP(pRs);
	disP.newRoute();


	DriverInfoSystem disT(tRs);
	disT.newRoute();

	cout << "SPLE 6 End" << endl;

	return 0;
}
