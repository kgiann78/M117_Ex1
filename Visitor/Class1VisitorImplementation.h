#ifndef CLASS1
#define CLASS1
#include "Class1.h"
#endif

class Class1VisitorImplementation : public StudyCaseVisitorInterface
{
public:
	void visit(Class1 *class1) {
		int currentValue = class1->getValue();
		 cout<<"I will change the value from "<<currentValue;
		 class1->setValue(++currentValue);
		 cout<<" to "<<class1->getValue()<<endl;
	}
};