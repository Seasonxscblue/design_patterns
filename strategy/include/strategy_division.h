#ifndef STRATEGY_DIVISION_H_
#define STRATEGY_DIVISION_H_

#include "strategy_interface.h"

namespace strategy {

class Division : public StrategyInterface {
 public:
  Division() = default;
  ~Division() = default;
  double Calculate(double a, double b) override;
};

}


#endif // STRATEGY_DIVISION_H_