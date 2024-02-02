#pragma once

#include "Pen.h"

class BlackPen : public Pen
{
public:
    using Pen::Pen;

    void Draw() override
    {
        std::cout << "Black ";
        ruler_->Regularize();
    }
};