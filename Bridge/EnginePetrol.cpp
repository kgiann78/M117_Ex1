#include "EnginePetrol.h"
#include <iostream>

EnginePetrol::EnginePetrol(int x) : Engine(x) {
	std::cout<<"Petrol engine created!"<<std::endl;
};

void EnginePetrol::start() {
	std::cout<<"Petrol engine is turned on!"<<std::endl;
}

void EnginePetrol::stop() {
	std::cout<<"Petrol engine is turned off!"<<std::endl;
};

int EnginePetrol::accelerate(int max_speed) {
	if (max_speed <= this->maxSpeed)
	{
		this->speed = max_speed;
	}
	return this->speed;
};

int EnginePetrol::breaking(int max_speed) {
	if (max_speed >= 0)
	{
		this->speed = max_speed;
	}
	return this->speed;
};

int EnginePetrol::getMaxSpeed() {
	return 0;
};