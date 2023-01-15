#include <ctime>
#include "Factory.h"
#include "StoneFactory.h"
#include "DiamondFactory.h"
#include "GoldFactory.h"

int main()
{
  srand(time(nullptr));

  FactoryPtr factory{new GoldFactory};
  factory->create()->show();

  factory.reset(new DiamondFactory);
  factory->create()->show();

  for (size_t i = 0; i < 5; ++i)
  {
    factory.reset(new StoneFactory);
    factory->create()->show();
  }

  return 0;
}