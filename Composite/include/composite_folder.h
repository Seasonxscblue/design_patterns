#ifndef COMPOSITE_FOLDER_H_
#define COMPOSITE_FOLDER_H_

#include "composite_component_interface.h"
#include <vector>

namespace composite {

class Folder : public ComponentInterface {
 public:
  Folder(std::string_view name) : name_{name} {}
  ~Folder() = default;
  void Add(ComponentInterfacePtr c);
  void Search(std::string_view keyword) override;

 private:
  std::string_view name_;
  std::vector<ComponentInterfacePtr> components_;
};

using FolderPtr = std::unique_ptr<Folder>;

}; // namespace component

#endif // COMPOSITE_FOLDER_H_