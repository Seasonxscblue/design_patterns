#ifndef ABSTARCTFACTORY_SACK_H_
#define ABSTARCTFACTORY_SACK_H_

#include "abstract_factory_low_level_mineral.h"

namespace abstract_factory {

class Sack : public LowLevelMineral {
 public:
  using LowLevelMineral::LowLevelMineral;
  ~Sack() = default;
  void Display() override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_SACK_H_