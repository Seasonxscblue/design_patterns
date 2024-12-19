#include <print>
#include <iostream>

#include "singleton_sun.h"

int main() {
  auto &s0{singleton::Sun::GetInstance()};
  auto &s1{singleton::Sun::GetInstance()};

  std::println("{:p}", static_cast<void *>(&s0));
  std::println("{:p}", static_cast<void *>(&s1));

  // singleton::Sun s2 = s1;

  return 0;
}
