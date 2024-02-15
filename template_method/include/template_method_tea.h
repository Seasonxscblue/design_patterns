#ifndef TEMPLATE_METHOD_TEA_H_
#define TEMPLATE_METHOD_TEA_H_

#include "template_method_caffeine_beverage.h"

namespace template_method {

class Tea : public CaffeineBeverage {
 public:
  void Brew() override;
  void AddCondiments() override;
  bool CustomerWantsCondiments() override;

 private:
  const char GetUserInput();
};

} // namespace template_method

#endif // TEMPLATE_METHOD_TEA_H_