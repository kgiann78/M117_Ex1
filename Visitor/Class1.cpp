#include "Class1.h"

void Class1::access(StudyCaseVisitorInterface *visitor) {
	visitor->visit(this);
}