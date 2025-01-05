#include "abstract_factory_interface.h"
#include "abstract_factory_negative_mineral_factory.h"
#include "abstract_factory_positive_mineral_factory.h"
#include <random>

const unsigned int DEFAULT_WIDTH{1024};
const unsigned int DEFAULT_HEIGHT{768};

using AbstractFactoryPtr =
    std::unique_ptr<abstract_factory::AbstractFactoryInterface>;

int main() {
  auto rd{std::random_device{}};
  auto x{std::uniform_int_distribution<unsigned int>{0, DEFAULT_WIDTH - 1}};
  auto y{std::uniform_int_distribution<unsigned int>{0, DEFAULT_HEIGHT - 1}};

  AbstractFactoryPtr factory{
      std::make_unique<abstract_factory::PositiveMineralFactory>()};
  auto gold{factory->CreateLowLevel(x(rd), y(rd))};
  gold->Display();
  auto diamond{factory->CreateMidLevel(x(rd), y(rd))};
  diamond->Display();
  auto pigWithDiamond{factory->CreateHighLevel(x(rd), y(rd))};
  pigWithDiamond->Display();

  factory = std::make_unique<abstract_factory::NegativeMineralFactory>();
  auto sack = factory->CreateLowLevel(x(rd), y(rd));
  sack->Display();
  auto stone = factory->CreateMidLevel(x(rd), y(rd));
  stone->Display();
  auto bomb = factory->CreateHighLevel(x(rd), y(rd));
  bomb->Display();

  return 0;
}
