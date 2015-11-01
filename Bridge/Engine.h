#include <iostream>
#include <string>

using namespace std;

class Engine
{
public:
	Engine(int x) {
		maxSpeed = x;
	};
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual int accelerate(int) = 0;
	virtual int breaking(int) = 0;
	virtual int getMaxSpeed() = 0;
protected:
	int maxSpeed;
	int speed;
};