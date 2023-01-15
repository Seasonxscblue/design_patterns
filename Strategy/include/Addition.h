#pragma once
#include "Strategy.h"

class Addition : public Strategy
{
public:
  Addition() = default;

  ~Addition() = default;

  double Calculate(double a, double b) override
  {
    return a + b;
  }
};