#include "composite_file.h"
#include <iostream>
#include <format>

void composite::File::Search(std::string_view keyword) {
  std::cout << std::format("Recursively search for {} in the file {}\n",
                           keyword, this->name_);
}