#include "singleton_sun.h"
#include <format>
#include <iostream>

int main() {
  auto &s0{singleton::Sun::GetInstance()};
  auto &s1{singleton::Sun::GetInstance()};

  std::cout << std::format("{:p}\n", static_cast<void *>(&s0));
  std::cout << std::format("{:p}\n", static_cast<void *>(&s1));

  // singleton::Sun s2 = s1;

  return 0;
}
