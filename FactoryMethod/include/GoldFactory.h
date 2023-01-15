#pragma once

#include "Factory.h"
#include "Gold.h"

class GoldFactory : public Factory
{
public:
    ~GoldFactory() = default;

    MineralPtr create() override
    {
        return MineralPtr{new Gold{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
    }
};
