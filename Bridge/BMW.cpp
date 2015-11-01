#include "BMW.h"
#include <iostream>

BMW::BMW(string model, Engine* engine):Vehicle(model, engine) {
	cout<<this->model<<" has arrived!"<<endl;
}
void BMW::start() {
	this->engine->start();
}
void BMW::stop(){
	this->engine->stop();
}
void BMW::step_on_it(int x){
	cout<<model<<" accelerates to "<<this->engine->accelerate(x)<<" km/h"<<endl;
}
void BMW::hit_the_breaks(int x){
	cout<<model<<" breaks to "<<this->engine->breaking(x)<<" km/h"<<endl;
}
