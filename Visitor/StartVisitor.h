#ifndef BMW_MERC
#define BMW_MERC
#include "BMW.h"
#include "MercedesBenz.h"
#endif

class StartVisitor : public VehicleVisitor
{
public:
	void visit(BMW *bmw) {
		bmw->getEngine()->start();
	}
	void visit(MercedesBenz *mercedes) {
		mercedes->getEngine()->start();
	}
};
