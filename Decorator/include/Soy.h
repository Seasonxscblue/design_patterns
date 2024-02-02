#pragma once

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    Soy(BeveragePtr beverage)
    {
        this->beverage_ = beverage;
    }

    std::string Description() override
    {
        return this->beverage_->Description() + ", Soy";
    }

    double Cost() override
    {
        return .15 + this->beverage_->Cost();
    }
};