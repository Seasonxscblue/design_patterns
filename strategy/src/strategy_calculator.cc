#include "strategy_calculator.h"
#include "strategy_addition.h"
#include "strategy_division.h"
#include "strategy_multiplication.h"
#include "strategy_subtraction.h"

void strategy::Calculator::set_strategy(StrategyInterfacePtr strategy) {
  strategy_ = std::move(strategy);
}

double strategy::Calculator::GetResult(double a, double b) {
  return strategy_->Calculate(a, b);
}

double strategy::Addition::Calculate(double a, double b) {
  return a + b;
}

double strategy::Subtraction::Calculate(double a, double b) {
  return a - b;
}

double strategy::Multiplication::Calculate(double a, double b) {
  return a * b;
}

double strategy::Division::Calculate(double a, double b) {
  return a / b;
}