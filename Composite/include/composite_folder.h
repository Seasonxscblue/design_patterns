#ifndef COMPOSITE_FOLDER_H_
#define COMPOSITE_FOLDER_H_

#include "composite_componentinterface.h"
#include <vector>

namespace component {

class Folder : public ComponentInterface {
public:
  Folder(std::string_view name) : name_{name} {}
  ~Folder() = default;
  void Search(std::string_view keyword) override;
  void Add(ComponentInterface &c);

private:
  std::string_view name_;
  std::vector<ComponentInterface> components_;
};

using FolderPtr = std::shared_ptr<Folder>;

}; // namespace component

#endif // COMPOSITE_FOLDER_H_