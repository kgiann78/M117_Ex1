#include <iostream>
#include <string>

using namespace std;

class Engine
{
public:
	Engine(int x);
	void start();
	void stop();
	int accelerate(int);
	int breaking(int);
	int getMaxSpeed();
protected:
	int maxSpeed;
	int speed;
};
