#pragma once

#include "Mineral.h"

class Diamond : public Mineral
{
public:
    using Mineral::Mineral;

    ~Diamond() = default;

    void show() override
    {
        std::cout << "diamond in (" << x_ << ", " << y_ << ")" << std::endl;
    }
};