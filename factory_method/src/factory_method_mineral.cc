#include "factory_method_diamond.h"
#include "factory_method_gold.h"
#include "factory_method_stone.h"
#include <format>
#include <iostream>

void factory_method::Stone::Display() {
  std::cout << std::format("{:<7s} in ({:4d}, {:3d})\n", "stone", x_, y_);
}

void factory_method::Gold::Display() {
  std::cout << std::format("{:<7s} in ({:4d}, {:3d})\n", "gold", x_, y_);
}

void factory_method::Diamond::Display() {
  std::cout << std::format("{:<7s} in ({:4d}, {:3d})\n", "diamond", x_, y_);
}