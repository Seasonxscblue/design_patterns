#include "strategy_addition.h"
#include "strategy_calculator.h"
#include "strategy_division.h"
#include "strategy_multiplication.h"
#include "strategy_subtraction.h"
#include <fmt/printf.h>

int main() {
  auto calculator{strategy::Calculator{}};

  calculator.set_strategy(std::make_unique<strategy::Addition>());
  fmt::println("{}", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Subtraction>());
  fmt::println("{}", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Multiplication>());
  fmt::println("{}", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Division>());
  fmt::println("{}", calculator.GetResult(5, 0));

  return 0;
}