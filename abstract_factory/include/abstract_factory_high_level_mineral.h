#ifndef ABSTARCTFACTORY_HIGHLEVELMINERAL_H_
#define ABSTARCTFACTORY_HIGHLEVELMINERAL_H_

#include "abstract_factory_mineral.h"

namespace abstract_factory {

class HighLevelMineral : public Mineral {
 public:
  using Mineral::Mineral;
  virtual ~HighLevelMineral() = default;
};

using HighLevelMineralPtr = std::unique_ptr<HighLevelMineral>;

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_HIGHLEVELMINERAL_H_