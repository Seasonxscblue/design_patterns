#pragma once
#include "Strategy.h"

class Multiplication : public Strategy
{
public:
  Multiplication() = default;

  ~Multiplication() = default;

  double Calculate(double a, double b) override
  {
    return a * b;
  }
};