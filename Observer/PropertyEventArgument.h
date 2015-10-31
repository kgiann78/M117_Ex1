#include <string>

using namespace std;

class PropertyEventArgument
{
public:
	PropertyEventArgument(string propertyName, int value) {
		this->propertyName = propertyName;
		this->value = value;
	}
	
	string getPropertyName() {
		return this->propertyName;
	}

	int getValue() {
		return this->value;
	}
private:
	string propertyName;
	int value;
};