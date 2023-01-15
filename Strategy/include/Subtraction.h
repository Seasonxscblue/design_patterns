#pragma once
#include "Strategy.h"

class Subtraction : public Strategy
{
public:
  Subtraction() = default;

  ~Subtraction() = default;

  double Calculate(double a, double b) override
  {
    return a - b;
  }
};