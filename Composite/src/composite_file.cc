#include "composite_file.h"
#include <iostream>

namespace component {

inline std::string_view File::name() { return this->name_; }

void File::Search(std::string_view keyword) {
  std::cout << "在文件" << this->name_ << "中递归搜索关键" << keyword
            << std::endl;
}

};