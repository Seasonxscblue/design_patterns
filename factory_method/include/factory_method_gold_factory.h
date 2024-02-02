#ifndef FACTORYMETHOD_GOLDFACTORY_H_
#define FACTORYMETHOD_GOLDFACTORY_H_

#include "factory_method_factory_interface.h"

namespace factory_method {

class GoldFactory : public FactoryInterface {
 public:
  ~GoldFactory() = default;
  MineralPtr Create(uint32_t x, uint32_t y) override;
};

} // namespace factory_method

#endif // FACTORYMETHOD_GOLDFACTORY_H_