#ifndef OBSERVER_OBSERVER_INTERFACE_H_
#define OBSERVER_OBSERVER_INTERFACE_H_

#include <memory>

namespace observer {

class ObserverInterface {
 public:
  virtual ~ObserverInterface() = default;
  virtual void Update() = 0;
};

using ObserverInterfacePtr = std::shared_ptr<ObserverInterface>;

} // namespace observer

#endif // OBSERVER_OBSERVERINTERFACE_H_