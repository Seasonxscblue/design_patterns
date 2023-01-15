#pragma once

#include <iostream>
#include "HighLevelMineral.h"

class Bomb : public HighLevelMineral
{
public:
    using HighLevelMineral::HighLevelMineral;

    ~Bomb() = default;

    void show() override
    {
        std::cout << "bomb in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};