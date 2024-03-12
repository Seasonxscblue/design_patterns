#ifndef COMPOSITE_COMPONENT_INTERFACE_H_
#define COMPOSITE_COMPONENT_INTERFACE_H_

#include <memory>
#include <string_view>

namespace composite {

class ComponentInterface {
 public:
  virtual ~ComponentInterface() = default;
  virtual void Search(std::string_view keyword) = 0;
};

using ComponentInterfacePtr = std::unique_ptr<ComponentInterface>;

} // namespace component

#endif // COMPOSITE_COMPONENT_INTERFACE_H_