#ifndef STUDY_CASE_INT
#define STUDY_CASE_INT
#include "StudyCaseInterface.h"
#endif

class Class1 : public StudyCaseInterface
{
public:
	void access(class StudyCaseVisitorInterface *visitor);
};