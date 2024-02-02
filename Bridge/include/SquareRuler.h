#pragma once

#include "Ruler.h"
#include <memory>

class SquareRuler : public Ruler
{
public:
    void Regularize() override
    {
        std::cout << "square" << std::endl;
    }
};