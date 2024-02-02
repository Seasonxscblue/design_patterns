#pragma once

#include "Ruler.h"
#include <iostream>

class CircleRuler : public Ruler
{
public:
    void Regularize() override
    {
        std::cout << "circle" << std::endl;
    }
};