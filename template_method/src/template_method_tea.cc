#include "template_method_tea.h"

#include <iostream>
#include <print>

namespace template_method {

void Tea::Brew() { std::println("Stepping the tea\n"); }

void Tea::AddCondiments() { std::println("Adding Lemon\n"); }

bool Tea::CustomerWantsCondiments() {
  const char answer{GetUserInput()};
  if ('y' == answer || 'Y' == answer) {
    return true;
  }
  return false;
}

const char Tea::GetUserInput() {
  std::println("Would you like lemon with your tea (y/n) ? ");
  char answer;
  std::cin >> answer;
  return answer;
}

}  // namespace template_method