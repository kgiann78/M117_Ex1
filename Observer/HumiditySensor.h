#ifndef NOTIFIER
#define NOTIFIER
#include "Notifier.h"
#endif
#include <iostream>
#include <string>

using namespace std;

class HumiditySensor : public PropertyChangeNotifier
{
public:
	HumiditySensor(int humidity, string sensorName);
	void PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument);
	void setHumidity(int humidity);
private:
	string sensorName;
	int humidity;
};