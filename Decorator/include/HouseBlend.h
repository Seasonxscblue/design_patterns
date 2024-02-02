#pragma once

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        this->description_ = "House Blend Coffee";
    }

    double Cost() override
    {
        return .89;
    }
};