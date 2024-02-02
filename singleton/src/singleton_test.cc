#include "singleton_sun.h"
#include <fmt/printf.h>

int main() {
  auto &s0{singleton::Sun::GetInstance()};
  auto &s1{singleton::Sun::GetInstance()};

  fmt::println("{:p}\n", static_cast<void *>(&s0));
  fmt::println("{:p}\n", static_cast<void *>(&s1));

  // singleton::Sun s2 = s1;

  return 0;
}
