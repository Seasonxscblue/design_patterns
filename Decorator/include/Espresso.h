#pragma once

#include "Beverage.h"

class Espresso : public Beverage
{
public:
    Espresso()
    {
        this->description_ = "Espresso";
    }

    double Cost() override
    {
        return 1.99;
    }
};