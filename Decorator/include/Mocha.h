#pragma once

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
    Mocha(BeveragePtr beverage)
    {
        this->beverage_ = beverage;
    }

    std::string Description() override
    {
        return this->beverage_->Description() + ", Mocha";
    }

    double Cost() override
    {
        return .20 + this->beverage_->Cost();
    }
};