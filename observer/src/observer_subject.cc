#include "observer_subject.h"
#include <algorithm>

void observer::Subject::Attach(ObserverInterfacePtr &observer) {
  auto it = std::find_if(observers_.begin(), observers_.end(),
                         [&observer](const ObserverInterfacePtr &o) -> bool {
                             return o->Id() == observer->Id();
                         });
  if (observers_.end() == it) {
    observers_.push_back(observer);
  }
}

void observer::Subject::Detach(ObserverInterfacePtr &observer) {
  auto it = std::remove_if(observers_.begin(), observers_.end(),
                           [&observer](const ObserverInterfacePtr &o) -> bool {
                               return o->Id() == observer->Id();
                           });
  observers_.erase(it, observers_.end());
}

void observer::Subject::NotifyAllObservers() {
  for (const auto &observer: observers_) {
    observer->Update();
  }
}
