#include <algorithm>
#include "Subject.h"

void Subject::Attach(ObserverPtr &observer)
{
	auto iter = std::find_if(
			begin(observers_),
			end(observers_),
			[&observer](const ObserverPtr &o) -> bool
			{ return o->Id() == observer->Id(); });
	if (iter == end(observers_))
	{
		observers_.push_back(observer);
	}
}

void Subject::Detach(ObserverPtr &observer)
{
	observers_.erase(
			std::remove_if(
					begin(observers_),
					end(observers_),
					[&observer](const ObserverPtr &o) -> bool
					{ return o->Id() == observer->Id(); }),
			end(observers_));
}

void Subject::NotifyAllObservers()
{
	for (const auto &observer : observers_)
	{
		observer->Update();
	}
}
