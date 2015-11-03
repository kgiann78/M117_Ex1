#ifndef BMW_MERC
#define BMW_MERC
#include "BMW.h"
#include "MercedesBenz.h"
#endif

class StopVisitor : public VehicleVisitor
{
public:
	void visit(BMW *bmw) {
		bmw->getEngine()->stop();
	}
	void visit(MercedesBenz *mercedes) {
		mercedes->getEngine()->stop();
	}
};
