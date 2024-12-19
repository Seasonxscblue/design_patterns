#ifndef STRATEGY_CALCULATOR_H_
#define STRATEGY_CALCULATOR_H_

#include "strategy_interface.h"

namespace strategy {

class Calculator {
 public:
  Calculator() = default;
  ~Calculator() = default;
  void set_strategy(StrategyInterfacePtr strategy);
  double GetResult(double a, double b);

 private:
  StrategyInterfacePtr strategy_;
};

}  // namespace strategy

#endif  // STRATEGY_CALCULATOR_H_