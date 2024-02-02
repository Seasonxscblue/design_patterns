#pragma once

class CaffeineBeverage {
public:
  virtual void PrepareRecipe() final;

  virtual void Brew() = 0;

  virtual void AddCondiments() = 0;

  void BoilWater();

  void PourInCup();

  virtual bool CustomerWantsCondiments();
};