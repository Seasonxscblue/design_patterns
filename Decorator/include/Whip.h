#pragma once

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
    Whip(BeveragePtr beverage)
    {
        this->beverage_ = beverage;
    }

    std::string Description() override
    {
        return this->beverage_->Description() + ", Whip";
    }

    double Cost() override
    {
        return .15 + this->beverage_->Cost();
    }
};