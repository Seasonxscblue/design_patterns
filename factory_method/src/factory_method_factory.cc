#include "factory_method_diamond.h"
#include "factory_method_diamond_factory.h"
#include "factory_method_gold.h"
#include "factory_method_gold_factory.h"
#include "factory_method_stone.h"
#include "factory_method_stone_factory.h"

namespace factory_method {

MineralPtr StoneFactory::Create(uint32_t x, uint32_t y) {
  return std::make_unique<Stone>(x, y);
}

MineralPtr GoldFactory::Create(uint32_t x, uint32_t y) {
  return std::make_unique<Gold>(x, y);
}

MineralPtr DiamondFactory::Create(uint32_t x, uint32_t y) {
  return std::make_unique<Diamond>(x, y);
}

} // namespace factory_method