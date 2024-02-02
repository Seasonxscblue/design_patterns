#ifndef ABSTARCTFACTORY_DIAMOND_H_
#define ABSTARCTFACTORY_DIAMOND_H_

#include "abstract_factory_mid_level_mineral.h"

namespace abstract_factory {

class Diamond : public MidLevelMineral {
 public:
  using MidLevelMineral::MidLevelMineral;
  ~Diamond() = default;
  void Display() override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_DIAMOND_H_