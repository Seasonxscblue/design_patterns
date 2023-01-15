#pragma once

#include <iostream>
#include "LowLevelMineral.h"

class Gold : public LowLevelMineral
{
public:
    using LowLevelMineral::LowLevelMineral;

    ~Gold() = default;

    void show() override
    {
        std::cout << "gold in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};