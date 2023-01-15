#pragma once

#include <iostream>
#include "MidLevelMineral.h"

class Stone : public MidLevelMineral
{
public:
    using MidLevelMineral::MidLevelMineral;

    ~Stone() = default;

    void show() override
    {
        std::cout << "stone in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};