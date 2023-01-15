#pragma once

#include "Mineral.h"

class HighLevelMineral : public Mineral
{
public:
    using Mineral::Mineral;

    virtual ~HighLevelMineral() = default;
};

using HighLevelMineralPtr = std::unique_ptr<HighLevelMineral>;