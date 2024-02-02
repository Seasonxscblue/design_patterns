#ifndef ABSTARCTFACTORY_STONE_H_
#define ABSTARCTFACTORY_STONE_H_

#include "abstract_factory_mid_level_mineral.h"

namespace abstract_factory {

class Stone : public MidLevelMineral {
 public:
  using MidLevelMineral::MidLevelMineral;
  ~Stone() = default;
  void Display() override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_STONE_H_