#ifndef FACTORYMETHOD_FACTORYINTERFACE_H_
#define FACTORYMETHOD_FACTORYINTERFACE_H_

#include "factory_method_mineral.h"

namespace factory_method {

class FactoryInterface {
 public:
  virtual ~FactoryInterface() = default;
  virtual MineralPtr Create(uint32_t x, uint32_t y) = 0;
};

using FactoryInterfacePtr = std::unique_ptr<FactoryInterface>;

}

#endif // FACTORYMETHOD_FACTORYINTERFACE_H_