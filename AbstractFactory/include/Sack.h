#pragma once

#include <iostream>
#include "LowLevelMineral.h"

class Sack : public LowLevelMineral
{
public:
    using LowLevelMineral::LowLevelMineral;

    ~Sack() = default;

    void show() override
    {
        std::cout << "sack in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};