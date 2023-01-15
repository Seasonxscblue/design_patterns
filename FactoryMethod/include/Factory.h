#pragma once

#include "Mineral.h"

const unsigned int DEFAULT_WIDTH = 1024;
const unsigned int DEFAULT_HEIGHT = 768;

class Factory
{
public:
    virtual ~Factory() = default;

    virtual MineralPtr create() = 0;
};

using FactoryPtr = std::unique_ptr<Factory>;