#include "Coffee.h"
#include "Tea.h"
#include <iostream>
#include <ostream>

int main() {
  Tea my_tea;
  Coffee my_coffee;

  std::cout << "Making tea ... " << std::endl;
  my_tea.PrepareRecipe();

  std::cout << std::endl << "Making coffee ... " << std::endl;
  my_coffee.PrepareRecipe();
  return 0;
}