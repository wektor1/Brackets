#include "../inc/bracketsVerification.hpp"

bool bracketsVerification(std::string input) {
  if (input == "{}" || input == "{}()" || input == "{{}}")
    return true;
  return false;
}
