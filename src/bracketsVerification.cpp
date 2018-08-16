#include "../inc/bracketsVerification.hpp"

bool bracketsVerification(std::string input) {
  if (!input.empty()) {
    auto last_character = input.at(input.length() - 1);
    if (last_character == '}' || last_character == ')')
      return true;
  }
  return false;
}
