#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif

class VehiclePetrol: public Vehicle
{
public:
	VehiclePetrol(string model, Engine* engine);
	void start();
	void stop();
	void step_on_it(int x);
	void hit_the_breaks(int x);
};