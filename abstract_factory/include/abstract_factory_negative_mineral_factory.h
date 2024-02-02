#ifndef ABSTARCTFACTORY_NEGATIVEMINERALFACTORY_H_
#define ABSTARCTFACTORY_NEGATIVEMINERALFACTORY_H_

#include "abstract_factory_interface.h"

namespace abstract_factory {

class NegativeMineralFactory : public AbstractFactoryInterface {
 public:
  NegativeMineralFactory() = default;
  ~NegativeMineralFactory() = default;
  LowLevelMineralPtr CreateLowLevel(unsigned int x, unsigned int y) override;
  MidLevelMineralPtr CreateMidLevel(unsigned int x, unsigned int y) override;
  HighLevelMineralPtr CreateHighLevel(unsigned int x, unsigned int y) override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_NEGATIVEMINERALFACTORY_H_