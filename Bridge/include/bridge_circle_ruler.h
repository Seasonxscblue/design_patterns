#ifndef BRIDGE_CIRCLE_RULER_H_
#define BRIDGE_CIRCLE_RULER_H_

#include "bridge_ruler_interface.h"

namespace bridge {

class CircleRuler : public RulerInterface {
 public:
  void Regularize() override;
};

} // namespace bridge

#endif // BRIDGE_CIRCLE_RULER_H_