#pragma once

#include "LowLevelMineral.h"
#include "MidLevelMineral.h"
#include "HighLevelMineral.h"

class AbstractFactory
{
public:
    virtual LowLevelMineralPtr createLowLevel() = 0;

    virtual MidLevelMineralPtr createMidLevel() = 0;

    virtual HighLevelMineralPtr createHighLevel() = 0;

    virtual ~AbstractFactory() = default;
};

using AbstractFactoryPtr = std::unique_ptr<AbstractFactory>;