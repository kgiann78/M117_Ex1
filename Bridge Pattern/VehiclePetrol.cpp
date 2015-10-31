#include "VehiclePetrol.h"
#include <iostream>

VehiclePetrol::VehiclePetrol(string model, Engine* engine):Vehicle(model, engine) {
	cout<<this->model<<" has arrived!"<<endl;
}
void VehiclePetrol::start() {
	this->engine->start();
}
void VehiclePetrol::stop(){
	this->engine->stop();
}
void VehiclePetrol::step_on_it(int x){
	cout<<model<<" accelerates to "<<this->engine->accelerate(x)<<" km/h"<<endl;
}
void VehiclePetrol::hit_the_breaks(int x){
	cout<<model<<" breaks to "<<this->engine->breaking(x)<<" km/h"<<endl;
}
