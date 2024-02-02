#include "factory_method_diamond.h"
#include "factory_method_gold.h"
#include "factory_method_stone.h"
#include <fmt/printf.h>

void factory_method::Stone::Display() {
  fmt::println("{:<7s} in ({:4d}, {:3d})", "stone", x_, y_);
}

void factory_method::Gold::Display() {
  fmt::println("{:<7s} in ({:4d}, {:3d})", "gold", x_, y_);
}

void factory_method::Diamond::Display() {
  fmt::println("{:<7s} in ({:4d}, {:3d})", "diamond", x_, y_);
}