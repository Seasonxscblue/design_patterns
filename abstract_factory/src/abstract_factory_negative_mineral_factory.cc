#include "abstract_factory_negative_mineral_factory.h"
#include "abstract_factory_bomb.h"
#include "abstract_factory_sack.h"
#include "abstract_factory_stone.h"
#include <fmt/printf.h>
#include <memory>

namespace abstract_factory {

LowLevelMineralPtr NegativeMineralFactory::CreateLowLevel(uint32_t x,
                                                          uint32_t y) {
  return std::make_unique<Sack>(x, y);
}

MidLevelMineralPtr NegativeMineralFactory::CreateMidLevel(uint32_t x,
                                                          uint32_t y) {
  return std::make_unique<Stone>(x, y);
}

HighLevelMineralPtr NegativeMineralFactory::CreateHighLevel(uint32_t x,
                                                            uint32_t y) {
  return std::make_unique<Bomb>(x, y);
}

void Sack::Display() {
  fmt::println("{:<16s} in ({:4d}, {:3d})", "sack", x_, y_);
}

void Stone::Display() {
  fmt::println("{:<16s} in ({:4d}, {:3d})", "stone", x_, y_);
}

void Bomb::Display() {
  fmt::println("{:<16s} in ({:4d}, {:3d})", "bomb", x_, y_);
}

} // namespace abstract_factory
