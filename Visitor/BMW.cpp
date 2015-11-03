#include "BMW.h"
#include <iostream>

BMW::BMW(string model, Engine* engine):Vehicle(model, engine) {
	cout<<this->model<<" has arrived!"<<endl;
}

void BMW::access(VehicleVisitor *visitor) {
	visitor->visit(this);
}
