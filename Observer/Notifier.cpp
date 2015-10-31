#ifndef NOTIFIER_H
#define NOTIFIER_H
#include "Notifier.h"
#endif

#include <iostream>
#include <string>

using namespace std;

Notifier::Notifier(string sender) {
	this->sender = sender;
}

void Notifier::subscribe(PropertyChangeNotifier *propertyChangeNotifier) {
    propertyChangeNotifiers.push_back(propertyChangeNotifier);
}

void Notifier::OnPropertyChanged(string sender, PropertyEventArgument *propertyEventArgument) {
	for (list<PropertyChangeNotifier *>::iterator it = propertyChangeNotifiers.begin(); it != propertyChangeNotifiers.end(); ++it) {
		(*it)->PropertyChanged(sender, propertyEventArgument);
	}
}

PropertyChangeNotifier::PropertyChangeNotifier(string name) {
	this->notifier = new Notifier(name);
}

Notifier *PropertyChangeNotifier::GetNotifier() {
	return this->notifier;
}

void PropertyChangeNotifier::OnPropertyChanged(string sender, PropertyEventArgument *propertyEventArgument) {
	this->notifier->OnPropertyChanged(sender, propertyEventArgument);
}






