#ifndef BMW_MERC
#define BMW_MERC
#include "BMW.h"
#include "MercedesBenz.h"
#endif

class AccelerateVisitor : public VehicleVisitor
{
public:
	void visit(BMW *bmw) {
		bmw->getEngine()->accelerate(bmw->getSpeed());
	}
	void visit(MercedesBenz *mercedes) {
		mercedes->getEngine()->accelerate(mercedes->getSpeed());
	}
};
