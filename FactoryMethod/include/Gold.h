#pragma once

#include "Mineral.h"

class Gold : public Mineral
{
public:
    using Mineral::Mineral;

    ~Gold() = default;

    void show() override
    {
        std::cout << "gold in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};