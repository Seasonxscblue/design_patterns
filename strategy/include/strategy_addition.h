#ifndef STRATEGY_ADDITION_H_
#define STRATEGY_ADDITION_H_

#include "strategy_interface.h"

namespace strategy {

class Addition : public StrategyInterface {
 public:
  Addition() = default;
  ~Addition() = default;
  double Calculate(double a, double b) override;
};

}  // namespace strategy

#endif  // STRATEGY_ADDITION_H_