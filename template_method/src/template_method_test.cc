#include "template_method_coffee.h"
#include "template_method_tea.h"
#include <fmt/printf.h>

int main() {
  template_method::Tea my_tea;
  template_method::Coffee my_coffee;

  fmt::println("Making tea ... ");
  my_tea.PrepareRecipe();

  fmt::println("\nMaking coffee ... ");
  my_coffee.PrepareRecipe();
  return 0;
}