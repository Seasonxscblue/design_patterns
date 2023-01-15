#include "PositiveMineralFactory.h"

LowLevelMineralPtr PositiveMineralFactory::createLowLevel()
{
  return LowLevelMineralPtr{new Gold{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
}

MidLevelMineralPtr PositiveMineralFactory::createMidLevel()
{
  return MidLevelMineralPtr{new Diamond{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
}

HighLevelMineralPtr PositiveMineralFactory::createHighLevel()
{
  return HighLevelMineralPtr{new PigWithDiamond{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
}