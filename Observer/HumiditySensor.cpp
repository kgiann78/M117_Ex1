#ifndef HUMIDITY_SENSOR_H
#define HUMIDITY_SENSOR_H
#include "HumiditySensor.h"
#endif

HumiditySensor::HumiditySensor(int humidity, string sensorName):PropertyChangeNotifier(sensorName) {
	this->sensorName = sensorName;
	this->humidity = humidity;
}

void HumiditySensor::PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument) {
	cout<<sensorName<<" is notified: "<<sender<<"'s Property named '"<<propertyEventArgument->getPropertyName()<<"' has changed to "<<propertyEventArgument->getValue()<<endl;
}

void HumiditySensor::setHumidity(int humidity) {
	if (this->humidity != humidity)
	{
		this->humidity = humidity;
		this->OnPropertyChanged(sensorName, new PropertyEventArgument("humidity", this->humidity));
	}
}