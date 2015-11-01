#include "MercedesBenz.h"
#include <iostream>

MercedesBenz::MercedesBenz(string model, Engine* engine):Vehicle(model, engine) {
	cout<<this->model<<" has arrived!"<<endl;
}
void MercedesBenz::start() {
	this->engine->start();
}
void MercedesBenz::stop(){
	this->engine->stop();
}
void MercedesBenz::step_on_it(int x){
	cout<<model<<" accelerates to "<<this->engine->accelerate(x)<<" km/h"<<endl;
}
void MercedesBenz::hit_the_breaks(int x){
	cout<<model<<" breaks to "<<this->engine->breaking(x)<<" km/h"<<endl;
}
