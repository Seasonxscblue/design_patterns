#include "composite_folder.h"
#include <iostream>

namespace component {

void Folder::Search(std::string_view keyword) {
  std::cout << "在文件夹" << this->name_ << "中递归搜索关键" << keyword
            << std::endl;
  for (const auto &component : components_) {
    component->Search(keyword);
  }
}

inline void Folder::Add(ComponentPtr &c) { this->components_.push_back(c); }

}