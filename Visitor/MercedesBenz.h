#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif

class MercedesBenz: public Vehicle
{
public:
	MercedesBenz(string model, Engine* engine);
	void access(VehicleVisitor *visitor);
};
