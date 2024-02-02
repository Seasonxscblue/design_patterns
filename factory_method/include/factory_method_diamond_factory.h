#ifndef FACTORYMETHOD_DIAMONDFACTORY_H_
#define FACTORYMETHOD_DIAMONDFACTORY_H_

#include "factory_method_factory_interface.h"

namespace factory_method {

class DiamondFactory : public FactoryInterface {
 public:
  ~DiamondFactory() = default;
  MineralPtr Create(uint32_t x, uint32_t y) override;
};

} // namespace factory_method

#endif // FACTORYMETHOD_DIAMONDFACTORY_H_