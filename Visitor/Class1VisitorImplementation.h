#ifndef CLASS1
#define CLASS1
#include "Class1.h"
#endif

class Class1VisitorImplementation : public StudyCaseVisitorInterface
{
public:
	void visit(Class1 *class1) {
		 cout<<"alekos\n";
	}
};