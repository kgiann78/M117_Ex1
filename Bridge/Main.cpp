#include <iostream>
#include <iomanip>
#include <string.h>
#include "EnginePetrol.h"
#include "EngineDiesel.h"
#include "BMWVehicle.h"
#include "MercedesBenzVehicle.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Vehicle *BMW_120d = new BMWVehicle("BMW 120d", new EngineDiesel(180));
	BMW_120d->start();
	BMW_120d->step_on_it(120);
	BMW_120d->hit_the_breaks(0);
	BMW_120d->stop();
	
	cout<<endl;
	Vehicle *BMW_120i = new BMWVehicle("BMW 120i", new EnginePetrol(220));
	BMW_120i->start();
	BMW_120i->step_on_it(180);
	BMW_120i->hit_the_breaks(0);
	BMW_120i->stop();

	return 0;
}