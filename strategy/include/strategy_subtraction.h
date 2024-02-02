#ifndef STRATEGY_SUBTRACTION_H_
#define STRATEGY_SUBTRACTION_H_

#include "strategy_interface.h"

namespace strategy {

class Subtraction : public StrategyInterface {
 public:
  Subtraction() = default;
  ~Subtraction() = default;
  double Calculate(double a, double b) override;
};

}

#endif // STRATEGY_SUBTRACTION_H_