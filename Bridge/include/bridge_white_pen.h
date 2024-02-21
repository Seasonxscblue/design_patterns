#ifndef BRIDGE_WHITE_PEN_H_
#define BRIDGE_WHITE_PEN_H_

#include "bridge_pen.h"

namespace bridge {

class WhitePen : public Pen {
 public:
  using Pen::Pen;
  void Draw() override;
};

} // namespace bridge

#endif // BRIDGE_WHITE_PEN_H_