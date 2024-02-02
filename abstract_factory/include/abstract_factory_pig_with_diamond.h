#ifndef ABSTARCTFACTORY_PIGWITHDIAMOND_H_
#define ABSTARCTFACTORY_PIGWITHDIAMOND_H_

#include "abstract_factory_high_level_mineral.h"

namespace abstract_factory {

class PigWithDiamond : public HighLevelMineral {
 public:
  using HighLevelMineral::HighLevelMineral;
  ~PigWithDiamond() = default;
  void Display() override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_PIGWITHDIAMOND_H_