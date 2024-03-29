#include "abstract_factory_positive_mineral_factory.h"
#include "abstract_factory_diamond.h"
#include "abstract_factory_gold.h"
#include "abstract_factory_pig_with_diamond.h"
#include <format>
#include <iostream>
#include <memory>

namespace abstract_factory {

LowLevelMineralPtr PositiveMineralFactory::CreateLowLevel(uint32_t x,
                                                          uint32_t y) {
  return std::make_unique<Gold>(x, y);
}

MidLevelMineralPtr PositiveMineralFactory::CreateMidLevel(uint32_t x,
                                                          uint32_t y) {
  return std::make_unique<Diamond>(x, y);
}

HighLevelMineralPtr PositiveMineralFactory::CreateHighLevel(uint32_t x,
                                                            uint32_t y) {
  return std::make_unique<PigWithDiamond>(x, y);
}

void Gold::Display() {
  std::cout << std::format("{:<16s} in ({:4d}, {:3d})\n", "gold", x_, y_);
}

void Diamond::Display() {
  std::cout << std::format("{:<16s} in ({:4d}, {:3d})\n", "diamond", x_, y_);
}

void PigWithDiamond::Display() {
  std::cout << std::format("{:<16s} in ({:4d}, {:3d})\n", "pig with diamond",
                           x_, y_);
}

} // namespace abstract_factory
