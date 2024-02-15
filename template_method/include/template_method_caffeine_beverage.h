#ifndef TEMPLATE_METHOD_CAFFEINE_BEVERAGE_H_
#define TEMPLATE_METHOD_CAFFEINE_BEVERAGE_H_

namespace template_method {

class CaffeineBeverage {
 public:
  virtual void PrepareRecipe() final;
  virtual void Brew() = 0;
  virtual void AddCondiments() = 0;
  void BoilWater();
  void PourInCup();
  virtual bool CustomerWantsCondiments();
};

} // namespace template_method

#endif // TEMPLATE_METHOD_CAFFEINE_BEVERAGE_H_