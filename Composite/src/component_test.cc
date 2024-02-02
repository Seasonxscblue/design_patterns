//#include "compos"
#include "Folder.h"
#include "IComponent.h"

int main() {
  IComponentPtr file1{std::make_shared<File>("File1")};
  IComponentPtr file2{std::make_shared<File>("File2")};
  IComponentPtr file3{std::make_shared<File>("File3")};

  FolderPtr folder1{std::make_shared<Folder>("Folder1")};
  folder1->Add(file1);

  FolderPtr folder2{std::make_shared<Folder>("Folder2")};
  folder2->Add(file2);
  folder2->Add(file3);

  IComponentPtr folder1_assist = std::dynamic_pointer_cast<IComponent>(folder1);
  folder2->Add(folder1_assist);

  folder2->Search("keyword");
  return 0;
}