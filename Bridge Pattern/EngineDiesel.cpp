#include "EngineDiesel.h"
#include <iostream>

EngineDiesel::EngineDiesel(int x) : Engine(x) {
	std::cout<<"Diesel engine created!"<<std::endl;
}

void EngineDiesel::start() {
	std::cout<<"Diesel engine is turned on!"<<std::endl;
};

void EngineDiesel::stop() {
	std::cout<<"Diesel engine is turned off!"<<std::endl;
};

int EngineDiesel::accelerate(int max_speed) {
	if (max_speed <= this->maxSpeed)
	{
		this->speed = max_speed;
	}
	return this->speed;
};

int EngineDiesel::breaking(int max_speed) {
	if (max_speed >= 0)
	{
		this->speed = max_speed;
	}
	return this->speed;
};

int EngineDiesel::getMaxSpeed() {
	return 0;
};