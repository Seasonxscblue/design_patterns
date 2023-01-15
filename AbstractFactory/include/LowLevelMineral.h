#pragma once

#include "Mineral.h"

class LowLevelMineral : public Mineral
{
public:
    using Mineral::Mineral;

    virtual ~LowLevelMineral() = default;
};

using LowLevelMineralPtr = std::unique_ptr<LowLevelMineral>;