#ifndef FACTORYMETHOD_STONE_H_
#define FACTORYMETHOD_STONE_H_

#include "factory_method_mineral.h"

namespace factory_method {

class Stone : public Mineral {
 public:
  using Mineral::Mineral;
  ~Stone() = default;
  void Display() override;
};

} // namespace factory_method

#endif // FACTORYMETHOD_STONE_H_