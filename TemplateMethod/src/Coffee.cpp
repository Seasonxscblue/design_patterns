#include "Coffee.h"
#include <algorithm>
#include <iostream>

void Coffee::Brew() {
  std::cout << "Dripping Coffee through filter" << std::endl;
}

void Coffee::AddCondiments() {
  std::cout << "Adding Sugar and Milk" << std::endl;
}

bool Coffee::CustomerWantsCondiments() {
  std::string answer = GetUserInput();

  std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
  if (answer[0] == 'y') {
    return true;
  }
  return false;
}

std::string Coffee::GetUserInput() {
  std::string answer;

  std::cout << "Would you like milk and sugar with your coffee (y/n) ? ";

  std::getline(std::cin, answer);

  return answer;
}