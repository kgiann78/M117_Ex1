#ifndef ENGINE_H
#define ENGINE_H
#include "Engine.h"
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
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void step_on_it(int x) = 0;
	virtual void hit_the_breaks(int x) = 0;
protected:
	string model;
	Engine *engine;
};