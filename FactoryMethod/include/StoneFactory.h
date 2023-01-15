#pragma once

#include "Factory.h"
#include "Stone.h"

class StoneFactory : public Factory
{
public:
    ~StoneFactory() = default;

    MineralPtr create() override
    {
        return MineralPtr{new Stone{rand() % DEFAULT_WIDTH, rand() % DEFAULT_HEIGHT}};
    }
};