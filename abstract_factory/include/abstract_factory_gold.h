#ifndef ABSTARCTFACTORY_GOLD_H_
#define ABSTARCTFACTORY_GOLD_H_

#include "abstract_factory_low_level_mineral.h"

namespace abstract_factory {

class Gold : public LowLevelMineral {
 public:
  using LowLevelMineral::LowLevelMineral;
  ~Gold() = default;
  void Display() override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_GOLD_H_