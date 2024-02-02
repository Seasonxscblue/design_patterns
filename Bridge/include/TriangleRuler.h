#pragma once

#include "Ruler.h"
#include <memory>

class TriangleRuler : public Ruler
{
public:
    void Regularize() override
    {
        std::cout << "triangle" << std::endl;
    }
};