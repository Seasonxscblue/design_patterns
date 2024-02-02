#ifndef ABSTARCTFACTORY_POSITIVEMINERALFACTORY_H_
#define ABSTARCTFACTORY_POSITIVEMINERALFACTORY_H_

#include "abstract_factory_interface.h"

namespace abstract_factory {

class PositiveMineralFactory : public AbstractFactoryInterface {
 public:
  PositiveMineralFactory() = default;
  ~PositiveMineralFactory() = default;
  LowLevelMineralPtr CreateLowLevel(unsigned int x, unsigned int y) override;
  MidLevelMineralPtr CreateMidLevel(unsigned int x, unsigned int y) override;
  HighLevelMineralPtr CreateHighLevel(unsigned int x, unsigned int y) override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_POSITIVEMINERALFACTORY_H_