#pragma once

#include "Strategy.h"

class Calculator
{
public:
  Calculator() = default;

  ~Calculator() = default;

  void set_strategy(StrategyPtr strategy)
  {
    strategy_.reset(strategy.release());
  }

  double get_result(double a, double b)
  {
    return strategy_->Calculate(a, b);
  }

private:
  StrategyPtr strategy_;
};