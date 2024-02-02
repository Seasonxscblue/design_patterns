#include "Tea.h"
#include <algorithm>
#include <iostream>

void Tea::Brew() { std::cout << "Stepping the tea" << std::endl; }

void Tea::AddCondiments() { std::cout << "Adding Lemon" << std::endl; }

bool Tea::CustomerWantsCondiments() {
  std::string answer = GetUserInput();

  std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
  if (answer[0] == 'y') {
    return true;
  }
  return false;
}

std::string Tea::GetUserInput() {
  std::string answer;

  std::cout << "Would you like lemon with your tea (y/n) ? ";

  std::getline(std::cin, answer);

  return answer;
}