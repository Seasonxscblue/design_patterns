#ifndef FACTORYMETHOD_STONEFACTORY_H_
#define FACTORYMETHOD_STONEFACTORY_H_

#include "factory_method_factory_interface.h"

namespace factory_method {

class StoneFactory : public FactoryInterface {
 public:
  ~StoneFactory() = default;
  MineralPtr Create(uint32_t x, uint32_t y) override;
};

} // namespace factory_method

#endif // FACTORYMETHOD_STONEFACTORY_H_