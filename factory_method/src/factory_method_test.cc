#include "factory_method_diamond_factory.h"
#include "factory_method_factory_interface.h"
#include "factory_method_gold_factory.h"
#include "factory_method_stone_factory.h"
#include <ctime>
#include <random>

constexpr uint32_t DEFAULT_WIDTH = 1024;
constexpr uint32_t DEFAULT_HEIGHT = 768;

int main() {
  static auto e{std::default_random_engine{static_cast<uint32_t>(time(0))}};
  static auto x{std::uniform_int_distribution<uint32_t>{0, DEFAULT_WIDTH}};
  static auto y{std::uniform_int_distribution<uint32_t>{0, DEFAULT_HEIGHT}};

  factory_method::FactoryInterfacePtr factory;
  factory = std::make_unique<factory_method::GoldFactory>();
  factory->Create(x(e), y(e))->Display();

  factory = std::make_unique<factory_method::DiamondFactory>();
  factory->Create(x(e), y(e))->Display();

  for (size_t i = 0; i < 5; ++i) {
    factory = std::make_unique<factory_method::StoneFactory>();
    factory->Create(x(e), y(e))->Display();
  }

  return 0;
}