#pragma once

#include "Factory.h"
#include "Diamond.h"

class DiamondFactory : public Factory
{
public:
    ~DiamondFactory() = default;

    MineralPtr create() override
    {
        return MineralPtr{new Diamond{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
    }
};