#ifndef OBSERVER_OBSERVERINTERFACE_H_
#define OBSERVER_OBSERVERINTERFACE_H_

#include <memory>

namespace observer {

enum class ViewElement {
  kTableView,
  kBarChartView,
  kPieChartView,
};

class ObserverInterface {
 public:
  virtual ~ObserverInterface() = default;
  virtual ViewElement Id() = 0;
  virtual void Update() = 0;
};

using ObserverInterfacePtr = std::shared_ptr<ObserverInterface>;

}

#endif // OBSERVER_OBSERVERINTERFACE_H_