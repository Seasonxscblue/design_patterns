#pragma once

#include "AbstractFactory.h"
#include "Sack.h"
#include "Stone.h"
#include "Bomb.h"

class NegativeMineralFactory : public AbstractFactory
{
public:
    NegativeMineralFactory() = default;

    ~NegativeMineralFactory() = default;

    LowLevelMineralPtr createLowLevel() override;

    MidLevelMineralPtr createMidLevel() override;

    HighLevelMineralPtr createHighLevel() override;
};