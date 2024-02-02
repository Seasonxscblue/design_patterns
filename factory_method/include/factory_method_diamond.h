#ifndef FACTORYMETHOD_DIAMOND_H_
#define FACTORYMETHOD_DIAMOND_H_

#include "factory_method_mineral.h"

namespace factory_method {

class Diamond : public Mineral {
 public:
  using Mineral::Mineral;
  ~Diamond() = default;
  void Display() override;
};

} // namespace factory_method

#endif // FACTORYMETHOD_DIAMOND_H_