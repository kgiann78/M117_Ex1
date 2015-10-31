#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif

class VehicleDiesel: public Vehicle
{
public:
	VehicleDiesel(string model, Engine* engine);
	void start();
	void stop();
	void step_on_it(int x);
	void hit_the_breaks(int x);
};