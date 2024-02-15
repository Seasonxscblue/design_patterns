#include "template_method_coffee.h"
#include <fmt/printf.h>
#include <iostream>

namespace template_method {

void Coffee::Brew() { fmt::println("Dripping coffee through filter"); }

void Coffee::AddCondiments() { fmt::println("Adding Sugar and Milk"); }

bool Coffee::CustomerWantsCondiments() {
  const char answer{GetUserInput()};
  if ('y' == answer || 'Y' == answer) {
    return true;
  }
  return false;
}

const char Coffee::GetUserInput() {
  fmt::print("Would you like milk and sugar with your coffee (y/n) ? ");
  char answer;
  std::cin >> answer;
  return answer;
}

} // namespace template_method
