#include "template_method_caffeine_beverage.h"

#include <print>

namespace template_method {

void CaffeineBeverage::PrepareRecipe() {
  BoilWater();
  Brew();
  PourInCup();
  if (CustomerWantsCondiments()) {
    AddCondiments();
  }
}

void CaffeineBeverage::BoilWater() { std::println("Boiling water\n"); }

void CaffeineBeverage::PourInCup() { std::println("Pouring into cup\n"); }

bool CaffeineBeverage::CustomerWantsCondiments() { return true; }

}  // namespace template_method