#include "NegativeMineralFactory.h"

LowLevelMineralPtr NegativeMineralFactory::createLowLevel()
{
  return LowLevelMineralPtr{new Sack{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
}

MidLevelMineralPtr NegativeMineralFactory::createMidLevel()
{
  return MidLevelMineralPtr{new Stone{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
}

HighLevelMineralPtr NegativeMineralFactory::createHighLevel()
{
  return HighLevelMineralPtr{new Bomb{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
}