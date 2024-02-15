#include "template_method_tea.h"
#include <fmt/printf.h>
#include <iostream>

namespace template_method {

void Tea::Brew() { fmt::println("Stepping the tea"); }

void Tea::AddCondiments() { fmt::println("Adding Lemon"); }

bool Tea::CustomerWantsCondiments() {
  const char answer{GetUserInput()};
  if ('y' == answer || 'Y' == answer) {
    return true;
  }
  return false;
}

const char Tea::GetUserInput() {
  fmt::print("Would you like lemon with your tea (y/n) ? ");
  char answer;
  std::cin >> answer;
  return answer;
}

} // namespace template_method