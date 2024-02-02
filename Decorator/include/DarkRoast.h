#pragma once

#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        this->description_ = "DarkRoast";
    }

    double Cost() override
    {
        return .99;
    }
};