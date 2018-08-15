#include "../inc/bracketsVerification.hpp"
#include <iostream>
#include <string>

int main() {
  std::string brackets{""};
  std::cout << "Are brackets balanced: " << bracketsVerification(brackets)
            << std::endl;
  return 0;
}
