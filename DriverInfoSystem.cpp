
#include "DriverInfoSystem.h"

DriverInfoSystem::DriverInfoSystem(RouteStrategy* rs) {
	this->myRS = rs;
}
void DriverInfoSystem::newRoute(void) {
	this->myRS->calculate();
}
