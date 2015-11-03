#ifndef BMW_MERC
#define BMW_MERC
#include "BMW.h"
#include "MercedesBenz.h"
#endif

class BreakingVisitor : public VehicleVisitor
{
public:
	void visit(BMW *bmw) {
		bmw->getEngine()->breaking(0);
	}
	void visit(MercedesBenz *mercedes) {
		mercedes->getEngine()->breaking(0);
	}
};
