#include "template_method_caffeine_beverage.h"
#include <fmt/printf.h>

namespace template_method {

void CaffeineBeverage::PrepareRecipe() {
  BoilWater();
  Brew();
  PourInCup();
  if (CustomerWantsCondiments()) {
    AddCondiments();
  }
}

void CaffeineBeverage::BoilWater() { fmt::println("Boiling water"); }

void CaffeineBeverage::PourInCup() { fmt::println("Pouring into cup"); }

bool CaffeineBeverage::CustomerWantsCondiments() { return true; }

} // namespace template_method