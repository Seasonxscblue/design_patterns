#pragma once

#include "AbstractFactory.h"
#include "Gold.h"
#include "Diamond.h"
#include "PigWithDiamond.h"

class PositiveMineralFactory : public AbstractFactory
{
public:
    PositiveMineralFactory() = default;

    ~PositiveMineralFactory() = default;

    LowLevelMineralPtr createLowLevel() override;

    MidLevelMineralPtr createMidLevel() override;

    HighLevelMineralPtr createHighLevel() override;
};