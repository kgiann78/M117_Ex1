#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#endif

class BMW: public Vehicle
{
public:
	BMW(string model, Engine* engine);
	void set_acceleration(int speed);
	int get_acceleration();
	void access(VehicleVisitor *visitor);
private:
	int speed;
};
