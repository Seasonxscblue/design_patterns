#pragma once

#include <iostream>
#include <memory>

class Mineral
{
public:
    Mineral(unsigned int x = 0, unsigned int y = 0) : x_{x}, y_{y} {}

    virtual ~Mineral() = default;

    virtual void show() = 0;

protected:
    unsigned int x_;
    unsigned int y_;
};

using MineralPtr = std::unique_ptr<Mineral>;