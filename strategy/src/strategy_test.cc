#include <print>

#include "strategy_addition.h"
#include "strategy_calculator.h"
#include "strategy_division.h"
#include "strategy_multiplication.h"
#include "strategy_subtraction.h"

int main() {
  auto calculator{strategy::Calculator{}};

  calculator.set_strategy(std::make_unique<strategy::Addition>());
  std::println("{}", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Subtraction>());
  std::println("{}", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Multiplication>());
  std::println("{}", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Division>());
  std::println("{}", calculator.GetResult(5, 0));

  return 0;
}