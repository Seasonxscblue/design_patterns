#include "CaffeineBeverage.h"
#include <iostream>

void CaffeineBeverage::PrepareRecipe() {
  BoilWater();
  Brew();
  PourInCup();
  if (CustomerWantsCondiments()) {
    AddCondiments();
  }
}

void CaffeineBeverage::BoilWater() {
  std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::PourInCup() {
  std::cout << "Pouring into cup" << std::endl;
}

bool CaffeineBeverage::CustomerWantsCondiments() { return true; }