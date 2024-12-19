#include "template_method_coffee.h"
#include "template_method_tea.h"
#include <print>

int main() {
  template_method::Tea my_tea;
  template_method::Coffee my_coffee;

  std::println("Making tea ...");
  my_tea.PrepareRecipe();

  std::println("\nMaking coffee ...");
  my_coffee.PrepareRecipe();
  return 0;
}