#ifndef STRATEGY_MULTIPLICATION_H_
#define STRATEGY_MULTIPLICATION_H_

#include "strategy_interface.h"

namespace strategy {

class Multiplication : public StrategyInterface {
 public:
  Multiplication() = default;
  ~Multiplication() = default;
  double Calculate(double a, double b) override;
};

}


#endif // STRATEGY_MULTIPLICATION_H_