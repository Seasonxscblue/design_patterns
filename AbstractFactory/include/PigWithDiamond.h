#pragma once

#include <iostream>
#include "HighLevelMineral.h"

class PigWithDiamond : public HighLevelMineral
{
public:
    using HighLevelMineral::HighLevelMineral;

    ~PigWithDiamond() = default;

    void show() override
    {
        std::cout << "pig with diamond in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};