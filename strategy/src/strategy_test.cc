#include "strategy_addition.h"
#include "strategy_calculator.h"
#include "strategy_division.h"
#include "strategy_multiplication.h"
#include "strategy_subtraction.h"
#include <format>
#include <iostream>

int main() {
  auto calculator{strategy::Calculator{}};

  calculator.set_strategy(std::make_unique<strategy::Addition>());
  std::cout << std::format("{}\n", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Subtraction>());
  std::cout << std::format("{}\n", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Multiplication>());
  std::cout << std::format("{}\n", calculator.GetResult(5, 0));

  calculator.set_strategy(std::make_unique<strategy::Division>());
  std::cout << std::format("{}\n", calculator.GetResult(5, 0));

  return 0;
}