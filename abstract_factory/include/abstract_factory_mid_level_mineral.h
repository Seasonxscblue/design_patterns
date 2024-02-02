#ifndef ABSTARCTFACTORY_MIDLEVELMINERAL_H_
#define ABSTARCTFACTORY_MIDLEVELMINERAL_H_

#include "abstract_factory_mineral.h"

namespace abstract_factory {

class MidLevelMineral : public Mineral {
 public:
  using Mineral::Mineral;
  virtual ~MidLevelMineral() = default;
};

using MidLevelMineralPtr = std::unique_ptr<MidLevelMineral>;

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_MIDLEVELMINERAL_H_