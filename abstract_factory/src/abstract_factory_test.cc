#include "abstract_factory_interface.h"
#include "abstract_factory_negative_mineral_factory.h"
#include "abstract_factory_positive_mineral_factory.h"
#include <ctime>
#include <random>

const unsigned int DEFAULT_WIDTH{1024};
const unsigned int DEFAULT_HEIGHT{768};

using AbstractFactoryPtr =
    std::unique_ptr<abstract_factory::AbstractFactoryInterface>;

int main() {
  static auto e{std::default_random_engine{static_cast<unsigned int>(time(0))}};
  static auto x{std::uniform_int_distribution<unsigned int>{0, DEFAULT_WIDTH}};
  static auto y{std::uniform_int_distribution<unsigned int>{0, DEFAULT_HEIGHT}};

  AbstractFactoryPtr factory{
      std::make_unique<abstract_factory::PositiveMineralFactory>()};
  auto gold{factory->CreateLowLevel(x(e), y(e))};
  gold->Display();
  auto diamond{factory->CreateMidLevel(x(e), y(e))};
  diamond->Display();
  auto pigWithDiamond{factory->CreateHighLevel(x(e), y(e))};
  pigWithDiamond->Display();

  factory = std::make_unique<abstract_factory::NegativeMineralFactory>();
  auto sack = factory->CreateLowLevel(x(e), y(e));
  sack->Display();
  auto stone = factory->CreateMidLevel(x(e), y(e));
  stone->Display();
  auto bomb = factory->CreateHighLevel(x(e), y(e));
  bomb->Display();

  return 0;
}
