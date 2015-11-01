#ifndef ENGINE_H
#define ENGINE_H
#include "Engine.h"
#endif

class EnginePetrol : public Engine {
public:
	EnginePetrol(int x);
	void start();
	void stop();
	int accelerate(int);
	int breaking(int);
	int getMaxSpeed();
};