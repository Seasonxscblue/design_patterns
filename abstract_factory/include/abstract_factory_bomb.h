#ifndef ABSTARCTFACTORY_BOMB_H_
#define ABSTARCTFACTORY_BOMB_H_

#include "abstract_factory_high_level_mineral.h"

namespace abstract_factory {

class Bomb : public HighLevelMineral {
 public:
  using HighLevelMineral::HighLevelMineral;
  ~Bomb() = default;
  void Display() override;
};

} // namespace abstract_factory

#endif // ABSTARCTFACTORY_BOMB_H_