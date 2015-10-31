#include <iostream>
#include <string>
using namespace std;

#include "Class1VisitorImplementation.h"


int main(int argc, char const *argv[])
{
	Class1 *hahaClass = new Class1();

	hahaClass->access(new Class1VisitorImplementation());
	return 0;
}