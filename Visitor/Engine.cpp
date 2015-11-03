#include "Engine.h"
#include <iostream>

Engine::Engine(int x) {
	this->maxSpeed = x;
	std::cout<<"Engine created!"<<std::endl;
}

void Engine::start() {
	std::cout<<"Engine is turned on!"<<std::endl;
};

void Engine::stop() {
	std::cout<<"Engine is turned off!"<<std::endl;
};

int Engine::accelerate(int max_speed) {
	if (max_speed <= this->maxSpeed)
	{
		this->speed = max_speed;
	}
	std::cout<<"Step on it! Up to "<<this->speed<<std::endl;
	return this->speed;
};

int Engine::breaking(int max_speed) {
	if (max_speed >= 0)
	{
		this->speed = max_speed;
	}
	std::cout<<"Hit the breaks! Stop when speed is "<<this->speed<<std::endl;
	return this->speed;
};

int Engine::getMaxSpeed() {
	return 0;
};
