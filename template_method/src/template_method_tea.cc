#include "template_method_tea.h"
#include <format>
#include <iostream>

namespace template_method {

void Tea::Brew() { std::cout << std::format("Stepping the tea\n"); }

void Tea::AddCondiments() { std::cout << std::format("Adding Lemon\n"); }

bool Tea::CustomerWantsCondiments() {
  const char answer{GetUserInput()};
  if ('y' == answer || 'Y' == answer) {
    return true;
  }
  return false;
}

const char Tea::GetUserInput() {
  std::cout << std::format("Would you like lemon with your tea (y/n) ? ");
  char answer;
  std::cin >> answer;
  return answer;
}

} // namespace template_method