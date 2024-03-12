#include "template_method_coffee.h"
#include <format>
#include <iostream>

namespace template_method {

void Coffee::Brew() {
  std::cout << std::format("Dripping coffee through filter\n");
}

void Coffee::AddCondiments() {
  std::cout << std::format("Adding Sugar and Milk\n");
}

bool Coffee::CustomerWantsCondiments() {
  const char answer{GetUserInput()};
  if ('y' == answer || 'Y' == answer) {
    return true;
  }
  return false;
}

const char Coffee::GetUserInput() {
  std::cout << std::format(
      "Would you like milk and sugar with your coffee (y/n) ? ");
  char answer;
  std::cin >> answer;
  return answer;
}

} // namespace template_method
