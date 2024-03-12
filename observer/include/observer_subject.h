#ifndef OBSERVER_SUBJECT_H_
#define OBSERVER_SUBJECT_H_

#include "observer_interface.h"
#include <vector>

namespace observer {

class Subject {
 public:
  Subject() = default;
  virtual ~Subject() = default;
  void Attach(ObserverInterfacePtr &observer);
  void Detach(ObserverInterfacePtr &observer);

 protected:
  void NotifyAllObservers();

 private:
  std::vector<ObserverInterfacePtr> observers_;
};

} // namespace observer

#endif // OBSERVER_SUBJECT_H_