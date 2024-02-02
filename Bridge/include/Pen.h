#pragma once

#include "Ruler.h"

class Pen
{
public:
    Pen(RulerPtr ruler)
    {
        ruler_ = std::move(ruler);
    }

    virtual ~Pen() = default;

    virtual void Draw() = 0;

protected:
    RulerPtr ruler_;
};