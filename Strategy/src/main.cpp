#include <iostream>
#include "Calculator.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"

int main()
{
  Calculator calculator;

  calculator.set_strategy(StrategyPtr{new Addition});
  std::cout << calculator.get_result(5, 0) << std::endl;

  calculator.set_strategy(StrategyPtr{new Subtraction});
  std::cout << calculator.get_result(5, 0) << std::endl;

  calculator.set_strategy(StrategyPtr{new Multiplication});
  std::cout << calculator.get_result(5, 0) << std::endl;

  calculator.set_strategy(StrategyPtr{new Division});
  std::cout << calculator.get_result(5, 0) << std::endl;

  return 0;
}