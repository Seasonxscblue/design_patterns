#pragma once

#include "Mineral.h"

class Stone : public Mineral
{
public:
    using Mineral::Mineral;

    ~Stone() = default;

    void show() override
    {
        std::cout << "stone in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};