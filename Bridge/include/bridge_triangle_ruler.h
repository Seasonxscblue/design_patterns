#ifndef BRIDGE_TRIANGLE_RULER_H_
#define BRIDGE_TRIANGLE_RULER_H_

#include "bridge_ruler_interface.h"

namespace bridge {

class TriangleRuler : public RulerInterface {
 public:
  void Regularize() override;
};

} // namespace bridge

#endif // BRIDGE_TRIANGLE_RULER_H_