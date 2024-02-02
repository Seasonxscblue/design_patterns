#ifndef ABSTARCTFACTORY_LOWLEVELMINERAL_H_
#define ABSTARCTFACTORY_LOWLEVELMINERAL_H_

#include "abstract_factory_mineral.h"

namespace abstract_factory {

class LowLevelMineral : public Mineral {
 public:
  using Mineral::Mineral;
  virtual ~LowLevelMineral() = default;
};

using LowLevelMineralPtr = std::unique_ptr<LowLevelMineral>;

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_LOWLEVELMINERAL_H_