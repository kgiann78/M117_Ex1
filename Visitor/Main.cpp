#include <iostream>
#include <iomanip>
#include <string.h>
#include "StartVisitor.h"
#include "StopVisitor.h"
#include "AccelerateVisitor.h"
#include "BreakingVisitor.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Vehicle *BMW_120d = new BMW("BMW 120d", new Engine(180));
	StartVisitor *startVisitor = new StartVisitor();
	StopVisitor *stopVisitor = new StopVisitor();
	AccelerateVisitor *accelerateVisitor = new AccelerateVisitor();
	BreakingVisitor *breakingVisitor = new BreakingVisitor();
	BMW_120d->access(startVisitor);
	BMW_120d->setSpeed(120);
	BMW_120d->access(accelerateVisitor);
	BMW_120d->access(breakingVisitor);
	BMW_120d->access(stopVisitor);

	return 0;
}
