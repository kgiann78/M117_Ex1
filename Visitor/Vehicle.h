#ifndef ENGINE_H
#define ENGINE_H
#include "Engine.h"
#include "VehicleVisitor.h"
#endif

class Vehicle
{
public:
	Vehicle(string model, Engine *engine) {
		this->model = model;
		this->engine = engine;
	}

	void getModel() {
		cout<<this->model<<endl;
	}

	Engine *getEngine() {
		return this->engine;
	}

	int getSpeed() {
		return this->speed;
	}

	void setSpeed(int speed) {
		this->speed = speed;
	}

	virtual void access(VehicleVisitor *visitor) = 0;
protected:
	string model;
	Engine *engine;
	int speed;
};
