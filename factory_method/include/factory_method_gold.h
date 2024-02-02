#ifndef FACTORYMETHOD_GOLD_H_
#define FACTORYMETHOD_GOLD_H_

#include "factory_method_mineral.h"

namespace factory_method {

class Gold : public Mineral {
 public:
  using Mineral::Mineral;
  ~Gold() = default;
  void Display() override;
};

} // namespace factory_method

#endif // FACTORYMETHOD_GOLD_H_