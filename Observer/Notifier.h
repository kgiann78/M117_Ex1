#ifndef PROPERTY_EVENT_ARG
#define PROPERTY_EVENT_ARG
#include "PropertyEventArgument.h"
#endif

#include <list>
using namespace std;

class Notifier
{
private:    
    list<class PropertyChangeNotifier *> propertyChangeNotifiers;
    string sender;
public:
	Notifier(string sender);

	void subscribe(PropertyChangeNotifier *propertyChangeNotifier);

	void OnPropertyChanged(string sender, PropertyEventArgument *propertyEventArgument);
};

class PropertyChangeNotifier
{
public:	
	PropertyChangeNotifier(string name);
	Notifier *GetNotifier();
	void OnPropertyChanged(string sender, PropertyEventArgument *propertyEventArgument);
	virtual void PropertyChanged(string sender, PropertyEventArgument *propertyEventArgument) = 0;
private:
	Notifier *notifier;
};