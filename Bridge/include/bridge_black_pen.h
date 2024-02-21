#ifndef BRIDGE_BLACK_PEN_H_
#define BRIDGE_BLACK_PEN_H_

#include "bridge_pen.h"

namespace bridge {

class BlackPen : public Pen {
 public:
  using Pen::Pen;
  void Draw() override;
};

} // namespace bridge

#endif // BRIDGE_BLACK_PEN_H_