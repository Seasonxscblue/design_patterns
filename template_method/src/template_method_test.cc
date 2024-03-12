#include "template_method_coffee.h"
#include "template_method_tea.h"
#include <format>
#include <iostream>

int main() {
  template_method::Tea my_tea;
  template_method::Coffee my_coffee;

  std::cout << std::format("Making tea ... \n");
  my_tea.PrepareRecipe();

  std::cout << std::format("\nMaking coffee ... \n");
  my_coffee.PrepareRecipe();
  return 0;
}