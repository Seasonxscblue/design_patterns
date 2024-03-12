#include "composite_component_interface.h"
#include "composite_file.h"
#include "composite_folder.h"

int main() {
  auto linux_master{std::make_unique<composite::Folder>("linux")};
  auto include{std::make_unique<composite::Folder>("include")};
  auto linux{std::make_unique<composite::Folder>("linux")};
  auto i3c{std::make_unique<composite::Folder>("i3c")};
  i3c->Add(std::move(std::make_unique<composite::File>("ccc.h")));
  i3c->Add(std::move(std::make_unique<composite::File>("device.h")));
  i3c->Add(std::move(std::make_unique<composite::File>("master.h")));
  linux->Add(std::move(i3c));
  include->Add(std::move(linux));
  linux_master->Add(std::move(include));

  linux_master->Search("I3C_CCC_ENEC");
  return 0;
}