#ifndef COMPOSITE_FILE_H_
#define COMPOSITE_FILE_H_

#include "composite_component_interface.h"

namespace composite {

class File : public ComponentInterface {
 public:
  File(std::string_view name) : name_{name} {}
  ~File() = default;
  void Search(std::string_view keyword) override;

 private:
  std::string_view name_;
};

}

#endif // COMPOSITE_FILE_H_