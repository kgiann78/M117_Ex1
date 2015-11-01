#ifndef STUDY_CASE_INT
#define STUDY_CASE_INT
#include "StudyCaseInterface.h"
#endif

class Class1 : public StudyCaseInterface
{
public:
	Class1();
	Class1(int value);
	void access(StudyCaseVisitorInterface *visitor);
	void setValue(int value);
	int getValue();	
private:
	int value;
};