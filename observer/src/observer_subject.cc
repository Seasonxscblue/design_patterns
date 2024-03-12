#include "observer_subject.h"
#include <algorithm>

namespace observer {

void Subject::Attach(ObserverInterfacePtr &observer) {
  auto is_identical = [&observer](const ObserverInterfacePtr &o) -> bool {
    return o.get() == observer.get();
  };
  auto it = std::find_if(observers_.begin(), observers_.end(), is_identical);
  if (observers_.end() == it) {
    observers_.push_back(observer);
  }
}

void Subject::Detach(ObserverInterfacePtr &observer) {
  auto is_identical = [&observer](const ObserverInterfacePtr &o) -> bool {
    return o.get() == observer.get();
  };
  auto it = std::remove_if(observers_.begin(), observers_.end(), is_identical);
  observers_.erase(it, observers_.end());
}

void Subject::NotifyAllObservers() {
  for (const auto &observer : observers_) {
    observer->Update();
  }
}

} // namespace observer