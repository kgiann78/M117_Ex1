#ifndef ENGINE_H
#define ENGINE_H
#include "Engine.h"
#endif

class EngineDiesel : public Engine {
public:
	EngineDiesel(int x);
	void start();
	void stop();
	int accelerate(int);
	int breaking(int);
	int getMaxSpeed();
};