#include "VehicleDiesel.h"
#include <iostream>

VehicleDiesel::VehicleDiesel(string model, Engine* engine):Vehicle(model, engine) {
	cout<<this->model<<" has arrived!"<<endl;
}
void VehicleDiesel::start() {
	this->engine->start();
}
void VehicleDiesel::stop(){
	this->engine->stop();
}
void VehicleDiesel::step_on_it(int x){
	cout<<model<<" accelerates to "<<this->engine->accelerate(x)<<" km/h"<<endl;
}
void VehicleDiesel::hit_the_breaks(int x){
	cout<<model<<" breaks to "<<this->engine->breaking(x)<<" km/h"<<endl;
}
