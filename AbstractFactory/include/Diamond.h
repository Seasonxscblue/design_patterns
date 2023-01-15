#pragma once

#include <iostream>
#include "MidLevelMineral.h"

class Diamond : public MidLevelMineral
{
public:
    using MidLevelMineral::MidLevelMineral;

    ~Diamond() = default;

    void show() override
    {
        std::cout << "diamond in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};