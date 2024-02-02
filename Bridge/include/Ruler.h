#pragma once

#include <iostream>
#include <memory>

class Ruler
{
public:
    virtual ~Ruler() = default;

    virtual void Regularize() = 0;
};

using RulerPtr = std::unique_ptr<Ruler>;