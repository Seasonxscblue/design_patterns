#pragma once

#include "Mineral.h"

class MidLevelMineral : public Mineral
{
public:
    using Mineral::Mineral;

    virtual ~MidLevelMineral() = default;
};

using MidLevelMineralPtr = std::unique_ptr<MidLevelMineral>;