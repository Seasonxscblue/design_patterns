#include "template_method_coffee.h"

#include <iostream>
#include <print>

namespace template_method {

void Coffee::Brew() { std::println("Dripping coffee through filter\n"); }

void Coffee::AddCondiments() { std::println("Adding Sugar and Milk\n"); }

bool Coffee::CustomerWantsCondiments() {
  const char answer{GetUserInput()};
  if ('y' == answer || 'Y' == answer) {
    return true;
  }
  return false;
}

const char Coffee::GetUserInput() {
  std::println("Would you like milk and sugar with your coffee (y/n) ? ");
  char answer;
  std::cin >> answer;
  return answer;
}

}  // namespace template_method
