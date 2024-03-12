#include "composite_folder.h"
#include <format>
#include <iostream>

void composite::Folder::Search(std::string_view keyword) {
  std::cout << std::format("Recursively search for {} in the folder {}\n",
                           keyword, this->name_);
  for (const auto &component: components_) {
    component->Search(keyword);
  }
}

void composite::Folder::Add(ComponentInterfacePtr c) {
  this->components_.push_back(std::move(c));
}