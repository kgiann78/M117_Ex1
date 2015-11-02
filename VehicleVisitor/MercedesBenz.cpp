#include "MercedesBenz.h"
#include <iostream>

MercedesBenz::MercedesBenz(string model, Engine* engine):Vehicle(model, engine) {
	cout<<this->model<<" has arrived!"<<endl;
}

void MercedesBenz::access(VehicleVisitor *visitor) {
	visitor->visit(this);
}
