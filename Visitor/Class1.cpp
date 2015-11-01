#include "Class1.h"

Class1::Class1() {
	this->value = 0;
}

Class1::Class1(int value) {
	this->value = value;
}

void Class1::setValue(int value) {
	this->value = value;
}

int Class1::getValue() {
	return this->value;
}

void Class1::access(StudyCaseVisitorInterface *visitor) {
	visitor->visit(this);
}