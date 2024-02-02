#ifndef STRATEGT_STRATEGYINTERFACE_H_
#define STRATEGT_STRATEGYINTERFACE_H_

#include <memory>

namespace strategy {

class StrategyInterface {
 public:
  virtual ~StrategyInterface() = default;
  virtual double Calculate(double a, double b) = 0;
};

using StrategyInterfacePtr = std::unique_ptr<StrategyInterface>;
}

#endif // STRATEGT_STRATEGYINTERFACE_H_