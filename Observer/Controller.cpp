#ifndef NOTIFIER
#define NOTIFIER
#include "Notifier.h"
#include "HumiditySensor.h"
#endif
#include <iostream>
#include <string>

using namespace std;

class WaterController : public PropertyChangeNotifier
{
public:
	WaterController(string controllerName);
	void PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument);
private:
	string controllerName;
	bool waterValveOn;
};

WaterController::WaterController(string controllerName):PropertyChangeNotifier(controllerName) {
	this->controllerName = controllerName;
	this->waterValveOn = false;
}

void WaterController::PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument) {
	if (sender == "bigognaHumSensor" 
		&& propertyEventArgument->getPropertyName() == "humidity")
	{
		if (propertyEventArgument->getValue() < 5) {
			if (!this-> waterValveOn)
			{
				cout<<"Turn on water valve"<<endl;
				this-> waterValveOn = true;
			}
		}
		else {
			if (this-> waterValveOn) {
				cout<<"Turn off water valve"<<endl;
				this-> waterValveOn = false;
			}
		}
	}
}

class ShadeController : public PropertyChangeNotifier
{
public:
	ShadeController(string controllerName);
	void PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument);
private:	
	string controllerName;
	bool shadesOn;
};


ShadeController::ShadeController(string controllerName):PropertyChangeNotifier(controllerName) {
	this->controllerName = controllerName;
	this->shadesOn = false;	
}

void ShadeController::PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument) {
	if (sender == "bigognaHumSensor" 
		&& propertyEventArgument->getPropertyName() == "humidity")
	{
		if (propertyEventArgument->getValue() < 5) {
			if (!this-> shadesOn)
			{
				cout<<"Turn shades on"<<endl;
				this-> shadesOn = true;
			}
		}
		else {
			if (this-> shadesOn) {
				cout<<"Turn shades off"<<endl;
				this-> shadesOn = false;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	HumiditySensor *bigognaHumSensor = new HumiditySensor(5, "bigognaHumSensor");
	WaterController *waterController = new WaterController("waterController");
	ShadeController *shadeController = new ShadeController("shadeController");

	cout<<"Subscribing WaterController and shadeController to bigognaHumSensor's PropertyChanged event"<<endl;

	bigognaHumSensor->GetNotifier()->subscribe(waterController);
	bigognaHumSensor->GetNotifier()->subscribe(shadeController);

	for (int i = 0; i < 10; ++i)
	{
		cout<<"Humidity in humidity sensor is "<<i<<endl;
		bigognaHumSensor->setHumidity(i);
	}

	return 0;
}

