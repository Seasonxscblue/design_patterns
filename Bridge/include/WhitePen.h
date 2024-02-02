#pragma once

#include "Pen.h"
#include <iostream>

class WhitePen : public Pen
{
public:
    using Pen::Pen;

    void Draw() override
    {
        std::cout << "White ";
        ruler_->Regularize();
    }
};