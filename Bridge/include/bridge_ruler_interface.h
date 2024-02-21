#ifndef BRIDGE_RULER_INTERFACE_H_
#define BRIDGE_RULER_INTERFACE_H_

#include <memory>

namespace bridge {

class RulerInterface {
 public:
  virtual ~RulerInterface() = default;
  virtual void Regularize() = 0;
};

using RulerInterfacePtr = std::unique_ptr<RulerInterface>;

} // namespace bridge

#endif // BRIDGE_RULER_INTERFACE_H_