#pragma once
#include "Strategy.h"

class Division : public Strategy
{
public:
  Division() = default;

  ~Division() = default;

  double Calculate(double a, double b) override
  {
    return a / b;
  }
};