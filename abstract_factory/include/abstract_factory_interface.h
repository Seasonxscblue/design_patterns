#ifndef ABSTARCTFACTORY_ABSTARCTFACTORYINTERFACE_H_
#define ABSTARCTFACTORY_ABSTARCTFACTORYINTERFACE_H_

#include "abstract_factory_high_level_mineral.h"
#include "abstract_factory_low_level_mineral.h"
#include "abstract_factory_mid_level_mineral.h"

namespace abstract_factory {

class AbstractFactoryInterface {
 public:
  virtual ~AbstractFactoryInterface() = default;
  virtual LowLevelMineralPtr CreateLowLevel(uint32_t x, uint32_t y) = 0;
  virtual MidLevelMineralPtr CreateMidLevel(uint32_t x, uint32_t y) = 0;
  virtual HighLevelMineralPtr CreateHighLevel(uint32_t x, uint32_t y) = 0;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_ABSTARCTFACTORYINTERFACE_H_