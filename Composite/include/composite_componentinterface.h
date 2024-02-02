#ifndef COMPOSITE_COMPONENTINTERFACE_H_
#define COMPOSITE_COMPONENTINTERFACE_H_

#include <memory>
#include <string_view>

namespace component {

class ComponentInterface {
 public:
  virtual ~ComponentInterface() = default;
  virtual void Search(std::string_view keyword) = 0;
};

using ComponentInterfacePtr = std::shared_ptr<ComponentInterface>;

}

#endif // COMPOSITE_COMPONENTINTERFACE_H_