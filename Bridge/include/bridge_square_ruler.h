#ifndef BRIDGE_SQUARE_RULER_H_
#define BRIDGE_SQUARE_RULER_H_

#include "bridge_ruler_interface.h"

namespace bridge {

class SquareRuler : public RulerInterface {
 public:
  void Regularize() override;
};

} // namespace bridge

#endif // BRIDGE_SQUARE_RULER_H_