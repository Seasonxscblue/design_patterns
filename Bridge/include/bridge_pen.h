#ifndef BRIDGE_PEN_H_
#define BRIDGE_PEN_H_

#include "bridge_ruler_interface.h"

namespace bridge {

class Pen {
 public:
  Pen(RulerInterfacePtr ruler);
  virtual ~Pen() = default;
  virtual void Draw() = 0;

 protected:
  RulerInterfacePtr ruler_;
};

} // namespace bridge

#endif // BRIDGE_PEN_H_