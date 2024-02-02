#pragma once
#include "CaffeineBeverage.h"
#include <string>

class Coffee : public CaffeineBeverage {
public:
  void Brew() override;

  void AddCondiments() override;

  bool CustomerWantsCondiments() override;

private:
  std::string GetUserInput();
};