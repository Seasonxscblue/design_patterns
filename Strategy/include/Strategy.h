#pragma once
#include <memory>

class Strategy
{
public:
  virtual ~Strategy() = default;

  virtual double Calculate(double a, double b) = 0;
};

using StrategyPtr = std::unique_ptr<Strategy>;