#pragma once
#include "Observer.h"
#include <vector>


class Subject
{
public:
	void Attach(ObserverPtr& observer);

	void Detach(ObserverPtr& observer);

protected:
	void NotifyAllObservers();

private:
	std::vector<ObserverPtr> observers_;
};
