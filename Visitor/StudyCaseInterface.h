#ifndef STUDY_CASE_VIS_INT
#define STUDY_CASE_VIS_INT
#include "StudyCaseVisitorInterface.h"
#endif
class StudyCaseInterface
{
public:
	virtual void access(StudyCaseVisitorInterface *visitorInterface) = 0;
};